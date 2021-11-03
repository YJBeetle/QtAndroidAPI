#include "./WebView_HitTestResult.hpp"

namespace android::webkit
{
	// Fields
	jint WebView_HitTestResult::ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::EDIT_TEXT_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"EDIT_TEXT_TYPE"
		);
	}
	jint WebView_HitTestResult::EMAIL_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"EMAIL_TYPE"
		);
	}
	jint WebView_HitTestResult::GEO_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"GEO_TYPE"
		);
	}
	jint WebView_HitTestResult::IMAGE_ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"IMAGE_ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::IMAGE_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"IMAGE_TYPE"
		);
	}
	jint WebView_HitTestResult::PHONE_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"PHONE_TYPE"
		);
	}
	jint WebView_HitTestResult::SRC_ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"SRC_ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::SRC_IMAGE_ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"SRC_IMAGE_ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::UNKNOWN_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"UNKNOWN_TYPE"
		);
	}
	
	// QAndroidJniObject forward
	WebView_HitTestResult::WebView_HitTestResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring WebView_HitTestResult::getExtra()
	{
		return callObjectMethod(
			"getExtra",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebView_HitTestResult::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::webkit

