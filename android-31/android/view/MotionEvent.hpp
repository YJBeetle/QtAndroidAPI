#pragma once

#include "./InputEvent.hpp"

class JIntArray;
class JArray;
class JArray;
namespace android::graphics
{
	class Matrix;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class MotionEvent_PointerCoords;
}
namespace android::view
{
	class MotionEvent_PointerProperties;
}
class JString;

namespace android::view
{
	class MotionEvent : public android::view::InputEvent
	{
	public:
		// Fields
		static jint ACTION_BUTTON_PRESS();
		static jint ACTION_BUTTON_RELEASE();
		static jint ACTION_CANCEL();
		static jint ACTION_DOWN();
		static jint ACTION_HOVER_ENTER();
		static jint ACTION_HOVER_EXIT();
		static jint ACTION_HOVER_MOVE();
		static jint ACTION_MASK();
		static jint ACTION_MOVE();
		static jint ACTION_OUTSIDE();
		static jint ACTION_POINTER_1_DOWN();
		static jint ACTION_POINTER_1_UP();
		static jint ACTION_POINTER_2_DOWN();
		static jint ACTION_POINTER_2_UP();
		static jint ACTION_POINTER_3_DOWN();
		static jint ACTION_POINTER_3_UP();
		static jint ACTION_POINTER_DOWN();
		static jint ACTION_POINTER_ID_MASK();
		static jint ACTION_POINTER_ID_SHIFT();
		static jint ACTION_POINTER_INDEX_MASK();
		static jint ACTION_POINTER_INDEX_SHIFT();
		static jint ACTION_POINTER_UP();
		static jint ACTION_SCROLL();
		static jint ACTION_UP();
		static jint AXIS_BRAKE();
		static jint AXIS_DISTANCE();
		static jint AXIS_GAS();
		static jint AXIS_GENERIC_1();
		static jint AXIS_GENERIC_10();
		static jint AXIS_GENERIC_11();
		static jint AXIS_GENERIC_12();
		static jint AXIS_GENERIC_13();
		static jint AXIS_GENERIC_14();
		static jint AXIS_GENERIC_15();
		static jint AXIS_GENERIC_16();
		static jint AXIS_GENERIC_2();
		static jint AXIS_GENERIC_3();
		static jint AXIS_GENERIC_4();
		static jint AXIS_GENERIC_5();
		static jint AXIS_GENERIC_6();
		static jint AXIS_GENERIC_7();
		static jint AXIS_GENERIC_8();
		static jint AXIS_GENERIC_9();
		static jint AXIS_HAT_X();
		static jint AXIS_HAT_Y();
		static jint AXIS_HSCROLL();
		static jint AXIS_LTRIGGER();
		static jint AXIS_ORIENTATION();
		static jint AXIS_PRESSURE();
		static jint AXIS_RELATIVE_X();
		static jint AXIS_RELATIVE_Y();
		static jint AXIS_RTRIGGER();
		static jint AXIS_RUDDER();
		static jint AXIS_RX();
		static jint AXIS_RY();
		static jint AXIS_RZ();
		static jint AXIS_SCROLL();
		static jint AXIS_SIZE();
		static jint AXIS_THROTTLE();
		static jint AXIS_TILT();
		static jint AXIS_TOOL_MAJOR();
		static jint AXIS_TOOL_MINOR();
		static jint AXIS_TOUCH_MAJOR();
		static jint AXIS_TOUCH_MINOR();
		static jint AXIS_VSCROLL();
		static jint AXIS_WHEEL();
		static jint AXIS_X();
		static jint AXIS_Y();
		static jint AXIS_Z();
		static jint BUTTON_BACK();
		static jint BUTTON_FORWARD();
		static jint BUTTON_PRIMARY();
		static jint BUTTON_SECONDARY();
		static jint BUTTON_STYLUS_PRIMARY();
		static jint BUTTON_STYLUS_SECONDARY();
		static jint BUTTON_TERTIARY();
		static jint CLASSIFICATION_AMBIGUOUS_GESTURE();
		static jint CLASSIFICATION_DEEP_PRESS();
		static jint CLASSIFICATION_NONE();
		static JObject CREATOR();
		static jint EDGE_BOTTOM();
		static jint EDGE_LEFT();
		static jint EDGE_RIGHT();
		static jint EDGE_TOP();
		static jint FLAG_WINDOW_IS_OBSCURED();
		static jint FLAG_WINDOW_IS_PARTIALLY_OBSCURED();
		static jint INVALID_POINTER_ID();
		static jint TOOL_TYPE_ERASER();
		static jint TOOL_TYPE_FINGER();
		static jint TOOL_TYPE_MOUSE();
		static jint TOOL_TYPE_STYLUS();
		static jint TOOL_TYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MotionEvent(const char *className, const char *sig, Ts...agv) : android::view::InputEvent(className, sig, std::forward<Ts>(agv)...) {}
		MotionEvent(QAndroidJniObject obj) : android::view::InputEvent(obj) {}
		
		// Constructors
		
		// Methods
		static JString actionToString(jint arg0);
		static jint axisFromString(JString arg0);
		static JString axisToString(jint arg0);
		static android::view::MotionEvent obtain(android::view::MotionEvent arg0);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, JIntArray arg4, JArray arg5, jint arg6, jfloat arg7, jfloat arg8, jint arg9, jint arg10, jint arg11, jint arg12);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jint arg8, jfloat arg9, jfloat arg10, jint arg11, jint arg12);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, JArray arg4, JArray arg5, jint arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11, jint arg12, jint arg13);
		static android::view::MotionEvent obtainNoHistory(android::view::MotionEvent arg0);
		void addBatch(jlong arg0, JArray arg1, jint arg2) const;
		void addBatch(jlong arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5) const;
		jint findPointerIndex(jint arg0) const;
		jint getAction() const;
		jint getActionButton() const;
		jint getActionIndex() const;
		jint getActionMasked() const;
		jfloat getAxisValue(jint arg0) const;
		jfloat getAxisValue(jint arg0, jint arg1) const;
		jint getButtonState() const;
		jint getClassification() const;
		jint getDeviceId() const;
		jlong getDownTime() const;
		jint getEdgeFlags() const;
		jlong getEventTime() const;
		jint getFlags() const;
		jfloat getHistoricalAxisValue(jint arg0, jint arg1) const;
		jfloat getHistoricalAxisValue(jint arg0, jint arg1, jint arg2) const;
		jlong getHistoricalEventTime(jint arg0) const;
		jfloat getHistoricalOrientation(jint arg0) const;
		jfloat getHistoricalOrientation(jint arg0, jint arg1) const;
		void getHistoricalPointerCoords(jint arg0, jint arg1, android::view::MotionEvent_PointerCoords arg2) const;
		jfloat getHistoricalPressure(jint arg0) const;
		jfloat getHistoricalPressure(jint arg0, jint arg1) const;
		jfloat getHistoricalSize(jint arg0) const;
		jfloat getHistoricalSize(jint arg0, jint arg1) const;
		jfloat getHistoricalToolMajor(jint arg0) const;
		jfloat getHistoricalToolMajor(jint arg0, jint arg1) const;
		jfloat getHistoricalToolMinor(jint arg0) const;
		jfloat getHistoricalToolMinor(jint arg0, jint arg1) const;
		jfloat getHistoricalTouchMajor(jint arg0) const;
		jfloat getHistoricalTouchMajor(jint arg0, jint arg1) const;
		jfloat getHistoricalTouchMinor(jint arg0) const;
		jfloat getHistoricalTouchMinor(jint arg0, jint arg1) const;
		jfloat getHistoricalX(jint arg0) const;
		jfloat getHistoricalX(jint arg0, jint arg1) const;
		jfloat getHistoricalY(jint arg0) const;
		jfloat getHistoricalY(jint arg0, jint arg1) const;
		jint getHistorySize() const;
		jint getMetaState() const;
		jfloat getOrientation() const;
		jfloat getOrientation(jint arg0) const;
		void getPointerCoords(jint arg0, android::view::MotionEvent_PointerCoords arg1) const;
		jint getPointerCount() const;
		jint getPointerId(jint arg0) const;
		void getPointerProperties(jint arg0, android::view::MotionEvent_PointerProperties arg1) const;
		jfloat getPressure() const;
		jfloat getPressure(jint arg0) const;
		jfloat getRawX() const;
		jfloat getRawX(jint arg0) const;
		jfloat getRawY() const;
		jfloat getRawY(jint arg0) const;
		jfloat getSize() const;
		jfloat getSize(jint arg0) const;
		jint getSource() const;
		jfloat getToolMajor() const;
		jfloat getToolMajor(jint arg0) const;
		jfloat getToolMinor() const;
		jfloat getToolMinor(jint arg0) const;
		jint getToolType(jint arg0) const;
		jfloat getTouchMajor() const;
		jfloat getTouchMajor(jint arg0) const;
		jfloat getTouchMinor() const;
		jfloat getTouchMinor(jint arg0) const;
		jfloat getX() const;
		jfloat getX(jint arg0) const;
		jfloat getXPrecision() const;
		jfloat getY() const;
		jfloat getY(jint arg0) const;
		jfloat getYPrecision() const;
		jboolean isButtonPressed(jint arg0) const;
		void offsetLocation(jfloat arg0, jfloat arg1) const;
		void recycle() const;
		void setAction(jint arg0) const;
		void setEdgeFlags(jint arg0) const;
		void setLocation(jfloat arg0, jfloat arg1) const;
		void setSource(jint arg0) const;
		JString toString() const;
		void transform(android::graphics::Matrix arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

