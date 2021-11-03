#include "../../JFloatArray.hpp"
#include "./OrientedBoundingBox.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/RectF.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureStroke.hpp"

namespace android::gesture
{
	// Fields
	android::graphics::RectF GestureStroke::boundingBox()
	{
		return getObjectField(
			"boundingBox",
			"Landroid/graphics/RectF;"
		);
	}
	jfloat GestureStroke::length()
	{
		return getField<jfloat>(
			"length"
		);
	}
	JFloatArray GestureStroke::points()
	{
		return getObjectField(
			"points",
			"[F"
		);
	}
	
	// QAndroidJniObject forward
	GestureStroke::GestureStroke(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GestureStroke::GestureStroke(java::util::ArrayList arg0)
		: JObject(
			"android.gesture.GestureStroke",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		) {}
	
	// Methods
	void GestureStroke::clearPath() const
	{
		callMethod<void>(
			"clearPath",
			"()V"
		);
	}
	JObject GestureStroke::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::gesture::OrientedBoundingBox GestureStroke::computeOrientedBoundingBox() const
	{
		return callObjectMethod(
			"computeOrientedBoundingBox",
			"()Landroid/gesture/OrientedBoundingBox;"
		);
	}
	android::graphics::Path GestureStroke::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	android::graphics::Path GestureStroke::toPath(jfloat arg0, jfloat arg1, jint arg2) const
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

