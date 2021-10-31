#include "./PluralRules_PluralType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./PluralRules.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject PluralRules::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"DEFAULT",
			"Landroid/icu/text/PluralRules;"
		);
	}
	jstring PluralRules::KEYWORD_FEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_FEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_MANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_MANY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_ONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_TWO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_TWO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralRules::KEYWORD_ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ZERO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble PluralRules::NO_UNIQUE_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"android.icu.text.PluralRules",
			"NO_UNIQUE_VALUE"
		);
	}
	
	// QAndroidJniObject forward
	PluralRules::PluralRules(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PluralRules::createRules(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"createRules",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0
		);
	}
	QAndroidJniObject PluralRules::forLocale(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	QAndroidJniObject PluralRules::forLocale(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	QAndroidJniObject PluralRules::forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject PluralRules::forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject PluralRules::parseDescription(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject PluralRules::getAllKeywordValues(jstring arg0)
	{
		return callObjectMethod(
			"getAllKeywordValues",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0
		);
	}
	QAndroidJniObject PluralRules::getKeywords()
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject PluralRules::getSamples(jstring arg0)
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
