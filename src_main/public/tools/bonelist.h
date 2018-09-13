//====== Copyright ?1996-2005, Valve Corporation, All rights reserved. =======
//
// Purpose: 
//
//=============================================================================

#ifndef BONELIST_H
#define BONELIST_H
#ifdef _WIN32
#pragma once
#endif

#include "studio.h"

// 看上去是骨骼列表，核心熟悉有记录骨骼的位置和旋转
class CBoneList
{
public:

	CBoneList();

	void Release();

	static CBoneList *Alloc();

public:

	int			m_nBones;
	Vector		m_vecPos[MAXSTUDIOBONES];
	Quaternion	m_quatRot[MAXSTUDIOBONES];

private:
	bool		m_bShouldDelete;
};

// 弯曲列表
class CFlexList
{
public:

	CFlexList();

	void Release();

	static CFlexList *Alloc();

public:

	int			m_nNumFlexes;
	float		m_flexWeights[MAXSTUDIOFLEXCTRL];

private:
	bool		m_bShouldDelete;
};

#endif // BONELIST_H
