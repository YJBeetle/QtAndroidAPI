#pragma once

#ifndef ANDROID_WEBKIT_SERVICEWORKERCLIENT
#define ANDROID_WEBKIT_SERVICEWORKERCLIENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebResourceResponse;
}

namespace __jni_impl::android::webkit
{
	class ServiceWorkerClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject shouldInterceptRequest(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::webkit

#include "WebResourceResponse.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void ServiceWorkerClient::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ServiceWorkerClient",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ServiceWorkerClient::shouldInterceptRequest(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class ServiceWorkerClient : public __jni_impl::android::webkit::ServiceWorkerClient
	{
	public:
		ServiceWorkerClient(QAndroidJniObject obj) { __thiz = obj; }
		ServiceWorkerClient()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_SERVICEWORKERCLIENT

