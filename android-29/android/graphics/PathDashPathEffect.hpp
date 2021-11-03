#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathDashPathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		PathDashPathEffect(QAndroidJniObject obj);
		
		// Constructors
		PathDashPathEffect(android::graphics::Path arg0, jfloat arg1, jfloat arg2, android::graphics::PathDashPathEffect_Style arg3);
		
		// Methods
	};
} // namespace android::graphics

