#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class WebResourceResponse;
}

namespace android::webkit
{
	class ServiceWorkerClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceWorkerClient(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceWorkerClient(QAndroidJniObject obj);
		
		// Constructors
		ServiceWorkerClient();
		
		// Methods
		android::webkit::WebResourceResponse shouldInterceptRequest(__JniBaseClass arg0);
	};
} // namespace android::webkit

