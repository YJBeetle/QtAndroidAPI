#include "./FontsContract_FontFamilyResult.hpp"

namespace android::provider
{
	// Fields
	jint FontsContract_FontFamilyResult::STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_OK"
		);
	}
	jint FontsContract_FontFamilyResult::STATUS_REJECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_REJECTED"
		);
	}
	jint FontsContract_FontFamilyResult::STATUS_UNEXPECTED_DATA_PROVIDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_UNEXPECTED_DATA_PROVIDED"
		);
	}
	jint FontsContract_FontFamilyResult::STATUS_WRONG_CERTIFICATES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_WRONG_CERTIFICATES"
		);
	}
	
	FontsContract_FontFamilyResult::FontsContract_FontFamilyResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray FontsContract_FontFamilyResult::getFonts()
	{
		return __thiz.callObjectMethod(
			"getFonts",
			"()[Landroid/provider/FontsContract$FontInfo;"
		).object<jarray>();
	}
	jint FontsContract_FontFamilyResult::getStatusCode()
	{
		return __thiz.callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::provider

