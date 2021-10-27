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
		
		ServiceWorkerClient(QAndroidJniObject obj);
		// Constructors
		ServiceWorkerClient();
		
		// Methods
		QAndroidJniObject shouldInterceptRequest(__JniBaseClass arg0);
	};
} // namespace android::webkit

