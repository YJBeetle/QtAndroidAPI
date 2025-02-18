#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class HapticFeedbackConstants : public JObject
	{
	public:
		// Fields
		static jint CLOCK_TICK();
		static jint CONFIRM();
		static jint CONTEXT_CLICK();
		static jint DRAG_START();
		static jint FLAG_IGNORE_GLOBAL_SETTING();
		static jint FLAG_IGNORE_VIEW_SETTING();
		static jint GESTURE_END();
		static jint GESTURE_START();
		static jint GESTURE_THRESHOLD_ACTIVATE();
		static jint GESTURE_THRESHOLD_DEACTIVATE();
		static jint KEYBOARD_PRESS();
		static jint KEYBOARD_RELEASE();
		static jint KEYBOARD_TAP();
		static jint LONG_PRESS();
		static jint NO_HAPTICS();
		static jint REJECT();
		static jint SEGMENT_FREQUENT_TICK();
		static jint SEGMENT_TICK();
		static jint TEXT_HANDLE_MOVE();
		static jint TOGGLE_OFF();
		static jint TOGGLE_ON();
		static jint VIRTUAL_KEY();
		static jint VIRTUAL_KEY_RELEASE();
		
		// QJniObject forward
		template<typename ...Ts> explicit HapticFeedbackConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HapticFeedbackConstants(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::view

