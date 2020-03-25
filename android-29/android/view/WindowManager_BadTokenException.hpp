#pragma once

#ifndef ANDROID_VIEW_WINDOWMANAGER_BADTOKENEXCEPTION
#define ANDROID_VIEW_WINDOWMANAGER_BADTOKENEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view
{
	class WindowManager_BadTokenException : public __jni_impl::java::lang::RuntimeException
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
	void WindowManager_BadTokenException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$BadTokenException",
			"()V");
	}
	void WindowManager_BadTokenException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class WindowManager_BadTokenException : public __jni_impl::android::view::WindowManager_BadTokenException
	{
	public:
		WindowManager_BadTokenException(QAndroidJniObject obj) { __thiz = obj; }
		WindowManager_BadTokenException()
		{
			__constructor();
		}
		WindowManager_BadTokenException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOWMANAGER_BADTOKENEXCEPTION

