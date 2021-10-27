#include "./WebResourceResponse.hpp"
#include "./ServiceWorkerClient.hpp"

namespace android::webkit
{
	// Fields
	
	ServiceWorkerClient::ServiceWorkerClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ServiceWorkerClient::ServiceWorkerClient()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ServiceWorkerClient",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ServiceWorkerClient::shouldInterceptRequest(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::webkit

