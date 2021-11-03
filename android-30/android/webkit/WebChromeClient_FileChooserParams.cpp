#include "../content/Intent.hpp"
#include "./WebChromeClient_FileChooserParams.hpp"

namespace android::webkit
{
	// Fields
	jint WebChromeClient_FileChooserParams::MODE_OPEN()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN"
		);
	}
	jint WebChromeClient_FileChooserParams::MODE_OPEN_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN_MULTIPLE"
		);
	}
	jint WebChromeClient_FileChooserParams::MODE_SAVE()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_SAVE"
		);
	}
	
	// QJniObject forward
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams()
		: JObject(
			"android.webkit.WebChromeClient$FileChooserParams",
			"()V"
		) {}
	
	// Methods
	jarray WebChromeClient_FileChooserParams::parseResult(jint arg0, android::content::Intent arg1)
	{
		return callStaticObjectMethod(
			"android.webkit.WebChromeClient$FileChooserParams",
			"parseResult",
			"(ILandroid/content/Intent;)[Landroid/net/Uri;",
			arg0,
			arg1.object()
		).object<jarray>();
	}
	android::content::Intent WebChromeClient_FileChooserParams::createIntent()
	{
		return callObjectMethod(
			"createIntent",
			"()Landroid/content/Intent;"
		);
	}
	jarray WebChromeClient_FileChooserParams::getAcceptTypes()
	{
		return callObjectMethod(
			"getAcceptTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WebChromeClient_FileChooserParams::getFilenameHint()
	{
		return callObjectMethod(
			"getFilenameHint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebChromeClient_FileChooserParams::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jstring WebChromeClient_FileChooserParams::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean WebChromeClient_FileChooserParams::isCaptureEnabled()
	{
		return callMethod<jboolean>(
			"isCaptureEnabled",
			"()Z"
		);
	}
} // namespace android::webkit

