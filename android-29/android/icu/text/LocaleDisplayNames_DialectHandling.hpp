#pragma once

#ifndef ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_DIALECTHANDLING
#define ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_DIALECTHANDLING

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class LocaleDisplayNames_DialectHandling : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIALECT_NAMES();
		static QAndroidJniObject STANDARD_NAMES();
		
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
	QAndroidJniObject LocaleDisplayNames_DialectHandling::DIALECT_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"DIALECT_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	QAndroidJniObject LocaleDisplayNames_DialectHandling::STANDARD_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"STANDARD_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	
	// Constructors
	void LocaleDisplayNames_DialectHandling::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LocaleDisplayNames_DialectHandling::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/LocaleDisplayNames$DialectHandling;",
			arg0
		);
	}
	QAndroidJniObject LocaleDisplayNames_DialectHandling::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/LocaleDisplayNames$DialectHandling;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray LocaleDisplayNames_DialectHandling::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"values",
			"()[Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class LocaleDisplayNames_DialectHandling : public __jni_impl::android::icu::text::LocaleDisplayNames_DialectHandling
	{
	public:
		LocaleDisplayNames_DialectHandling(QAndroidJniObject obj) { __thiz = obj; }
		LocaleDisplayNames_DialectHandling()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_DIALECTHANDLING

