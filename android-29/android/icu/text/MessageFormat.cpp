#include "./MessagePattern_ApostropheMode.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/Format.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./MessageFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	MessageFormat::MessageFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	MessageFormat::MessageFormat(jstring arg0)
		: android::icu::text::UFormat(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	MessageFormat::MessageFormat(jstring arg0, android::icu::util::ULocale arg1)
		: android::icu::text::UFormat(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.object()
		) {}
	MessageFormat::MessageFormat(jstring arg0, java::util::Locale arg1)
		: android::icu::text::UFormat(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jstring MessageFormat::autoQuoteApostrophe(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"autoQuoteApostrophe",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MessageFormat::format(jstring arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring MessageFormat::format(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	void MessageFormat::applyPattern(jstring arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MessageFormat::applyPattern(jstring arg0, android::icu::text::MessagePattern_ApostropheMode arg1)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0,
			arg1.object()
		);
	}
	jobject MessageFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean MessageFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MessageFormat::format(jobjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject MessageFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject MessageFormat::format(__JniBaseClass arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Map;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject MessageFormat::formatToCharacterIterator(jobject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject MessageFormat::getApostropheMode()
	{
		return callObjectMethod(
			"getApostropheMode",
			"()Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	QAndroidJniObject MessageFormat::getArgumentNames()
	{
		return callObjectMethod(
			"getArgumentNames",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject MessageFormat::getFormatByArgumentName(jstring arg0)
	{
		return callObjectMethod(
			"getFormatByArgumentName",
			"(Ljava/lang/String;)Ljava/text/Format;",
			arg0
		);
	}
	jarray MessageFormat::getFormats()
	{
		return callObjectMethod(
			"getFormats",
			"()[Ljava/text/Format;"
		).object<jarray>();
	}
	jarray MessageFormat::getFormatsByArgumentIndex()
	{
		return callObjectMethod(
			"getFormatsByArgumentIndex",
			"()[Ljava/text/Format;"
		).object<jarray>();
	}
	QAndroidJniObject MessageFormat::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject MessageFormat::getULocale()
	{
		return callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jint MessageFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobjectArray MessageFormat::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jobjectArray MessageFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobjectArray>();
	}
	jobject MessageFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	QAndroidJniObject MessageFormat::parseToMap(jstring arg0)
	{
		return callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;)Ljava/util/Map;",
			arg0
		);
	}
	QAndroidJniObject MessageFormat::parseToMap(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Map;",
			arg0,
			arg1.object()
		);
	}
	void MessageFormat::setFormat(jint arg0, java::text::Format arg1)
	{
		callMethod<void>(
			"setFormat",
			"(ILjava/text/Format;)V",
			arg0,
			arg1.object()
		);
	}
	void MessageFormat::setFormatByArgumentIndex(jint arg0, java::text::Format arg1)
	{
		callMethod<void>(
			"setFormatByArgumentIndex",
			"(ILjava/text/Format;)V",
			arg0,
			arg1.object()
		);
	}
	void MessageFormat::setFormatByArgumentName(jstring arg0, java::text::Format arg1)
	{
		callMethod<void>(
			"setFormatByArgumentName",
			"(Ljava/lang/String;Ljava/text/Format;)V",
			arg0,
			arg1.object()
		);
	}
	void MessageFormat::setFormats(jarray arg0)
	{
		callMethod<void>(
			"setFormats",
			"([Ljava/text/Format;)V",
			arg0
		);
	}
	void MessageFormat::setFormatsByArgumentIndex(jarray arg0)
	{
		callMethod<void>(
			"setFormatsByArgumentIndex",
			"([Ljava/text/Format;)V",
			arg0
		);
	}
	void MessageFormat::setFormatsByArgumentName(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFormatsByArgumentName",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void MessageFormat::setLocale(android::icu::util::ULocale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		);
	}
	void MessageFormat::setLocale(java::util::Locale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	jstring MessageFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean MessageFormat::usesNamedArguments()
	{
		return callMethod<jboolean>(
			"usesNamedArguments",
			"()Z"
		);
	}
} // namespace android::icu::text

