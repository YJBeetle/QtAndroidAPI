#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "./MessagePattern_ApostropheMode.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	MessageFormat::MessageFormat(JString arg0)
		: android::icu::text::UFormat(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	MessageFormat::MessageFormat(JString arg0, android::icu::util::ULocale arg1)
		: android::icu::text::UFormat(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	MessageFormat::MessageFormat(JString arg0, java::util::Locale arg1)
		: android::icu::text::UFormat(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JString MessageFormat::autoQuoteApostrophe(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"autoQuoteApostrophe",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString MessageFormat::format(JString arg0, JObjectArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	JString MessageFormat::format(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MessageFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MessageFormat::applyPattern(JString arg0, android::icu::text::MessagePattern_ApostropheMode arg1) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject MessageFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean MessageFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer MessageFormat::format(JObjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobjectArray>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer MessageFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject MessageFormat::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	android::icu::text::MessagePattern_ApostropheMode MessageFormat::getApostropheMode() const
	{
		return callObjectMethod(
			"getApostropheMode",
			"()Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	JObject MessageFormat::getArgumentNames() const
	{
		return callObjectMethod(
			"getArgumentNames",
			"()Ljava/util/Set;"
		);
	}
	java::text::Format MessageFormat::getFormatByArgumentName(JString arg0) const
	{
		return callObjectMethod(
			"getFormatByArgumentName",
			"(Ljava/lang/String;)Ljava/text/Format;",
			arg0.object<jstring>()
		);
	}
	JArray MessageFormat::getFormats() const
	{
		return callObjectMethod(
			"getFormats",
			"()[Ljava/text/Format;"
		);
	}
	JArray MessageFormat::getFormatsByArgumentIndex() const
	{
		return callObjectMethod(
			"getFormatsByArgumentIndex",
			"()[Ljava/text/Format;"
		);
	}
	java::util::Locale MessageFormat::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::icu::util::ULocale MessageFormat::getULocale() const
	{
		return callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jint MessageFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObjectArray MessageFormat::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)[Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObjectArray MessageFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject MessageFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject MessageFormat::parseToMap(JString arg0) const
	{
		return callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;)Ljava/util/Map;",
			arg0.object<jstring>()
		);
	}
	JObject MessageFormat::parseToMap(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Map;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MessageFormat::setFormat(jint arg0, java::text::Format arg1) const
	{
		callMethod<void>(
			"setFormat",
			"(ILjava/text/Format;)V",
			arg0,
			arg1.object()
		);
	}
	void MessageFormat::setFormatByArgumentIndex(jint arg0, java::text::Format arg1) const
	{
		callMethod<void>(
			"setFormatByArgumentIndex",
			"(ILjava/text/Format;)V",
			arg0,
			arg1.object()
		);
	}
	void MessageFormat::setFormatByArgumentName(JString arg0, java::text::Format arg1) const
	{
		callMethod<void>(
			"setFormatByArgumentName",
			"(Ljava/lang/String;Ljava/text/Format;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MessageFormat::setFormats(JArray arg0) const
	{
		callMethod<void>(
			"setFormats",
			"([Ljava/text/Format;)V",
			arg0.object<jarray>()
		);
	}
	void MessageFormat::setFormatsByArgumentIndex(JArray arg0) const
	{
		callMethod<void>(
			"setFormatsByArgumentIndex",
			"([Ljava/text/Format;)V",
			arg0.object<jarray>()
		);
	}
	void MessageFormat::setFormatsByArgumentName(JObject arg0) const
	{
		callMethod<void>(
			"setFormatsByArgumentName",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void MessageFormat::setLocale(android::icu::util::ULocale arg0) const
	{
		callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		);
	}
	void MessageFormat::setLocale(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	JString MessageFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
	jboolean MessageFormat::usesNamedArguments() const
	{
		return callMethod<jboolean>(
			"usesNamedArguments",
			"()Z"
		);
	}
} // namespace android::icu::text

