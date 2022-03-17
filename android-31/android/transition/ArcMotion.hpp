#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Path.def.hpp"
#include "./ArcMotion.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline ArcMotion::ArcMotion()
		: android::transition::PathMotion(
			"android.transition.ArcMotion",
			"()V"
		) {}
	inline ArcMotion::ArcMotion(android::content::Context arg0, JObject arg1)
		: android::transition::PathMotion(
			"android.transition.ArcMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat ArcMotion::getMaximumAngle() const
	{
		return callMethod<jfloat>(
			"getMaximumAngle",
			"()F"
		);
	}
	inline jfloat ArcMotion::getMinimumHorizontalAngle() const
	{
		return callMethod<jfloat>(
			"getMinimumHorizontalAngle",
			"()F"
		);
	}
	inline jfloat ArcMotion::getMinimumVerticalAngle() const
	{
		return callMethod<jfloat>(
			"getMinimumVerticalAngle",
			"()F"
		);
	}
	inline android::graphics::Path ArcMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callObjectMethod(
			"getPath",
			"(FFFF)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void ArcMotion::setMaximumAngle(jfloat arg0) const
	{
		callMethod<void>(
			"setMaximumAngle",
			"(F)V",
			arg0
		);
	}
	inline void ArcMotion::setMinimumHorizontalAngle(jfloat arg0) const
	{
		callMethod<void>(
			"setMinimumHorizontalAngle",
			"(F)V",
			arg0
		);
	}
	inline void ArcMotion::setMinimumVerticalAngle(jfloat arg0) const
	{
		callMethod<void>(
			"setMinimumVerticalAngle",
			"(F)V",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./PathMotion.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
