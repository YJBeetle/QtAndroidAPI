#pragma once

#include "../../JFloatArray.hpp"
#include "./OrientedBoundingBox.def.hpp"
#include "../graphics/Path.def.hpp"
#include "../graphics/RectF.def.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./GestureStroke.def.hpp"

namespace android::gesture
{
	// Fields
	inline android::graphics::RectF GestureStroke::boundingBox()
	{
		return getObjectField(
			"boundingBox",
			"Landroid/graphics/RectF;"
		);
	}
	inline jfloat GestureStroke::length()
	{
		return getField<jfloat>(
			"length"
		);
	}
	inline JFloatArray GestureStroke::points()
	{
		return getObjectField(
			"points",
			"[F"
		);
	}
	
	// Constructors
	inline GestureStroke::GestureStroke(java::util::ArrayList arg0)
		: JObject(
			"android.gesture.GestureStroke",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void GestureStroke::clearPath() const
	{
		callMethod<void>(
			"clearPath",
			"()V"
		);
	}
	inline JObject GestureStroke::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::gesture::OrientedBoundingBox GestureStroke::computeOrientedBoundingBox() const
	{
		return callObjectMethod(
			"computeOrientedBoundingBox",
			"()Landroid/gesture/OrientedBoundingBox;"
		);
	}
	inline android::graphics::Path GestureStroke::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	inline android::graphics::Path GestureStroke::toPath(jfloat arg0, jfloat arg1, jint arg2) const
	{
		return callObjectMethod(
			"toPath",
			"(FFI)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::gesture

// Base class headers

