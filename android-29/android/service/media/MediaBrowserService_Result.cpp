#include "./MediaBrowserService.hpp"
#include "./MediaBrowserService_Result.hpp"

namespace android::service::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaBrowserService_Result::MediaBrowserService_Result(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MediaBrowserService_Result::detach()
	{
		callMethod<void>(
			"detach",
			"()V"
		);
	}
	void MediaBrowserService_Result::sendResult(jobject arg0)
	{
		callMethod<void>(
			"sendResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::service::media

