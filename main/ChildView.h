
// ChildView.h : interface of the CChildView class
//


#pragma once
#include "Maze.h"
#include "Player.h"


// CChildView window

class CChildView : public CWnd
{
// Construction
public:
	CChildView();
	
public:
	Maze maze;
	Player player;
	int cellSize = 30;
// Operations
public:

// Overrides
protected:
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

