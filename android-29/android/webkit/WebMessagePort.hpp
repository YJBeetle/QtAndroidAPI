#pragma once

#include "../../__JniBaseClass.hpp"

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
	class WebMessagePort : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebMessagePort(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebMessagePort(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void postMessage(android::webkit::WebMessage arg0);
		void setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0);
		void setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0, android::os::Handler arg1);
	};
} // namespace android::webkit

