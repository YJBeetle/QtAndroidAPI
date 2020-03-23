#pragma once

#ifndef ANDROID_VIEW_WINDOWMANAGER_INVALIDDISPLAYEXCEPTION
#define ANDROID_VIEW_WINDOWMANAGER_INVALIDDISPLAYEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view
{
	class WindowManager_InvalidDisplayException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void WindowManager_InvalidDisplayException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$InvalidDisplayException",
			"()V");
	}
	void WindowManager_InvalidDisplayException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$InvalidDisplayException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class WindowManager_InvalidDisplayException : public __jni_impl::android::view::WindowManager_InvalidDisplayException
	{
	public:
		WindowManager_InvalidDisplayException(QAndroidJniObject obj) { __thiz = obj; }
		WindowManager_InvalidDisplayException()
		{
			__constructor();
		}
		WindowManager_InvalidDisplayException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOWMANAGER_INVALIDDISPLAYEXCEPTION

