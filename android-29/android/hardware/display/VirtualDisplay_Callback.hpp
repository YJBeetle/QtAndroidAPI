#pragma once

#ifndef ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY_CALLBACK
#define ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY_CALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::display
{
	class VirtualDisplay_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onResumed();
		void onStopped();
		void onPaused();
	};
} // namespace __jni_impl::android::hardware::display


namespace __jni_impl::android::hardware::display
{
	// Fields
	
	// Constructors
	void VirtualDisplay_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.display.VirtualDisplay$Callback",
			"()V");
	}
	
	// Methods
	void VirtualDisplay_Callback::onResumed()
	{
		__thiz.callMethod<void>(
			"onResumed",
			"()V");
	}
	void VirtualDisplay_Callback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V");
	}
	void VirtualDisplay_Callback::onPaused()
	{
		__thiz.callMethod<void>(
			"onPaused",
			"()V");
	}
} // namespace __jni_impl::android::hardware::display

namespace android::hardware::display
{
	class VirtualDisplay_Callback : public __jni_impl::android::hardware::display::VirtualDisplay_Callback
	{
	public:
		VirtualDisplay_Callback(QAndroidJniObject obj) { __thiz = obj; }
		VirtualDisplay_Callback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::display

#endif // ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY_CALLBACK

