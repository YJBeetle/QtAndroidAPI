#include "./SafeBrowsingResponse.hpp"

namespace android::webkit
{
	// Fields
	
	SafeBrowsingResponse::SafeBrowsingResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SafeBrowsingResponse::SafeBrowsingResponse()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.SafeBrowsingResponse",
			"()V"
		);
	}
	
	// Methods
	void SafeBrowsingResponse::backToSafety(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"backToSafety",
			"(Z)V",
			arg0
		);
	}
	void SafeBrowsingResponse::proceed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Z)V",
			arg0
		);
	}
	void SafeBrowsingResponse::showInterstitial(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"showInterstitial",
			"(Z)V",
			arg0
		);
	}
} // namespace android::webkit

