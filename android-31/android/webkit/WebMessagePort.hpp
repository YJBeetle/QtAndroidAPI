#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Handler;
}
namespace android::webkit
{
	class WebMessage;
}
namespace android::webkit
{
	class WebMessagePort_WebMessageCallback;
}

namespace android::webkit
{
	class WebMessagePort : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebMessagePort(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebMessagePort(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		void postMessage(android::webkit::WebMessage arg0) const;
		void setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0) const;
		void setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0, android::os::Handler arg1) const;
	};
} // namespace android::webkit

