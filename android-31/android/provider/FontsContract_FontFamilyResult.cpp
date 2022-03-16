#include "../../JArray.hpp"
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
	
	// Constructors
	
	// Methods
	JArray FontsContract_FontFamilyResult::getFonts() const
	{
		return callObjectMethod(
			"getFonts",
			"()[Landroid/provider/FontsContract$FontInfo;"
		);
	}
	jint FontsContract_FontFamilyResult::getStatusCode() const
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::provider

