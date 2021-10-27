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
	
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebChromeClient$FileChooserParams",
			"()V"
		);
	}
	
	// Methods
	jarray WebChromeClient_FileChooserParams::parseResult(jint arg0, android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebChromeClient$FileChooserParams",
			"parseResult",
			"(ILandroid/content/Intent;)[Landroid/net/Uri;",
			arg0,
			arg1.__jniObject().object()
		).object<jarray>();
	}
	QAndroidJniObject WebChromeClient_FileChooserParams::createIntent()
	{
		return __thiz.callObjectMethod(
			"createIntent",
			"()Landroid/content/Intent;"
		);
	}
	jarray WebChromeClient_FileChooserParams::getAcceptTypes()
	{
		return __thiz.callObjectMethod(
			"getAcceptTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WebChromeClient_FileChooserParams::getFilenameHint()
	{
		return __thiz.callObjectMethod(
			"getFilenameHint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebChromeClient_FileChooserParams::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jstring WebChromeClient_FileChooserParams::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean WebChromeClient_FileChooserParams::isCaptureEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isCaptureEnabled",
			"()Z"
		);
	}
} // namespace android::webkit

