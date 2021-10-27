#include "./WebMessage.hpp"
#include "./WebMessagePort.hpp"
#include "./WebMessagePort_WebMessageCallback.hpp"

namespace android::webkit
{
	// Fields
	
	WebMessagePort_WebMessageCallback::WebMessagePort_WebMessageCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebMessagePort_WebMessageCallback::WebMessagePort_WebMessageCallback()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessagePort$WebMessageCallback",
			"()V"
		);
	}
	
	// Methods
	void WebMessagePort_WebMessageCallback::onMessage(android::webkit::WebMessagePort arg0, android::webkit::WebMessage arg1)
	{
		__thiz.callMethod<void>(
			"onMessage",
			"(Landroid/webkit/WebMessagePort;Landroid/webkit/WebMessage;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::webkit

