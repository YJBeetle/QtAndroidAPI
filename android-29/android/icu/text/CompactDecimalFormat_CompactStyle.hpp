#pragma once

#ifndef ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT_COMPACTSTYLE
#define ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT_COMPACTSTYLE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class CompactDecimalFormat_CompactStyle : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LONG();
		static QAndroidJniObject SHORT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject CompactDecimalFormat_CompactStyle::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"LONG",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	QAndroidJniObject CompactDecimalFormat_CompactStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"SHORT",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	
	// Constructors
	void CompactDecimalFormat_CompactStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CompactDecimalFormat_CompactStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/CompactDecimalFormat$CompactStyle;",
			arg0
		);
	}
	QAndroidJniObject CompactDecimalFormat_CompactStyle::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/CompactDecimalFormat$CompactStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray CompactDecimalFormat_CompactStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"values",
			"()[Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CompactDecimalFormat_CompactStyle : public __jni_impl::android::icu::text::CompactDecimalFormat_CompactStyle
	{
	public:
		CompactDecimalFormat_CompactStyle(QAndroidJniObject obj) { __thiz = obj; }
		CompactDecimalFormat_CompactStyle()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT_COMPACTSTYLE

