#pragma once

#include "../../JObject.hpp"
#include "./MotionEvent_PointerProperties.def.hpp"

namespace android::view
{
	// Fields
	inline jint MotionEvent_PointerProperties::id()
	{
		return getField<jint>(
			"id"
		);
	}
	inline jint MotionEvent_PointerProperties::toolType()
	{
		return getField<jint>(
			"toolType"
		);
	}
	
	// Constructors
	inline MotionEvent_PointerProperties::MotionEvent_PointerProperties()
		: JObject(
			"android.view.MotionEvent$PointerProperties",
			"()V"
		) {}
	inline MotionEvent_PointerProperties::MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0)
		: JObject(
			"android.view.MotionEvent$PointerProperties",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void MotionEvent_PointerProperties::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void MotionEvent_PointerProperties::copyFrom(android::view::MotionEvent_PointerProperties arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.object()
		);
	}
	inline jboolean MotionEvent_PointerProperties::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MotionEvent_PointerProperties::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::view

// Base class headers

