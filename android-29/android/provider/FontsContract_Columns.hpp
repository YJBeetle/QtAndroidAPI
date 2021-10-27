#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class FontsContract_Columns : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FILE_ID();
		static jstring ITALIC();
		static jstring RESULT_CODE();
		static jint RESULT_CODE_FONT_NOT_FOUND();
		static jint RESULT_CODE_FONT_UNAVAILABLE();
		static jint RESULT_CODE_MALFORMED_QUERY();
		static jint RESULT_CODE_OK();
		static jstring TTC_INDEX();
		static jstring VARIATION_SETTINGS();
		static jstring WEIGHT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
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
	
	// Constructors
	void FontsContract_Columns::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontsContract$Columns",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class FontsContract_Columns : public __jni_impl::android::provider::FontsContract_Columns
	{
	public:
		FontsContract_Columns(QAndroidJniObject obj) { __thiz = obj; }
		FontsContract_Columns()
		{
			__constructor();
		}
	};
} // namespace android::provider

