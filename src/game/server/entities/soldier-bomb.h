/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_ENTITIES_SOLDIER_BOMB_H
#define GAME_SERVER_ENTITIES_SOLDIER_BOMB_H

#include <base/tl/array.h>
#include <game/server/entity.h>

class CSoldierBomb : public CEntity
{
public:
	CSoldierBomb(CGameWorld *pGameWorld, vec2 Pos, int Owner);
	virtual ~CSoldierBomb();

	virtual void Snap(int SnappingClient);
	virtual void Reset();
	virtual void TickPaused();
	virtual void Tick();
	bool Explode();
	bool AddBomb();
	int GetNbBombs() { return m_nbBomb; }

private:
	int m_StartTick;
	array<int> m_IDBomb;
	int m_nbBomb;
	int m_nbMaxBomb;

public:
	float m_DetectionRadius;
	int m_Owner;
};

#endif
