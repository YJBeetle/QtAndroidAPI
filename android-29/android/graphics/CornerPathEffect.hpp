#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"


namespace android::graphics
{
	class CornerPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		CornerPathEffect(QAndroidJniObject obj);
		// Constructors
		CornerPathEffect(jfloat arg0);
		CornerPathEffect() = default;
		
		// Methods
	};
} // namespace android::graphics

