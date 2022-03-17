#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Path.def.hpp"
#include "./PathMotion.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline PathMotion::PathMotion()
		: JObject(
			"android.transition.PathMotion",
			"()V"
		) {}
	inline PathMotion::PathMotion(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.transition.PathMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::graphics::Path PathMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
} // namespace android::transition

// Base class headers

