#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT
#define ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebView_HitTestResult : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANCHOR_TYPE();
		static jint EDIT_TEXT_TYPE();
		static jint EMAIL_TYPE();
		static jint GEO_TYPE();
		static jint IMAGE_ANCHOR_TYPE();
		static jint IMAGE_TYPE();
		static jint PHONE_TYPE();
		static jint SRC_ANCHOR_TYPE();
		static jint SRC_IMAGE_ANCHOR_TYPE();
		static jint UNKNOWN_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getType();
		jstring getExtra();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	jint WebView_HitTestResult::ANCHOR_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::EDIT_TEXT_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"EDIT_TEXT_TYPE"
		);
	}
	jint WebView_HitTestResult::EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"EMAIL_TYPE"
		);
	}
	jint WebView_HitTestResult::GEO_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"GEO_TYPE"
		);
	}
	jint WebView_HitTestResult::IMAGE_ANCHOR_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"IMAGE_ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::IMAGE_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"IMAGE_TYPE"
		);
	}
	jint WebView_HitTestResult::PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"PHONE_TYPE"
		);
	}
	jint WebView_HitTestResult::SRC_ANCHOR_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"SRC_ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::SRC_IMAGE_ANCHOR_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"SRC_IMAGE_ANCHOR_TYPE"
		);
	}
	jint WebView_HitTestResult::UNKNOWN_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"UNKNOWN_TYPE"
		);
	}
	
	// Constructors
	void WebView_HitTestResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView$HitTestResult",
			"(V)V");
	}
	
	// Methods
	jint WebView_HitTestResult::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring WebView_HitTestResult::getExtra()
	{
		return __thiz.callObjectMethod(
			"getExtra",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebView_HitTestResult : public __jni_impl::android::webkit::WebView_HitTestResult
	{
	public:
		WebView_HitTestResult(QAndroidJniObject obj) { __thiz = obj; }
		WebView_HitTestResult()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT

