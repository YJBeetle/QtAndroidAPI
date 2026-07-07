#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BackEvent.def.hpp"

namespace android::window
{
	// Fields
	inline jint BackEvent::EDGE_LEFT()
	{
		return getStaticField<jint>(
			"android.window.BackEvent",
			"EDGE_LEFT"
		);
	}
	inline jint BackEvent::EDGE_NONE()
	{
		return getStaticField<jint>(
			"android.window.BackEvent",
			"EDGE_NONE"
		);
	}
	inline jint BackEvent::EDGE_RIGHT()
	{
		return getStaticField<jint>(
			"android.window.BackEvent",
			"EDGE_RIGHT"
		);
	}
	
	// Constructors
	inline BackEvent::BackEvent(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3)
		: JObject(
			"android.window.BackEvent",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	inline BackEvent::BackEvent(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jlong arg4)
		: JObject(
			"android.window.BackEvent",
			"(FFFIJ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline jboolean BackEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong BackEvent::getFrameTimeMillis() const
	{
		return callMethod<jlong>(
			"getFrameTimeMillis",
			"()J"
		);
	}
	inline jfloat BackEvent::getProgress() const
	{
		return callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	inline jint BackEvent::getSwipeEdge() const
	{
		return callMethod<jint>(
			"getSwipeEdge",
			"()I"
		);
	}
	inline jfloat BackEvent::getTouchX() const
	{
		return callMethod<jfloat>(
			"getTouchX",
			"()F"
		);
	}
	inline jfloat BackEvent::getTouchY() const
	{
		return callMethod<jfloat>(
			"getTouchY",
			"()F"
		);
	}
	inline JString BackEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::window

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::window;
#endif
