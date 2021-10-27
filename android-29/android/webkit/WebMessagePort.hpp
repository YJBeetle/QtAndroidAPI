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
		
		WebMessagePort(QAndroidJniObject obj);
		// Constructors
		WebMessagePort() = default;
		
		// Methods
		void close();
		void postMessage(android::webkit::WebMessage arg0);
		void setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0);
		void setWebMessageCallback(android::webkit::WebMessagePort_WebMessageCallback arg0, android::os::Handler arg1);
	};
} // namespace android::webkit

