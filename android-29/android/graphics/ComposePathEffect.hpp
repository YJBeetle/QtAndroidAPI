#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"

namespace android::graphics
{
	class PathEffect;
}

namespace android::graphics
{
	class ComposePathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		ComposePathEffect(QAndroidJniObject obj);
		// Constructors
		ComposePathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1);
		ComposePathEffect() = default;
		
		// Methods
	};
} // namespace android::graphics

