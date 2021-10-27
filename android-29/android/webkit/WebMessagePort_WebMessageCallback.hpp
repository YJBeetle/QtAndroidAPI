#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class WebMessage;
}
namespace android::webkit
{
	class WebMessagePort;
}

namespace android::webkit
{
	class WebMessagePort_WebMessageCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		WebMessagePort_WebMessageCallback(QAndroidJniObject obj);
		// Constructors
		WebMessagePort_WebMessageCallback();
		
		// Methods
		void onMessage(android::webkit::WebMessagePort arg0, android::webkit::WebMessage arg1);
	};
} // namespace android::webkit

