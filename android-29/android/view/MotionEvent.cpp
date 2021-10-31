#include "../graphics/Matrix.hpp"
#include "../os/Parcel.hpp"
#include "./MotionEvent_PointerCoords.hpp"
#include "./MotionEvent_PointerProperties.hpp"
#include "./MotionEvent.hpp"

namespace android::view
{
	// Fields
	jint MotionEvent::ACTION_BUTTON_PRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_BUTTON_PRESS"
		);
	}
	jint MotionEvent::ACTION_BUTTON_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_BUTTON_RELEASE"
		);
	}
	jint MotionEvent::ACTION_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_CANCEL"
		);
	}
	jint MotionEvent::ACTION_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_DOWN"
		);
	}
	jint MotionEvent::ACTION_HOVER_ENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_HOVER_ENTER"
		);
	}
	jint MotionEvent::ACTION_HOVER_EXIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_HOVER_EXIT"
		);
	}
	jint MotionEvent::ACTION_HOVER_MOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_HOVER_MOVE"
		);
	}
	jint MotionEvent::ACTION_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_MASK"
		);
	}
	jint MotionEvent::ACTION_MOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_MOVE"
		);
	}
	jint MotionEvent::ACTION_OUTSIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_OUTSIDE"
		);
	}
	jint MotionEvent::ACTION_POINTER_1_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_1_DOWN"
		);
	}
	jint MotionEvent::ACTION_POINTER_1_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_1_UP"
		);
	}
	jint MotionEvent::ACTION_POINTER_2_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_2_DOWN"
		);
	}
	jint MotionEvent::ACTION_POINTER_2_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_2_UP"
		);
	}
	jint MotionEvent::ACTION_POINTER_3_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_3_DOWN"
		);
	}
	jint MotionEvent::ACTION_POINTER_3_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_3_UP"
		);
	}
	jint MotionEvent::ACTION_POINTER_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_DOWN"
		);
	}
	jint MotionEvent::ACTION_POINTER_ID_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_ID_MASK"
		);
	}
	jint MotionEvent::ACTION_POINTER_ID_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_ID_SHIFT"
		);
	}
	jint MotionEvent::ACTION_POINTER_INDEX_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_INDEX_MASK"
		);
	}
	jint MotionEvent::ACTION_POINTER_INDEX_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_INDEX_SHIFT"
		);
	}
	jint MotionEvent::ACTION_POINTER_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_POINTER_UP"
		);
	}
	jint MotionEvent::ACTION_SCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_SCROLL"
		);
	}
	jint MotionEvent::ACTION_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"ACTION_UP"
		);
	}
	jint MotionEvent::AXIS_BRAKE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_BRAKE"
		);
	}
	jint MotionEvent::AXIS_DISTANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_DISTANCE"
		);
	}
	jint MotionEvent::AXIS_GAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GAS"
		);
	}
	jint MotionEvent::AXIS_GENERIC_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_1"
		);
	}
	jint MotionEvent::AXIS_GENERIC_10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_10"
		);
	}
	jint MotionEvent::AXIS_GENERIC_11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_11"
		);
	}
	jint MotionEvent::AXIS_GENERIC_12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_12"
		);
	}
	jint MotionEvent::AXIS_GENERIC_13()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_13"
		);
	}
	jint MotionEvent::AXIS_GENERIC_14()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_14"
		);
	}
	jint MotionEvent::AXIS_GENERIC_15()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_15"
		);
	}
	jint MotionEvent::AXIS_GENERIC_16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_16"
		);
	}
	jint MotionEvent::AXIS_GENERIC_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_2"
		);
	}
	jint MotionEvent::AXIS_GENERIC_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_3"
		);
	}
	jint MotionEvent::AXIS_GENERIC_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_4"
		);
	}
	jint MotionEvent::AXIS_GENERIC_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_5"
		);
	}
	jint MotionEvent::AXIS_GENERIC_6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_6"
		);
	}
	jint MotionEvent::AXIS_GENERIC_7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_7"
		);
	}
	jint MotionEvent::AXIS_GENERIC_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_8"
		);
	}
	jint MotionEvent::AXIS_GENERIC_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_GENERIC_9"
		);
	}
	jint MotionEvent::AXIS_HAT_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_HAT_X"
		);
	}
	jint MotionEvent::AXIS_HAT_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_HAT_Y"
		);
	}
	jint MotionEvent::AXIS_HSCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_HSCROLL"
		);
	}
	jint MotionEvent::AXIS_LTRIGGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_LTRIGGER"
		);
	}
	jint MotionEvent::AXIS_ORIENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_ORIENTATION"
		);
	}
	jint MotionEvent::AXIS_PRESSURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_PRESSURE"
		);
	}
	jint MotionEvent::AXIS_RELATIVE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RELATIVE_X"
		);
	}
	jint MotionEvent::AXIS_RELATIVE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RELATIVE_Y"
		);
	}
	jint MotionEvent::AXIS_RTRIGGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RTRIGGER"
		);
	}
	jint MotionEvent::AXIS_RUDDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RUDDER"
		);
	}
	jint MotionEvent::AXIS_RX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RX"
		);
	}
	jint MotionEvent::AXIS_RY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RY"
		);
	}
	jint MotionEvent::AXIS_RZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_RZ"
		);
	}
	jint MotionEvent::AXIS_SCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_SCROLL"
		);
	}
	jint MotionEvent::AXIS_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_SIZE"
		);
	}
	jint MotionEvent::AXIS_THROTTLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_THROTTLE"
		);
	}
	jint MotionEvent::AXIS_TILT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TILT"
		);
	}
	jint MotionEvent::AXIS_TOOL_MAJOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOOL_MAJOR"
		);
	}
	jint MotionEvent::AXIS_TOOL_MINOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOOL_MINOR"
		);
	}
	jint MotionEvent::AXIS_TOUCH_MAJOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOUCH_MAJOR"
		);
	}
	jint MotionEvent::AXIS_TOUCH_MINOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_TOUCH_MINOR"
		);
	}
	jint MotionEvent::AXIS_VSCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_VSCROLL"
		);
	}
	jint MotionEvent::AXIS_WHEEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_WHEEL"
		);
	}
	jint MotionEvent::AXIS_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_X"
		);
	}
	jint MotionEvent::AXIS_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_Y"
		);
	}
	jint MotionEvent::AXIS_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"AXIS_Z"
		);
	}
	jint MotionEvent::BUTTON_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_BACK"
		);
	}
	jint MotionEvent::BUTTON_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_FORWARD"
		);
	}
	jint MotionEvent::BUTTON_PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_PRIMARY"
		);
	}
	jint MotionEvent::BUTTON_SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_SECONDARY"
		);
	}
	jint MotionEvent::BUTTON_STYLUS_PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_STYLUS_PRIMARY"
		);
	}
	jint MotionEvent::BUTTON_STYLUS_SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_STYLUS_SECONDARY"
		);
	}
	jint MotionEvent::BUTTON_TERTIARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"BUTTON_TERTIARY"
		);
	}
	jint MotionEvent::CLASSIFICATION_AMBIGUOUS_GESTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"CLASSIFICATION_AMBIGUOUS_GESTURE"
		);
	}
	jint MotionEvent::CLASSIFICATION_DEEP_PRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"CLASSIFICATION_DEEP_PRESS"
		);
	}
	jint MotionEvent::CLASSIFICATION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"CLASSIFICATION_NONE"
		);
	}
	QAndroidJniObject MotionEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.MotionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MotionEvent::EDGE_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_BOTTOM"
		);
	}
	jint MotionEvent::EDGE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_LEFT"
		);
	}
	jint MotionEvent::EDGE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_RIGHT"
		);
	}
	jint MotionEvent::EDGE_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"EDGE_TOP"
		);
	}
	jint MotionEvent::FLAG_WINDOW_IS_OBSCURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"FLAG_WINDOW_IS_OBSCURED"
		);
	}
	jint MotionEvent::FLAG_WINDOW_IS_PARTIALLY_OBSCURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"FLAG_WINDOW_IS_PARTIALLY_OBSCURED"
		);
	}
	jint MotionEvent::INVALID_POINTER_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"INVALID_POINTER_ID"
		);
	}
	jint MotionEvent::TOOL_TYPE_ERASER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_ERASER"
		);
	}
	jint MotionEvent::TOOL_TYPE_FINGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_FINGER"
		);
	}
	jint MotionEvent::TOOL_TYPE_MOUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_MOUSE"
		);
	}
	jint MotionEvent::TOOL_TYPE_STYLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_STYLUS"
		);
	}
	jint MotionEvent::TOOL_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.MotionEvent",
			"TOOL_TYPE_UNKNOWN"
		);
	}
	
	MotionEvent::MotionEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MotionEvent::actionToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.MotionEvent",
			"actionToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint MotionEvent::axisFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.MotionEvent",
			"axisFromString",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring MotionEvent::axisToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.MotionEvent",
			"axisToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject MotionEvent::obtain(android::view::MotionEvent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jintArray arg4, jarray arg5, jint arg6, jfloat arg7, jfloat arg8, jint arg9, jint arg10, jint arg11, jint arg12)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJII[I[Landroid/view/MotionEvent$PointerCoords;IFFIIII)Landroid/view/MotionEvent;",
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
	QAndroidJniObject MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jint arg8, jfloat arg9, jfloat arg10, jint arg11, jint arg12)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject MotionEvent::obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jarray arg4, jarray arg5, jint arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11, jint arg12, jint arg13)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtain",
			"(JJII[Landroid/view/MotionEvent$PointerProperties;[Landroid/view/MotionEvent$PointerCoords;IIFFIIII)Landroid/view/MotionEvent;",
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
			arg12,
			arg13
		);
	}
	QAndroidJniObject MotionEvent::obtainNoHistory(android::view::MotionEvent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.MotionEvent",
			"obtainNoHistory",
			"(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;",
			arg0.__jniObject().object()
		);
	}
	void MotionEvent::addBatch(jlong arg0, jarray arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addBatch",
			"(J[Landroid/view/MotionEvent$PointerCoords;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MotionEvent::addBatch(jlong arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5)
	{
		__thiz.callMethod<void>(
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
	jint MotionEvent::findPointerIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"findPointerIndex",
			"(I)I",
			arg0
		);
	}
	jint MotionEvent::getAction()
	{
		return __thiz.callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	jint MotionEvent::getActionButton()
	{
		return __thiz.callMethod<jint>(
			"getActionButton",
			"()I"
		);
	}
	jint MotionEvent::getActionIndex()
	{
		return __thiz.callMethod<jint>(
			"getActionIndex",
			"()I"
		);
	}
	jint MotionEvent::getActionMasked()
	{
		return __thiz.callMethod<jint>(
			"getActionMasked",
			"()I"
		);
	}
	jfloat MotionEvent::getAxisValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getAxisValue",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getAxisValue(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getAxisValue",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint MotionEvent::getButtonState()
	{
		return __thiz.callMethod<jint>(
			"getButtonState",
			"()I"
		);
	}
	jint MotionEvent::getClassification()
	{
		return __thiz.callMethod<jint>(
			"getClassification",
			"()I"
		);
	}
	jint MotionEvent::getDeviceId()
	{
		return __thiz.callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jlong MotionEvent::getDownTime()
	{
		return __thiz.callMethod<jlong>(
			"getDownTime",
			"()J"
		);
	}
	jint MotionEvent::getEdgeFlags()
	{
		return __thiz.callMethod<jint>(
			"getEdgeFlags",
			"()I"
		);
	}
	jlong MotionEvent::getEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint MotionEvent::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jfloat MotionEvent::getHistoricalAxisValue(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalAxisValue",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalAxisValue(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalAxisValue",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jlong MotionEvent::getHistoricalEventTime(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getHistoricalEventTime",
			"(I)J",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalOrientation(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalOrientation",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalOrientation(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalOrientation",
			"(II)F",
			arg0,
			arg1
		);
	}
	void MotionEvent::getHistoricalPointerCoords(jint arg0, jint arg1, android::view::MotionEvent_PointerCoords arg2)
	{
		__thiz.callMethod<void>(
			"getHistoricalPointerCoords",
			"(IILandroid/view/MotionEvent$PointerCoords;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jfloat MotionEvent::getHistoricalPressure(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalPressure",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalPressure(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalPressure",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalSize(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalSize",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalSize(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalSize",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalToolMajor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalToolMajor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalToolMajor(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalToolMajor",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalToolMinor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalToolMinor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalToolMinor(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalToolMinor",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalTouchMajor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalTouchMajor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalTouchMajor(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalTouchMajor",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalTouchMinor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalTouchMinor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalTouchMinor(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalTouchMinor",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalX(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalX",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalX(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalX",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloat MotionEvent::getHistoricalY(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalY",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getHistoricalY(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getHistoricalY",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint MotionEvent::getHistorySize()
	{
		return __thiz.callMethod<jint>(
			"getHistorySize",
			"()I"
		);
	}
	jint MotionEvent::getMetaState()
	{
		return __thiz.callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	jfloat MotionEvent::getOrientation()
	{
		return __thiz.callMethod<jfloat>(
			"getOrientation",
			"()F"
		);
	}
	jfloat MotionEvent::getOrientation(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getOrientation",
			"(I)F",
			arg0
		);
	}
	void MotionEvent::getPointerCoords(jint arg0, android::view::MotionEvent_PointerCoords arg1)
	{
		__thiz.callMethod<void>(
			"getPointerCoords",
			"(ILandroid/view/MotionEvent$PointerCoords;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint MotionEvent::getPointerCount()
	{
		return __thiz.callMethod<jint>(
			"getPointerCount",
			"()I"
		);
	}
	jint MotionEvent::getPointerId(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPointerId",
			"(I)I",
			arg0
		);
	}
	void MotionEvent::getPointerProperties(jint arg0, android::view::MotionEvent_PointerProperties arg1)
	{
		__thiz.callMethod<void>(
			"getPointerProperties",
			"(ILandroid/view/MotionEvent$PointerProperties;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jfloat MotionEvent::getPressure()
	{
		return __thiz.callMethod<jfloat>(
			"getPressure",
			"()F"
		);
	}
	jfloat MotionEvent::getPressure(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getPressure",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getRawX()
	{
		return __thiz.callMethod<jfloat>(
			"getRawX",
			"()F"
		);
	}
	jfloat MotionEvent::getRawX(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getRawX",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getRawY()
	{
		return __thiz.callMethod<jfloat>(
			"getRawY",
			"()F"
		);
	}
	jfloat MotionEvent::getRawY(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getRawY",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getSize()
	{
		return __thiz.callMethod<jfloat>(
			"getSize",
			"()F"
		);
	}
	jfloat MotionEvent::getSize(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getSize",
			"(I)F",
			arg0
		);
	}
	jint MotionEvent::getSource()
	{
		return __thiz.callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jfloat MotionEvent::getToolMajor()
	{
		return __thiz.callMethod<jfloat>(
			"getToolMajor",
			"()F"
		);
	}
	jfloat MotionEvent::getToolMajor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getToolMajor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getToolMinor()
	{
		return __thiz.callMethod<jfloat>(
			"getToolMinor",
			"()F"
		);
	}
	jfloat MotionEvent::getToolMinor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getToolMinor",
			"(I)F",
			arg0
		);
	}
	jint MotionEvent::getToolType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getToolType",
			"(I)I",
			arg0
		);
	}
	jfloat MotionEvent::getTouchMajor()
	{
		return __thiz.callMethod<jfloat>(
			"getTouchMajor",
			"()F"
		);
	}
	jfloat MotionEvent::getTouchMajor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getTouchMajor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getTouchMinor()
	{
		return __thiz.callMethod<jfloat>(
			"getTouchMinor",
			"()F"
		);
	}
	jfloat MotionEvent::getTouchMinor(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getTouchMinor",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getX()
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat MotionEvent::getX(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getXPrecision()
	{
		return __thiz.callMethod<jfloat>(
			"getXPrecision",
			"()F"
		);
	}
	jfloat MotionEvent::getY()
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat MotionEvent::getY(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"(I)F",
			arg0
		);
	}
	jfloat MotionEvent::getYPrecision()
	{
		return __thiz.callMethod<jfloat>(
			"getYPrecision",
			"()F"
		);
	}
	jboolean MotionEvent::isButtonPressed(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isButtonPressed",
			"(I)Z",
			arg0
		);
	}
	void MotionEvent::offsetLocation(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offsetLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MotionEvent::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void MotionEvent::setAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAction",
			"(I)V",
			arg0
		);
	}
	void MotionEvent::setEdgeFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEdgeFlags",
			"(I)V",
			arg0
		);
	}
	void MotionEvent::setLocation(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MotionEvent::setSource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(I)V",
			arg0
		);
	}
	jstring MotionEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MotionEvent::transform(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void MotionEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

