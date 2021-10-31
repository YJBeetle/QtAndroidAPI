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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebMessagePort_WebMessageCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebMessagePort_WebMessageCallback(QAndroidJniObject obj);
		
		// Constructors
		WebMessagePort_WebMessageCallback();
		
		// Methods
		void onMessage(android::webkit::WebMessagePort arg0, android::webkit::WebMessage arg1);
	};
} // namespace android::webkit

