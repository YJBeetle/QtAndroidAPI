#include "./UScript_ScriptUsage.hpp"

namespace android::icu::lang
{
	// Fields
	QAndroidJniObject UScript_ScriptUsage::ASPIRATIONAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"ASPIRATIONAL",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	QAndroidJniObject UScript_ScriptUsage::EXCLUDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"EXCLUDED",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	QAndroidJniObject UScript_ScriptUsage::LIMITED_USE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"LIMITED_USE",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	QAndroidJniObject UScript_ScriptUsage::NOT_ENCODED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"NOT_ENCODED",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	QAndroidJniObject UScript_ScriptUsage::RECOMMENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"RECOMMENDED",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	QAndroidJniObject UScript_ScriptUsage::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"UNKNOWN",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	
	UScript_ScriptUsage::UScript_ScriptUsage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UScript_ScriptUsage::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UScript$ScriptUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/lang/UScript$ScriptUsage;",
			arg0
		);
	}
	jarray UScript_ScriptUsage::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UScript$ScriptUsage",
			"values",
			"()[Landroid/icu/lang/UScript$ScriptUsage;"
		).object<jarray>();
	}
} // namespace android::icu::lang

