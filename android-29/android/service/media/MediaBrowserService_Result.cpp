#include "./MediaBrowserService.hpp"
#include "../../../JObject.hpp"
#include "./MediaBrowserService_Result.hpp"

namespace android::service::media
{
	// Fields
	
	// QJniObject forward
	MediaBrowserService_Result::MediaBrowserService_Result(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaBrowserService_Result::detach()
	{
		callMethod<void>(
			"detach",
			"()V"
		);
	}
	void MediaBrowserService_Result::sendResult(JObject arg0)
	{
		callMethod<void>(
			"sendResult",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::service::media

