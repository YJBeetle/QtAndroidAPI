#include "./NumberFormat.hpp"
#include "./PluralRules.hpp"
#include "./PluralRules_PluralType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./PluralFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	PluralFormat::PluralFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	PluralFormat::PluralFormat()
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"()V"
		) {}
	PluralFormat::PluralFormat(android::icu::text::PluralRules arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;)V",
			arg0.object()
		) {}
	PluralFormat::PluralFormat(android::icu::util::ULocale arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	PluralFormat::PluralFormat(jstring arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	PluralFormat::PluralFormat(java::util::Locale arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	PluralFormat::PluralFormat(android::icu::text::PluralRules arg0, jstring arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;)V",
			arg0.object(),
			arg1.object()
		) {}
	PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.object(),
			arg1.object()
		) {}
	PluralFormat::PluralFormat(android::icu::util::ULocale arg0, jstring arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	PluralFormat::PluralFormat(java::util::Locale arg0, android::icu::text::PluralRules arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules;)V",
			arg0.object(),
			arg1.object()
		) {}
	PluralFormat::PluralFormat(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.object(),
			arg1.object()
		) {}
	PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules arg1, jstring arg2)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1, jstring arg2)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void PluralFormat::applyPattern(jstring arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean PluralFormat::equals(android::icu::text::PluralFormat arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralFormat;)Z",
			arg0.object()
		);
	}
	jboolean PluralFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PluralFormat::format(jdouble arg0)
	{
		return callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject PluralFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jint PluralFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject PluralFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.object()
		);
	}
	jobject PluralFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void PluralFormat::setNumberFormat(android::icu::text::NumberFormat arg0)
	{
		callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.object()
		);
	}
	jstring PluralFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralFormat::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

