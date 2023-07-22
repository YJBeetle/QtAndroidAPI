#pragma once

#include "../../JString.hpp"
#include "./FontsContract_Columns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString FontsContract_Columns::FILE_ID()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"FILE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString FontsContract_Columns::ITALIC()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"ITALIC",
			"Ljava/lang/String;"
		);
	}
	inline JString FontsContract_Columns::RESULT_CODE()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE",
			"Ljava/lang/String;"
		);
	}
	inline jint FontsContract_Columns::RESULT_CODE_FONT_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_FONT_NOT_FOUND"
		);
	}
	inline jint FontsContract_Columns::RESULT_CODE_FONT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_FONT_UNAVAILABLE"
		);
	}
	inline jint FontsContract_Columns::RESULT_CODE_MALFORMED_QUERY()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_MALFORMED_QUERY"
		);
	}
	inline jint FontsContract_Columns::RESULT_CODE_OK()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_OK"
		);
	}
	inline JString FontsContract_Columns::TTC_INDEX()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"TTC_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString FontsContract_Columns::VARIATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"VARIATION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString FontsContract_Columns::WEIGHT()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"WEIGHT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
