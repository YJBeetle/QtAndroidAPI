#include "../os/Handler.hpp"
#include "./WebMessage.hpp"
#include "./WebMessagePort_WebMessageCallback.hpp"
#include "./WebMessagePort.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebMessagePort::WebMessagePort(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WebMessagePort::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebMessagePort::postMessage(android::webkit::WebMessage arg0) const
	{
		callMethod<void>(
			"postMessage",
			"(Landroid/webkit/WebMessage;)V",
			arg0.object()
		);
	}
	void WebMessagePort::setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0) const
	{
		callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;)V",
			arg0.object()
		);
	}
	void WebMessagePort::setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

