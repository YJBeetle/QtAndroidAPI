#include "../../JString.hpp"
#include "./FontsContract_Columns.hpp"

namespace android::provider
{
	// Fields
	JString FontsContract_Columns::FILE_ID()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"FILE_ID",
			"Ljava/lang/String;"
		);
	}
	JString FontsContract_Columns::ITALIC()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"ITALIC",
			"Ljava/lang/String;"
		);
	}
	JString FontsContract_Columns::RESULT_CODE()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE",
			"Ljava/lang/String;"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_FONT_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_FONT_NOT_FOUND"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_FONT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_FONT_UNAVAILABLE"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_MALFORMED_QUERY()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_MALFORMED_QUERY"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_OK()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_OK"
		);
	}
	JString FontsContract_Columns::TTC_INDEX()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"TTC_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString FontsContract_Columns::VARIATION_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"VARIATION_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	JString FontsContract_Columns::WEIGHT()
	{
		return getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"WEIGHT",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	FontsContract_Columns::FontsContract_Columns(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

