#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"

namespace android::graphics
{
	class PathEffect;
}

namespace android::graphics
{
	class SumPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		SumPathEffect(QAndroidJniObject obj);
		// Constructors
		SumPathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1);
		SumPathEffect() = default;
		
		// Methods
	};
} // namespace android::graphics

