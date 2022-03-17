#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../graphics/Matrix.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./MotionEvent_PointerCoords.def.hpp"
#include "./MotionEvent_PointerProperties.def.hpp"
#include "../../JString.hpp"
#include "./MotionEvent.def.hpp"

namespace android::view
{
	// Fields
	inline jint MotionEvent::ACTION_BUTTON_PRESS()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_BUTTON_PRESS"
		);
	}
	inline jint MotionEvent::ACTION_BUTTON_RELEASE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_BUTTON_RELEASE"
		);
	}
	inline jint MotionEvent::ACTION_CANCEL()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_CANCEL"
		);
	}
	inline jint MotionEvent::ACTION_DOWN()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_DOWN"
		);
	}
	inline jint MotionEvent::ACTION_HOVER_ENTER()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_HOVER_ENTER"
		);
	}
	inline jint MotionEvent::ACTION_HOVER_EXIT()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_HOVER_EXIT"
		);
	}
	inline jint MotionEvent::ACTION_HOVER_MOVE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_HOVER_MOVE"
		);
	}
	inline jint MotionEvent::ACTION_MASK()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_MASK"
		);
	}
	inline jint MotionEvent::ACTION_MOVE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_MOVE"
		);
	}
	inline jint MotionEvent::ACTION_OUTSIDE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_OUTSIDE"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_1_DOWN()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_1_DOWN"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_1_UP()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_1_UP"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_2_DOWN()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_2_DOWN"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_2_UP()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_2_UP"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_3_DOWN()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_3_DOWN"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_3_UP()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_3_UP"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_DOWN()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_DOWN"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_ID_MASK()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_ID_MASK"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_ID_SHIFT()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_ID_SHIFT"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_INDEX_MASK()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_INDEX_MASK"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_INDEX_SHIFT()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_INDEX_SHIFT"
		);
	}
	inline jint MotionEvent::ACTION_POINTER_UP()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_UP"
		);
	}
	inline jint MotionEvent::ACTION_SCROLL()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_SCROLL"
		);
	}
	inline jint MotionEvent::ACTION_UP()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_UP"
		);
	}
	inline jint MotionEvent::AXIS_BRAKE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_BRAKE"
		);
	}
	inline jint MotionEvent::AXIS_DISTANCE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_DISTANCE"
		);
	}
	inline jint MotionEvent::AXIS_GAS()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GAS"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_1()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_1"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_10()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_10"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_11()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_11"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_12()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_12"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_13()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_13"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_14()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_14"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_15()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_15"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_16()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_16"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_2()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_2"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_3()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_3"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_4()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_4"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_5()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_5"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_6()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_6"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_7()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_7"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_8()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_8"
		);
	}
	inline jint MotionEvent::AXIS_GENERIC_9()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_9"
		);
	}
	inline jint MotionEvent::AXIS_HAT_X()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_HAT_X"
		);
	}
	inline jint MotionEvent::AXIS_HAT_Y()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_HAT_Y"
		);
	}
	inline jint MotionEvent::AXIS_HSCROLL()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_HSCROLL"
		);
	}
	inline jint MotionEvent::AXIS_LTRIGGER()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_LTRIGGER"
		);
	}
	inline jint MotionEvent::AXIS_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_ORIENTATION"
		);
	}
	inline jint MotionEvent::AXIS_PRESSURE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_PRESSURE"
		);
	}
	inline jint MotionEvent::AXIS_RELATIVE_X()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RELATIVE_X"
		);
	}
	inline jint MotionEvent::AXIS_RELATIVE_Y()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RELATIVE_Y"
		);
	}
	inline jint MotionEvent::AXIS_RTRIGGER()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RTRIGGER"
		);
	}
	inline jint MotionEvent::AXIS_RUDDER()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RUDDER"
		);
	}
	inline jint MotionEvent::AXIS_RX()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RX"
		);
	}
	inline jint MotionEvent::AXIS_RY()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RY"
		);
	}
	inline jint MotionEvent::AXIS_RZ()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RZ"
		);
	}
	inline jint MotionEvent::AXIS_SCROLL()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_SCROLL"
		);
	}
	inline jint MotionEvent::AXIS_SIZE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_SIZE"
		);
	}
	inline jint MotionEvent::AXIS_THROTTLE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_THROTTLE"
		);
	}
	inline jint MotionEvent::AXIS_TILT()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TILT"
		);
	}
	inline jint MotionEvent::AXIS_TOOL_MAJOR()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOOL_MAJOR"
		);
	}
	inline jint MotionEvent::AXIS_TOOL_MINOR()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOOL_MINOR"
		);
	}
	inline jint MotionEvent::AXIS_TOUCH_MAJOR()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOUCH_MAJOR"
		);
	}
	inline jint MotionEvent::AXIS_TOUCH_MINOR()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOUCH_MINOR"
		);
	}
	inline jint MotionEvent::AXIS_VSCROLL()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_VSCROLL"
		);
	}
	inline jint MotionEvent::AXIS_WHEEL()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_WHEEL"
		);
	}
	inline jint MotionEvent::AXIS_X()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_X"
		);
	}
	inline jint MotionEvent::AXIS_Y()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_Y"
		);
	}
	inline jint MotionEvent::AXIS_Z()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_Z"
		);
	}
	inline jint MotionEvent::BUTTON_BACK()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_BACK"
		);
	}
	inline jint MotionEvent::BUTTON_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_FORWARD"
		);
	}
	inline jint MotionEvent::BUTTON_PRIMARY()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_PRIMARY"
		);
	}
	inline jint MotionEvent::BUTTON_SECONDARY()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_SECONDARY"
		);
	}
	inline jint MotionEvent::BUTTON_STYLUS_PRIMARY()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_STYLUS_PRIMARY"
		);
	}
	inline jint MotionEvent::BUTTON_STYLUS_SECONDARY()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_STYLUS_SECONDARY"
		);
	}
	inline jint MotionEvent::BUTTON_TERTIARY()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_TERTIARY"
		);
	}
	inline jint MotionEvent::CLASSIFICATION_AMBIGUOUS_GESTURE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"CLASSIFICATION_AMBIGUOUS_GESTURE"
		);
	}
	inline jint MotionEvent::CLASSIFICATION_DEEP_PRESS()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"CLASSIFICATION_DEEP_PRESS"
		);
	}
	inline jint MotionEvent::CLASSIFICATION_NONE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"CLASSIFICATION_NONE"
		);
	}
	inline JObject MotionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.MotionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MotionEvent::EDGE_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_BOTTOM"
		);
	}
	inline jint MotionEvent::EDGE_LEFT()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_LEFT"
		);
	}
	inline jint MotionEvent::EDGE_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_RIGHT"
		);
	}
	inline jint MotionEvent::EDGE_TOP()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_TOP"
		);
	}
	inline jint MotionEvent::FLAG_WINDOW_IS_OBSCURED()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"FLAG_WINDOW_IS_OBSCURED"
		);
	}
	inline jint MotionEvent::FLAG_WINDOW_IS_PARTIALLY_OBSCURED()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"FLAG_WINDOW_IS_PARTIALLY_OBSCURED"
		);
	}
	inline jint MotionEvent::INVALID_POINTER_ID()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"INVALID_POINTER_ID"
		);
	}
	inline jint MotionEvent::TOOL_TYPE_ERASER()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_ERASER"
		);
	}
	inline jint MotionEvent::TOOL_TYPE_FINGER()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_FINGER"
		);
	}
	inline jint MotionEvent::TOOL_TYPE_MOUSE()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_MOUSE"
		);
	}
	inline jint MotionEvent::TOOL_TYPE_STYLUS()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_STYLUS"
		);
	}
	inline jint MotionEvent::TOOL_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString MotionEvent::actionToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"actionToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint MotionEvent::axisFromString(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.view.MotionEvent",
			"axisFromString",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString MotionEvent::axisToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"axisToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::view::MotionEvent MotionEvent::obtain(android::view::MotionEvent arg0)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;",
			arg0.object()
		);
	}
	inline android::view::MotionEvent MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJIFFI)Landroid/view/MotionEvent;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline android::view::MotionEvent MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJIFFFFIFFII)Landroid/view/MotionEvent;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11
		);
	}
	inline android::view::MotionEvent MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, JIntArray arg4, JArray arg5, jint arg6, jfloat arg7, jfloat arg8, jint arg9, jint arg10, jint arg11, jint arg12)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJII[I[Landroid/view/MotionEvent$PointerCoords;IFFIIII)Landroid/view/MotionEvent;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>(),
			arg5.object<jarray>(),
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11,
			arg12
		);
	}
	inline android::view::MotionEvent MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jint arg8, jfloat arg9, jfloat arg10, jint arg11, jint arg12)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJIIFFFFIFFII)Landroid/view/MotionEvent;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11,
			arg12
		);
	}
	inline android::view::MotionEvent MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, JArray arg4, JArray arg5, jint arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11, jint arg12, jint arg13)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJII[Landroid/view/MotionEvent$PointerProperties;[Landroid/view/MotionEvent$PointerCoords;IIFFIIII)Landroid/view/MotionEvent;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jarray>(),
			arg5.object<jarray>(),
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11,
			arg12,
			arg13
		);
	}
	inline android::view::MotionEvent MotionEvent::obtainNoHistory(android::view::MotionEvent arg0)
	{
		return callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtainNoHistory",
			"(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;",
			arg0.object()
		);
	}
	inline void MotionEvent::addBatch(jlong arg0, JArray arg1, jint arg2) const
	{
		callMethod<void>(
			"addBatch",
			"(J[Landroid/view/MotionEvent$PointerCoords;I)V",
			arg0,
			arg1.object<jarray>(),
			arg2
		);
	}
	inline void MotionEvent::addBatch(jlong arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5) const
	{
		callMethod<void>(
			"addBatch",
			"(JFFFFI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline jint MotionEvent::findPointerIndex(jint arg0) const
	{
		return callMethod<jint>(
			"findPointerIndex",
			"(I)I",
			arg0
		);
	}
	inline jint MotionEvent::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	inline jint MotionEvent::getActionButton() const
	{
		return callMethod<jint>(
			"getActionButton",
			"()I"
		);
	}
	inline jint MotionEvent::getActionIndex() const
	{
		return callMethod<jint>(
			"getActionIndex",
			"()I"
		);
	}
	inline jint MotionEvent::getActionMasked() const
	{
		return callMethod<jint>(
			"getActionMasked",
			"()I"
		);
	}
	inline jfloat MotionEvent::getAxisValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getAxisValue",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getAxisValue(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getAxisValue",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jint MotionEvent::getButtonState() const
	{
		return callMethod<jint>(
			"getButtonState",
			"()I"
		);
	}
	inline jint MotionEvent::getClassification() const
	{
		return callMethod<jint>(
			"getClassification",
			"()I"
		);
	}
	inline jint MotionEvent::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline jlong MotionEvent::getDownTime() const
	{
		return callMethod<jlong>(
			"getDownTime",
			"()J"
		);
	}
	inline jint MotionEvent::getEdgeFlags() const
	{
		return callMethod<jint>(
			"getEdgeFlags",
			"()I"
		);
	}
	inline jlong MotionEvent::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	inline jint MotionEvent::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline jfloat MotionEvent::getHistoricalAxisValue(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalAxisValue",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalAxisValue(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"getHistoricalAxisValue",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong MotionEvent::getHistoricalEventTime(jint arg0) const
	{
		return callMethod<jlong>(
			"getHistoricalEventTime",
			"(I)J",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalOrientation(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalOrientation",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalOrientation(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalOrientation",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline void MotionEvent::getHistoricalPointerCoords(jint arg0, jint arg1, android::view::MotionEvent_PointerCoords arg2) const
	{
		callMethod<void>(
			"getHistoricalPointerCoords",
			"(IILandroid/view/MotionEvent$PointerCoords;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jfloat MotionEvent::getHistoricalPressure(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalPressure",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalPressure(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalPressure",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalSize(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalSize",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalSize(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalSize",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalToolMajor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalToolMajor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalToolMajor(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalToolMajor",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalToolMinor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalToolMinor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalToolMinor(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalToolMinor",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalTouchMajor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalTouchMajor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalTouchMajor(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalTouchMajor",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalTouchMinor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalTouchMinor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalTouchMinor(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalTouchMinor",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalX(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalX",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalX(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalX",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jfloat MotionEvent::getHistoricalY(jint arg0) const
	{
		return callMethod<jfloat>(
			"getHistoricalY",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getHistoricalY(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getHistoricalY",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jint MotionEvent::getHistorySize() const
	{
		return callMethod<jint>(
			"getHistorySize",
			"()I"
		);
	}
	inline jint MotionEvent::getMetaState() const
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	inline jfloat MotionEvent::getOrientation() const
	{
		return callMethod<jfloat>(
			"getOrientation",
			"()F"
		);
	}
	inline jfloat MotionEvent::getOrientation(jint arg0) const
	{
		return callMethod<jfloat>(
			"getOrientation",
			"(I)F",
			arg0
		);
	}
	inline void MotionEvent::getPointerCoords(jint arg0, android::view::MotionEvent_PointerCoords arg1) const
	{
		callMethod<void>(
			"getPointerCoords",
			"(ILandroid/view/MotionEvent$PointerCoords;)V",
			arg0,
			arg1.object()
		);
	}
	inline jint MotionEvent::getPointerCount() const
	{
		return callMethod<jint>(
			"getPointerCount",
			"()I"
		);
	}
	inline jint MotionEvent::getPointerId(jint arg0) const
	{
		return callMethod<jint>(
			"getPointerId",
			"(I)I",
			arg0
		);
	}
	inline void MotionEvent::getPointerProperties(jint arg0, android::view::MotionEvent_PointerProperties arg1) const
	{
		callMethod<void>(
			"getPointerProperties",
			"(ILandroid/view/MotionEvent$PointerProperties;)V",
			arg0,
			arg1.object()
		);
	}
	inline jfloat MotionEvent::getPressure() const
	{
		return callMethod<jfloat>(
			"getPressure",
			"()F"
		);
	}
	inline jfloat MotionEvent::getPressure(jint arg0) const
	{
		return callMethod<jfloat>(
			"getPressure",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getRawX() const
	{
		return callMethod<jfloat>(
			"getRawX",
			"()F"
		);
	}
	inline jfloat MotionEvent::getRawX(jint arg0) const
	{
		return callMethod<jfloat>(
			"getRawX",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getRawY() const
	{
		return callMethod<jfloat>(
			"getRawY",
			"()F"
		);
	}
	inline jfloat MotionEvent::getRawY(jint arg0) const
	{
		return callMethod<jfloat>(
			"getRawY",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getSize() const
	{
		return callMethod<jfloat>(
			"getSize",
			"()F"
		);
	}
	inline jfloat MotionEvent::getSize(jint arg0) const
	{
		return callMethod<jfloat>(
			"getSize",
			"(I)F",
			arg0
		);
	}
	inline jint MotionEvent::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline jfloat MotionEvent::getToolMajor() const
	{
		return callMethod<jfloat>(
			"getToolMajor",
			"()F"
		);
	}
	inline jfloat MotionEvent::getToolMajor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getToolMajor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getToolMinor() const
	{
		return callMethod<jfloat>(
			"getToolMinor",
			"()F"
		);
	}
	inline jfloat MotionEvent::getToolMinor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getToolMinor",
			"(I)F",
			arg0
		);
	}
	inline jint MotionEvent::getToolType(jint arg0) const
	{
		return callMethod<jint>(
			"getToolType",
			"(I)I",
			arg0
		);
	}
	inline jfloat MotionEvent::getTouchMajor() const
	{
		return callMethod<jfloat>(
			"getTouchMajor",
			"()F"
		);
	}
	inline jfloat MotionEvent::getTouchMajor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getTouchMajor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getTouchMinor() const
	{
		return callMethod<jfloat>(
			"getTouchMinor",
			"()F"
		);
	}
	inline jfloat MotionEvent::getTouchMinor(jint arg0) const
	{
		return callMethod<jfloat>(
			"getTouchMinor",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getX() const
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	inline jfloat MotionEvent::getX(jint arg0) const
	{
		return callMethod<jfloat>(
			"getX",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getXPrecision() const
	{
		return callMethod<jfloat>(
			"getXPrecision",
			"()F"
		);
	}
	inline jfloat MotionEvent::getY() const
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	inline jfloat MotionEvent::getY(jint arg0) const
	{
		return callMethod<jfloat>(
			"getY",
			"(I)F",
			arg0
		);
	}
	inline jfloat MotionEvent::getYPrecision() const
	{
		return callMethod<jfloat>(
			"getYPrecision",
			"()F"
		);
	}
	inline jboolean MotionEvent::isButtonPressed(jint arg0) const
	{
		return callMethod<jboolean>(
			"isButtonPressed",
			"(I)Z",
			arg0
		);
	}
	inline void MotionEvent::offsetLocation(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offsetLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void MotionEvent::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline void MotionEvent::setAction(jint arg0) const
	{
		callMethod<void>(
			"setAction",
			"(I)V",
			arg0
		);
	}
	inline void MotionEvent::setEdgeFlags(jint arg0) const
	{
		callMethod<void>(
			"setEdgeFlags",
			"(I)V",
			arg0
		);
	}
	inline void MotionEvent::setLocation(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void MotionEvent::setSource(jint arg0) const
	{
		callMethod<void>(
			"setSource",
			"(I)V",
			arg0
		);
	}
	inline JString MotionEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MotionEvent::transform(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void MotionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers
#include "./InputEvent.hpp"

