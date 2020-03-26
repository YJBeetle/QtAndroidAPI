#pragma once

#ifndef ANDROID_ICU_TEXT_MEASUREFORMAT_FORMATWIDTH
#define ANDROID_ICU_TEXT_MEASUREFORMAT_FORMATWIDTH

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class MeasureFormat_FormatWidth : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject WIDE();
		static QAndroidJniObject SHORT();
		static QAndroidJniObject NARROW();
		static QAndroidJniObject NUMERIC();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject MeasureFormat_FormatWidth::WIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"WIDE",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	QAndroidJniObject MeasureFormat_FormatWidth::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"SHORT",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	QAndroidJniObject MeasureFormat_FormatWidth::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NARROW",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	QAndroidJniObject MeasureFormat_FormatWidth::NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NUMERIC",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	
	// Constructors
	void MeasureFormat_FormatWidth::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MeasureFormat$FormatWidth",
			"(V)V");
	}
	
	// Methods
	jarray MeasureFormat_FormatWidth::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"values",
			"()[Landroid/icu/text/MeasureFormat$FormatWidth;"
		).object<jarray>();
	}
	QAndroidJniObject MeasureFormat_FormatWidth::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MeasureFormat$FormatWidth;",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MeasureFormat_FormatWidth : public __jni_impl::android::icu::text::MeasureFormat_FormatWidth
	{
	public:
		MeasureFormat_FormatWidth(QAndroidJniObject obj) { __thiz = obj; }
		MeasureFormat_FormatWidth()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MEASUREFORMAT_FORMATWIDTH

