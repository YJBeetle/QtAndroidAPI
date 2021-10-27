#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::media
{
	class MediaBrowserService;
}

namespace android::service::media
{
	class MediaBrowserService_Result : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaBrowserService_Result(QAndroidJniObject obj);
		// Constructors
		MediaBrowserService_Result() = default;
		
		// Methods
		void detach();
		void sendResult(jobject arg0);
	};
} // namespace android::service::media

