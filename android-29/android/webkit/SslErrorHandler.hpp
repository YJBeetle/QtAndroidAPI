#pragma once

#ifndef ANDROID_WEBKIT_SSLERRORHANDLER
#define ANDROID_WEBKIT_SSLERRORHANDLER

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"


namespace __jni_impl::android::webkit
{
	class SslErrorHandler : public __jni_impl::android::os::Handler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		void proceed();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void SslErrorHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.SslErrorHandler",
			"(V)V");
	}
	
	// Methods
	void SslErrorHandler::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	void SslErrorHandler::proceed()
	{
		__thiz.callMethod<void>(
			"proceed",
			"()V");
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class SslErrorHandler : public __jni_impl::android::webkit::SslErrorHandler
	{
	public:
		SslErrorHandler(QAndroidJniObject obj) { __thiz = obj; }
		SslErrorHandler()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_SSLERRORHANDLER

