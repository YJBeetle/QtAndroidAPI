#include "./FontsContract_Columns.hpp"

namespace android::provider
{
	// Fields
	jstring FontsContract_Columns::FILE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"FILE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontsContract_Columns::ITALIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"ITALIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontsContract_Columns::RESULT_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint FontsContract_Columns::RESULT_CODE_FONT_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_FONT_NOT_FOUND"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_FONT_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_FONT_UNAVAILABLE"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_MALFORMED_QUERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_MALFORMED_QUERY"
		);
	}
	jint FontsContract_Columns::RESULT_CODE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.FontsContract$Columns",
			"RESULT_CODE_OK"
		);
	}
	jstring FontsContract_Columns::TTC_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"TTC_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontsContract_Columns::VARIATION_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"VARIATION_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontsContract_Columns::WEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.FontsContract$Columns",
			"WEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	FontsContract_Columns::FontsContract_Columns(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

