#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE
#define ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class UnicodeSet_ComparisonStyle : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LEXICOGRAPHIC();
		static QAndroidJniObject LONGER_FIRST();
		static QAndroidJniObject SHORTER_FIRST();
		
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
	QAndroidJniObject UnicodeSet_ComparisonStyle::LEXICOGRAPHIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LEXICOGRAPHIC",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	QAndroidJniObject UnicodeSet_ComparisonStyle::LONGER_FIRST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LONGER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	QAndroidJniObject UnicodeSet_ComparisonStyle::SHORTER_FIRST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"SHORTER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	
	// Constructors
	void UnicodeSet_ComparisonStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UnicodeSet_ComparisonStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$ComparisonStyle;",
			arg0
		);
	}
	QAndroidJniObject UnicodeSet_ComparisonStyle::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$ComparisonStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray UnicodeSet_ComparisonStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"values",
			"()[Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSet_ComparisonStyle : public __jni_impl::android::icu::text::UnicodeSet_ComparisonStyle
	{
	public:
		UnicodeSet_ComparisonStyle(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSet_ComparisonStyle()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODESET_COMPARISONSTYLE

