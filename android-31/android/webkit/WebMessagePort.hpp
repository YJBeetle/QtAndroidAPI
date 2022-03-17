#pragma once

#include "../os/Handler.def.hpp"
#include "./WebMessage.def.hpp"
#include "./WebMessagePort_WebMessageCallback.def.hpp"
#include "./WebMessagePort.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void WebMessagePort::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void WebMessagePort::postMessage(android::webkit::WebMessage arg0) const
	{
		callMethod<void>(
			"postMessage",
			"(Landroid/webkit/WebMessage;)V",
			arg0.object()
		);
	}
	inline void WebMessagePort::setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0) const
	{
		callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;)V",
			arg0.object()
		);
	}
	inline void WebMessagePort::setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setWebMessageCallback",
			"(Landroid/webkit/WebMessagePort$WebMessageCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

// Base class headers

