#include "../graphics/Typeface.hpp"
#include "./FontsContract_FontRequestCallback.hpp"

namespace android::provider
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
	
	FontsContract_FontRequestCallback::FontsContract_FontRequestCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FontsContract_FontRequestCallback::FontsContract_FontRequestCallback()
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
	void FontsContract_FontRequestCallback::onTypefaceRetrieved(android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"onTypefaceRetrieved",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::provider

