#pragma once

#ifndef ANDROID_ICU_LANG_USCRIPT_SCRIPTUSAGE
#define ANDROID_ICU_LANG_USCRIPT_SCRIPTUSAGE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::lang
{
	class UScript_ScriptUsage : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NOT_ENCODED();
		static QAndroidJniObject UNKNOWN();
		static QAndroidJniObject EXCLUDED();
		static QAndroidJniObject LIMITED_USE();
		static QAndroidJniObject ASPIRATIONAL();
		static QAndroidJniObject RECOMMENDED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::lang


namespace __jni_impl::android::icu::lang
{
	// Fields
	QAndroidJniObject UScript_ScriptUsage::NOT_ENCODED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"NOT_ENCODED",
			"Landroid/icu/lang/UScript$ScriptUsage;");
	}
	QAndroidJniObject UScript_ScriptUsage::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"UNKNOWN",
			"Landroid/icu/lang/UScript$ScriptUsage;");
	}
	QAndroidJniObject UScript_ScriptUsage::EXCLUDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"EXCLUDED",
			"Landroid/icu/lang/UScript$ScriptUsage;");
	}
	QAndroidJniObject UScript_ScriptUsage::LIMITED_USE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"LIMITED_USE",
			"Landroid/icu/lang/UScript$ScriptUsage;");
	}
	QAndroidJniObject UScript_ScriptUsage::ASPIRATIONAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"ASPIRATIONAL",
			"Landroid/icu/lang/UScript$ScriptUsage;");
	}
	QAndroidJniObject UScript_ScriptUsage::RECOMMENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"RECOMMENDED",
			"Landroid/icu/lang/UScript$ScriptUsage;");
	}
	
	// Constructors
	void UScript_ScriptUsage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.lang.UScript$ScriptUsage",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UScript_ScriptUsage::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UScript$ScriptUsage",
			"values",
			"()[Landroid/icu/lang/UScript$ScriptUsage;");
	}
	QAndroidJniObject UScript_ScriptUsage::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UScript$ScriptUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/lang/UScript$ScriptUsage;",
			arg0);
	}
} // namespace __jni_impl::android::icu::lang

namespace android::icu::lang
{
	class UScript_ScriptUsage : public __jni_impl::android::icu::lang::UScript_ScriptUsage
	{
	public:
		UScript_ScriptUsage(QAndroidJniObject obj) { __thiz = obj; }
		UScript_ScriptUsage()
		{
			__constructor();
		}
	};
} // namespace android::icu::lang

#endif // ANDROID_ICU_LANG_USCRIPT_SCRIPTUSAGE

