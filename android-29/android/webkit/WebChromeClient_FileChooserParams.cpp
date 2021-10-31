#include "../content/Intent.hpp"
#include "./WebChromeClient_FileChooserParams.hpp"

namespace android::webkit
{
	// Fields
	jint WebChromeClient_FileChooserParams::MODE_OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN"
		);
	}
	jint WebChromeClient_FileChooserParams::MODE_OPEN_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN_MULTIPLE"
		);
	}
	jint WebChromeClient_FileChooserParams::MODE_SAVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_SAVE"
		);
	}
	
	// QAndroidJniObject forward
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams()
		: __JniBaseClass(
			"android.webkit.WebChromeClient$FileChooserParams",
			"()V"
		) {}
	
	// Methods
	jarray WebChromeClient_FileChooserParams::parseResult(jint arg0, android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebChromeClient$FileChooserParams",
			"parseResult",
			"(ILandroid/content/Intent;)[Landroid/net/Uri;",
			arg0,
			arg1.object()
		).object<jarray>();
	}
	QAndroidJniObject WebChromeClient_FileChooserParams::createIntent()
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

