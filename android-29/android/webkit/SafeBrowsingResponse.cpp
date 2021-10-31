#include "./SafeBrowsingResponse.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	SafeBrowsingResponse::SafeBrowsingResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SafeBrowsingResponse::SafeBrowsingResponse()
		: __JniBaseClass(
			"android.webkit.SafeBrowsingResponse",
			"()V"
		) {}
	
	// Methods
	void SafeBrowsingResponse::backToSafety(jboolean arg0)
	{
		callMethod<void>(
			"backToSafety",
			"(Z)V",
			arg0
		);
	}
	void SafeBrowsingResponse::proceed(jboolean arg0)
	{
		callMethod<void>(
			"proceed",
			"(Z)V",
			arg0
		);
	}
	void SafeBrowsingResponse::showInterstitial(jboolean arg0)
	{
		callMethod<void>(
			"showInterstitial",
			"(Z)V",
			arg0
		);
	}
} // namespace android::webkit

