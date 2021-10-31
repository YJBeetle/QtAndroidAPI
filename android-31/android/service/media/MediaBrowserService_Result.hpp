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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowserService_Result(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowserService_Result(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void detach();
		void sendResult(jobject arg0);
	};
} // namespace android::service::media

