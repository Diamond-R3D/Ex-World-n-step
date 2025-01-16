#include "World.h"

void World::Init()
{
	Entities.push_back(new StaticObject(12, 5));
	Entities.push_back(new BreakableObject(5, 12, 1));
	Entities.push_back(new Mob(1, 1, 20, 1, 1, 1));
	Entities.push_back(new Player(-10, 2, 10, 3, 3, 1));
}

bool World::Step()
{
    for (int i = 0; i < Entities.size(); ++i) {
        Entity* entity = Entities[i];

        if (BreakableObject* broj = dynamic_cast<BreakableObject*>(entity))
        {
            brojlife = broj->GetCurrentLife();
            TargetX = broj->GetX();
            TargetY = broj->GetY();
        }
        else if (StaticObject* stoj = dynamic_cast<StaticObject*>(entity))
        {
            std::cout << " " << std::endl;
        }
        else if (Mob* mob = dynamic_cast<Mob*>(entity))
        {
            moblife = mob->GetCurrentLife();
            if (moblife > 0)
            {
                mob->Move(mob->GetX(), mob->GetY(), TargetX, TargetY);
                mobTargetX = mob->GetX();
                mobTargetY = mob->GetY();
            }
        }
        else if (Player* player = dynamic_cast<Player*>(entity))
        {
            if (moblife > 0)
            {
                player->Move(player->GetX(), player->GetY(), mobTargetX, mobTargetY);
            }
            if (moblife <= 0 && brojlife >= 0)
            {
                player->Move(player->GetX(), player->GetY(), TargetX, TargetY);
            }
            if (player->GetX() == TargetX && player->GetY() == TargetY)
                for (Entity* otherEntitys : Entities)
                {
                    if (BreakableObject* broj = dynamic_cast<BreakableObject*>(otherEntitys))
                    {                        
                        if (brojlife > 0)
                        player->Attack(broj);
                    }
                }
            if (player->GetX() == mobTargetX && player->GetY() == mobTargetY)
            {
                for (Entity* otherEntity : Entities)
                {
                    if (Mob* mob = dynamic_cast<Mob*>(otherEntity))
                    {
                        if (moblife > 0)
                            player->Attack(mob);
                    }
                }
            }
        }
    }
    if (brojlife <= 0 && moblife <= 0)
    {
        std::cout << "Player killed all entities. Simulation finished !" << std::endl;
        return false;
    }
    else
        return true;
}
