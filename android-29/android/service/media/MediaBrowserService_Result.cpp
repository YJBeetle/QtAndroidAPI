#include "./MediaBrowserService.hpp"
#include "./MediaBrowserService_Result.hpp"

namespace android::service::media
{
	// Fields
	
	MediaBrowserService_Result::MediaBrowserService_Result(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaBrowserService_Result::detach()
	{
		__thiz.callMethod<void>(
			"detach",
			"()V"
		);
	}
	void MediaBrowserService_Result::sendResult(jobject arg0)
	{
		__thiz.callMethod<void>(
			"sendResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::service::media

