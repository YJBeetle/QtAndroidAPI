#include "../os/Handler.hpp"
#include "./WebMessage.hpp"
#include "./WebMessagePort_WebMessageCallback.hpp"
#include "./WebMessagePort.hpp"

namespace android::webkit
{
	// Fields
	
	WebMessagePort::WebMessagePort(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WebMessagePort::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebMessagePort::postMessage(android::webkit::WebMessage arg0)
	{
		__thiz.callMethod<void>(
			"postMessage",
			"(Landroid/webkit/WebMessage;)V",
			arg0.__jniObject().object()
		);
	}
	void WebMessagePort::setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0)
	{
		__thiz.callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void WebMessagePort::setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::webkit

