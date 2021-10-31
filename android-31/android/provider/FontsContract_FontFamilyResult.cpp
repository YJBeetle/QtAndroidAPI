#include "./FontsContract_FontFamilyResult.hpp"

namespace android::provider
{
	// Fields
	jint FontsContract_FontFamilyResult::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_OK"
		);
	}
	jint FontsContract_FontFamilyResult::STATUS_REJECTED()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_REJECTED"
		);
	}
	jint FontsContract_FontFamilyResult::STATUS_UNEXPECTED_DATA_PROVIDED()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_UNEXPECTED_DATA_PROVIDED"
		);
	}
	jint FontsContract_FontFamilyResult::STATUS_WRONG_CERTIFICATES()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_WRONG_CERTIFICATES"
		);
	}
	
	// QJniObject forward
	FontsContract_FontFamilyResult::FontsContract_FontFamilyResult(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray FontsContract_FontFamilyResult::getFonts()
	{
		return callObjectMethod(
			"getFonts",
			"()[Landroid/provider/FontsContract$FontInfo;"
		).object<jarray>();
	}
	jint FontsContract_FontFamilyResult::getStatusCode()
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::provider

