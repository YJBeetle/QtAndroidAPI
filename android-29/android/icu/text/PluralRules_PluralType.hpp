#pragma once

#ifndef ANDROID_ICU_TEXT_PLURALRULES_PLURALTYPE
#define ANDROID_ICU_TEXT_PLURALRULES_PLURALTYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class PluralRules_PluralType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CARDINAL();
		static QAndroidJniObject ORDINAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject PluralRules_PluralType::CARDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules$PluralType",
			"CARDINAL",
			"Landroid/icu/text/PluralRules$PluralType;");
	}
	QAndroidJniObject PluralRules_PluralType::ORDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules$PluralType",
			"ORDINAL",
			"Landroid/icu/text/PluralRules$PluralType;");
	}
	
	// Constructors
	void PluralRules_PluralType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralRules$PluralType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PluralRules_PluralType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules$PluralType",
			"values",
			"()[Landroid/icu/text/PluralRules$PluralType;");
	}
	QAndroidJniObject PluralRules_PluralType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules$PluralType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules$PluralType;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class PluralRules_PluralType : public __jni_impl::android::icu::text::PluralRules_PluralType
	{
	public:
		PluralRules_PluralType(QAndroidJniObject obj) { __thiz = obj; }
		PluralRules_PluralType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_PLURALRULES_PLURALTYPE

