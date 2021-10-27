#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"


namespace android::graphics
{
	class DashPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		DashPathEffect(QAndroidJniObject obj);
		// Constructors
		DashPathEffect(jfloatArray &arg0, jfloat &arg1);
		DashPathEffect() = default;
		
		// Methods
	};
} // namespace android::graphics

