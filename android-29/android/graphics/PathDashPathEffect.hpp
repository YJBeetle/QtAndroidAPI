#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"

namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class PathDashPathEffect_Style;
}

namespace android::graphics
{
	class PathDashPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		PathDashPathEffect(QAndroidJniObject obj);
		// Constructors
		PathDashPathEffect(android::graphics::Path arg0, jfloat arg1, jfloat arg2, android::graphics::PathDashPathEffect_Style arg3);
		PathDashPathEffect() = default;
		
		// Methods
	};
} // namespace android::graphics

