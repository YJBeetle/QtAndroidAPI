#pragma once

#include "../../JArray.hpp"
#include "./FontsContract_FontFamilyResult.def.hpp"

namespace android::provider
{
	// Fields
	inline jint FontsContract_FontFamilyResult::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_OK"
		);
	}
	inline jint FontsContract_FontFamilyResult::STATUS_REJECTED()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_REJECTED"
		);
	}
	inline jint FontsContract_FontFamilyResult::STATUS_UNEXPECTED_DATA_PROVIDED()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_UNEXPECTED_DATA_PROVIDED"
		);
	}
	inline jint FontsContract_FontFamilyResult::STATUS_WRONG_CERTIFICATES()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontFamilyResult",
			"STATUS_WRONG_CERTIFICATES"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray FontsContract_FontFamilyResult::getFonts() const
	{
		return callObjectMethod(
			"getFonts",
			"()[Landroid/provider/FontsContract$FontInfo;"
		);
	}
	inline jint FontsContract_FontFamilyResult::getStatusCode() const
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::provider

// Base class headers

