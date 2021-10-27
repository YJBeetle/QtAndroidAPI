#pragma once

#ifndef ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK
#define ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Typeface;
}

namespace __jni_impl::android::provider
{
	class FontsContract_FontRequestCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint FAIL_REASON_FONT_LOAD_ERROR();
		static jint FAIL_REASON_FONT_NOT_FOUND();
		static jint FAIL_REASON_FONT_UNAVAILABLE();
		static jint FAIL_REASON_MALFORMED_QUERY();
		static jint FAIL_REASON_PROVIDER_NOT_FOUND();
		static jint FAIL_REASON_WRONG_CERTIFICATES();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onTypefaceRequestFailed(jint arg0);
		void onTypefaceRetrieved(__jni_impl::android::graphics::Typeface arg0);
	};
} // namespace __jni_impl::android::provider

#include "../graphics/Typeface.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_LOAD_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_FONT_LOAD_ERROR"
		);
	}
	jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_FONT_NOT_FOUND"
		);
	}
	jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_FONT_UNAVAILABLE"
		);
	}
	jint FontsContract_FontRequestCallback::FAIL_REASON_MALFORMED_QUERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_MALFORMED_QUERY"
		);
	}
	jint FontsContract_FontRequestCallback::FAIL_REASON_PROVIDER_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_PROVIDER_NOT_FOUND"
		);
	}
	jint FontsContract_FontRequestCallback::FAIL_REASON_WRONG_CERTIFICATES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_WRONG_CERTIFICATES"
		);
	}
	
	// Constructors
	void FontsContract_FontRequestCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontsContract$FontRequestCallback",
			"()V"
		);
	}
	
	// Methods
	void FontsContract_FontRequestCallback::onTypefaceRequestFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTypefaceRequestFailed",
			"(I)V",
			arg0
		);
	}
	void FontsContract_FontRequestCallback::onTypefaceRetrieved(__jni_impl::android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"onTypefaceRetrieved",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class FontsContract_FontRequestCallback : public __jni_impl::android::provider::FontsContract_FontRequestCallback
	{
	public:
		FontsContract_FontRequestCallback(QAndroidJniObject obj) { __thiz = obj; }
		FontsContract_FontRequestCallback()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK

