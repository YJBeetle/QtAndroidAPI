#pragma once

#ifndef ANDROID_PROVIDER_FONTSCONTRACT_FONTFAMILYRESULT
#define ANDROID_PROVIDER_FONTSCONTRACT_FONTFAMILYRESULT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class FontsContract_FontFamilyResult : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_OK();
		static jint STATUS_REJECTED();
		static jint STATUS_UNEXPECTED_DATA_PROVIDED();
		static jint STATUS_WRONG_CERTIFICATES();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getStatusCode();
		QAndroidJniObject getFonts();
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jint FontsContract_FontFamilyResult::STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_OK");
	}
	jint FontsContract_FontFamilyResult::STATUS_REJECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_REJECTED");
	}
	jint FontsContract_FontFamilyResult::STATUS_UNEXPECTED_DATA_PROVIDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_UNEXPECTED_DATA_PROVIDED");
	}
	jint FontsContract_FontFamilyResult::STATUS_WRONG_CERTIFICATES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_WRONG_CERTIFICATES");
	}
	
	// Constructors
	void FontsContract_FontFamilyResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontsContract$FontFamilyResult",
			"(V)V");
	}
	
	// Methods
	jint FontsContract_FontFamilyResult::getStatusCode()
	{
		return __thiz.callMethod<jint>(
			"getStatusCode",
			"()I");
	}
	QAndroidJniObject FontsContract_FontFamilyResult::getFonts()
	{
		return __thiz.callObjectMethod(
			"getFonts",
			"()[Landroid/provider/FontsContract$FontInfo;");
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class FontsContract_FontFamilyResult : public __jni_impl::android::provider::FontsContract_FontFamilyResult
	{
	public:
		FontsContract_FontFamilyResult(QAndroidJniObject obj) { __thiz = obj; }
		FontsContract_FontFamilyResult()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_FONTSCONTRACT_FONTFAMILYRESULT

