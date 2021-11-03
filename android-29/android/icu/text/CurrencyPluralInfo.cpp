#include "./PluralRules.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CurrencyPluralInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CurrencyPluralInfo::CurrencyPluralInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CurrencyPluralInfo::CurrencyPluralInfo()
		: JObject(
			"android.icu.text.CurrencyPluralInfo",
			"()V"
		) {}
	CurrencyPluralInfo::CurrencyPluralInfo(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	CurrencyPluralInfo::CurrencyPluralInfo(java::util::Locale arg0)
		: JObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	android::icu::text::CurrencyPluralInfo CurrencyPluralInfo::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"()Landroid/icu/text/CurrencyPluralInfo;"
		);
	}
	android::icu::text::CurrencyPluralInfo CurrencyPluralInfo::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.object()
		);
	}
	android::icu::text::CurrencyPluralInfo CurrencyPluralInfo::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.object()
		);
	}
	JObject CurrencyPluralInfo::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean CurrencyPluralInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString CurrencyPluralInfo::getCurrencyPluralPattern(JString arg0)
	{
		return callObjectMethod(
			"getCurrencyPluralPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale CurrencyPluralInfo::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	android::icu::text::PluralRules CurrencyPluralInfo::getPluralRules()
	{
		return callObjectMethod(
			"getPluralRules",
			"()Landroid/icu/text/PluralRules;"
		);
	}
	jint CurrencyPluralInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CurrencyPluralInfo::setCurrencyPluralPattern(JString arg0, JString arg1)
	{
		callMethod<void>(
			"setCurrencyPluralPattern",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void CurrencyPluralInfo::setLocale(android::icu::util::ULocale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		);
	}
	void CurrencyPluralInfo::setPluralRules(JString arg0)
	{
		callMethod<void>(
			"setPluralRules",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

