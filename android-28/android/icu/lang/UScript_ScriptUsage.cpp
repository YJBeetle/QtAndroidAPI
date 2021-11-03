#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./UScript_ScriptUsage.hpp"

namespace android::icu::lang
{
	// Fields
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::ASPIRATIONAL()
	{
		return getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"ASPIRATIONAL",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::EXCLUDED()
	{
		return getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"EXCLUDED",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::LIMITED_USE()
	{
		return getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"LIMITED_USE",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::NOT_ENCODED()
	{
		return getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"NOT_ENCODED",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::RECOMMENDED()
	{
		return getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"RECOMMENDED",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::UNKNOWN()
	{
		return getStaticObjectField(
			"android.icu.lang.UScript$ScriptUsage",
			"UNKNOWN",
			"Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
	
	// QJniObject forward
	UScript_ScriptUsage::UScript_ScriptUsage(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::lang::UScript_ScriptUsage UScript_ScriptUsage::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript$ScriptUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/lang/UScript$ScriptUsage;",
			arg0.object<jstring>()
		);
	}
	JArray UScript_ScriptUsage::values()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript$ScriptUsage",
			"values",
			"()[Landroid/icu/lang/UScript$ScriptUsage;"
		);
	}
} // namespace android::icu::lang

