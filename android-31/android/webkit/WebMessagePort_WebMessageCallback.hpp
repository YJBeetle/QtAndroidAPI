#pragma once

#include "./WebMessage.def.hpp"
#include "./WebMessagePort.def.hpp"
#include "./WebMessagePort_WebMessageCallback.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebMessagePort_WebMessageCallback::WebMessagePort_WebMessageCallback()
		: JObject(
			"android.webkit.WebMessagePort$WebMessageCallback",
			"()V"
		) {}
	
	// Methods
	inline void WebMessagePort_WebMessageCallback::onMessage(android::webkit::WebMessagePort arg0, android::webkit::WebMessage arg1) const
	{
		callMethod<void>(
			"onMessage",
			"(Landroid/webkit/WebMessagePort;Landroid/webkit/WebMessage;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

// Base class headers

