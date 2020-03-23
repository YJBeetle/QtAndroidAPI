#pragma once

#ifndef ANDROID_VIEW_WINDOWID_FOCUSOBSERVER
#define ANDROID_VIEW_WINDOWID_FOCUSOBSERVER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class WindowId;
}

namespace __jni_impl::android::view
{
	class WindowId_FocusObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFocusGained(__jni_impl::android::view::WindowId arg0);
		void onFocusLost(__jni_impl::android::view::WindowId arg0);
	};
} // namespace __jni_impl::android::view

#include "WindowId.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void WindowId_FocusObserver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowId$FocusObserver",
			"()V");
	}
	
	// Methods
	void WindowId_FocusObserver::onFocusGained(__jni_impl::android::view::WindowId arg0)
	{
		__thiz.callMethod<void>(
			"onFocusGained",
			"(Landroid/view/WindowId;)V",
			arg0.__jniObject().object());
	}
	void WindowId_FocusObserver::onFocusLost(__jni_impl::android::view::WindowId arg0)
	{
		__thiz.callMethod<void>(
			"onFocusLost",
			"(Landroid/view/WindowId;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class WindowId_FocusObserver : public __jni_impl::android::view::WindowId_FocusObserver
	{
	public:
		WindowId_FocusObserver(QAndroidJniObject obj) { __thiz = obj; }
		WindowId_FocusObserver()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOWID_FOCUSOBSERVER

