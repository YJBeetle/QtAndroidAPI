#pragma once

#include "../../JObject.hpp"

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
	class WebMessagePort_WebMessageCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebMessagePort_WebMessageCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebMessagePort_WebMessageCallback(QAndroidJniObject obj);
		
		// Constructors
		WebMessagePort_WebMessageCallback();
		
		// Methods
		void onMessage(android::webkit::WebMessagePort arg0, android::webkit::WebMessage arg1);
	};
} // namespace android::webkit

