#include "./PluralRules_PluralType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./PluralRules.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::PluralRules PluralRules::DEFAULT()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"DEFAULT",
			"Landroid/icu/text/PluralRules;"
		);
	}
	jstring PluralRules::KEYWORD_FEW()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_FEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_MANY()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_MANY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_ONE()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_OTHER()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_TWO()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_TWO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_ZERO()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ZERO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble PluralRules::NO_UNIQUE_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.text.PluralRules",
			"NO_UNIQUE_VALUE"
		);
	}
	
	// QJniObject forward
	PluralRules::PluralRules(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::PluralRules PluralRules::createRules(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"createRules",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::PluralRules PluralRules::forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::PluralRules PluralRules::parseDescription(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"parseDescription",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0
		);
	}
	jboolean PluralRules::equals(android::icu::text::PluralRules arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralRules;)Z",
			arg0.object()
		);
	}
	jboolean PluralRules::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass PluralRules::getAllKeywordValues(jstring arg0)
	{
		return callObjectMethod(
			"getAllKeywordValues",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0
		);
	}
	__JniBaseClass PluralRules::getKeywords()
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass PluralRules::getSamples(jstring arg0)
	{
		return callObjectMethod(
			"getSamples",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0
		);
	}
	jdouble PluralRules::getUniqueKeywordValue(jstring arg0)
	{
		return callMethod<jdouble>(
			"getUniqueKeywordValue",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jint PluralRules::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PluralRules::select(jdouble arg0)
	{
		return callObjectMethod(
			"select",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PluralRules::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

