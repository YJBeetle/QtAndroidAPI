#pragma once

#ifndef ANDROID_WEBKIT_HTTPAUTHHANDLER
#define ANDROID_WEBKIT_HTTPAUTHHANDLER

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"


namespace __jni_impl::android::webkit
{
	class HttpAuthHandler : public __jni_impl::android::os::Handler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		void proceed(jstring arg0, jstring arg1);
		jboolean useHttpAuthUsernamePassword();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void HttpAuthHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.HttpAuthHandler",
			"(V)V");
	}
	
	// Methods
	void HttpAuthHandler::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void HttpAuthHandler::proceed(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jboolean HttpAuthHandler::useHttpAuthUsernamePassword()
	{
		return __thiz.callMethod<jboolean>(
			"useHttpAuthUsernamePassword",
			"()Z"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class HttpAuthHandler : public __jni_impl::android::webkit::HttpAuthHandler
	{
	public:
		HttpAuthHandler(QAndroidJniObject obj) { __thiz = obj; }
		HttpAuthHandler()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_HTTPAUTHHANDLER

