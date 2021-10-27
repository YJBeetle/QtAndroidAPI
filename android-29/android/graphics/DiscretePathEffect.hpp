#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"


namespace android::graphics
{
	class DiscretePathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		DiscretePathEffect(QAndroidJniObject obj);
		// Constructors
		DiscretePathEffect(jfloat &arg0, jfloat &arg1);
		DiscretePathEffect() = default;
		
		// Methods
	};
} // namespace android::graphics

