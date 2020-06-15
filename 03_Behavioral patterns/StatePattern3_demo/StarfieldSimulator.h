// StarfieldSimulator.h: interface for the CStarfieldSimulator class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STARFIELDSIMULATOR_H__CFA92937_8E36_11D4_87C2_00C04F73BBBB__INCLUDED_)
#define AFX_STARFIELDSIMULATOR_H__CFA92937_8E36_11D4_87C2_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "Star.h"

class CStarfieldSimulator  
{
public:
	void SetCrazyMode(BOOL bOn);
	void SetStarSpeed(int iSpeed);
	void Update();
	void IncrementZ(double value);
	void Rotate(double alpha);
	CPtrArray* GetStars();
	void SetNbStars(int iNb, CRect rectArea);
	CStarfieldSimulator();
	virtual ~CStarfieldSimulator();

private:
	BOOL m_bCrazy;
	CPtrArray m_Stars;
protected:
	int m_iStarSpeed;
	int m_nNextFrameTime;
	CStar* GetNewStar();
	CRect m_Rect;
	void FreeStars();
};

#endif // !defined(AFX_STARFIELDSIMULATOR_H__CFA92937_8E36_11D4_87C2_00C04F73BBBB__INCLUDED_)
