#pragma once

#ifndef ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS
#define ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::webkit
{
	class WebChromeClient_FileChooserParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_OPEN();
		static jint MODE_OPEN_MULTIPLE();
		static jint MODE_SAVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject parseResult(jint arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject getAcceptTypes();
		jboolean isCaptureEnabled();
		QAndroidJniObject getFilenameHint();
		QAndroidJniObject createIntent();
		QAndroidJniObject getTitle();
		jint getMode();
	};
} // namespace __jni_impl::android::webkit

#include "../content/Intent.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	jint WebChromeClient_FileChooserParams::MODE_OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN");
	}
	jint WebChromeClient_FileChooserParams::MODE_OPEN_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN_MULTIPLE");
	}
	jint WebChromeClient_FileChooserParams::MODE_SAVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_SAVE");
	}
	
	// Constructors
	void WebChromeClient_FileChooserParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebChromeClient$FileChooserParams",
			"()V");
	}
	
	// Methods
	QAndroidJniObject WebChromeClient_FileChooserParams::parseResult(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebChromeClient$FileChooserParams",
			"parseResult",
			"(ILandroid/content/Intent;)[Landroid/net/Uri;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject WebChromeClient_FileChooserParams::getAcceptTypes()
	{
		return __thiz.callObjectMethod(
			"getAcceptTypes",
			"()[Ljava/lang/String;");
	}
	jboolean WebChromeClient_FileChooserParams::isCaptureEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isCaptureEnabled",
			"()Z");
	}
	QAndroidJniObject WebChromeClient_FileChooserParams::getFilenameHint()
	{
		return __thiz.callObjectMethod(
			"getFilenameHint",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject WebChromeClient_FileChooserParams::createIntent()
	{
		return __thiz.callObjectMethod(
			"createIntent",
			"()Landroid/content/Intent;");
	}
	QAndroidJniObject WebChromeClient_FileChooserParams::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;");
	}
	jint WebChromeClient_FileChooserParams::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I");
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebChromeClient_FileChooserParams : public __jni_impl::android::webkit::WebChromeClient_FileChooserParams
	{
	public:
		WebChromeClient_FileChooserParams(QAndroidJniObject obj) { __thiz = obj; }
		WebChromeClient_FileChooserParams()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBCHROMECLIENT_FILECHOOSERPARAMS

