#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class HapticFeedbackConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLOCK_TICK();
		static jint CONTEXT_CLICK();
		static jint FLAG_IGNORE_GLOBAL_SETTING();
		static jint FLAG_IGNORE_VIEW_SETTING();
		static jint KEYBOARD_PRESS();
		static jint KEYBOARD_RELEASE();
		static jint KEYBOARD_TAP();
		static jint LONG_PRESS();
		static jint TEXT_HANDLE_MOVE();
		static jint VIRTUAL_KEY();
		static jint VIRTUAL_KEY_RELEASE();
		
		// QJniObject forward
		template<typename ...Ts> explicit HapticFeedbackConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HapticFeedbackConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view

