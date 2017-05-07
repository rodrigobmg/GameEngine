//
// 2017-03-25, jjuiddong
//
#pragma once


class cDisplayControl
{
public:
	cDisplayControl();
	virtual ~cDisplayControl();

	void Update(const float deltaSeconds);
	void Render(graphic::cRenderer &renderer, const float deltaSeconds);
	void Clear();


public:
	bool m_isWireFrame = false;
	bool m_isBackfaceCulling = true;
	bool m_isGround = true;
	bool m_isShadow = true;
	bool m_isWater = true;
	bool m_isSkybox = true;
	bool m_isWaterSurface = false;
};