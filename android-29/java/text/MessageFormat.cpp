#include "../../JIntArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "../lang/StringBuilder.hpp"
#include "./FieldPosition.hpp"
#include "./Format.hpp"
#include "./ParsePosition.hpp"
#include "../util/Locale.hpp"
#include "./MessageFormat.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	MessageFormat::MessageFormat(JString arg0)
		: java::text::Format(
			"java.text.MessageFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	MessageFormat::MessageFormat(JString arg0, java::util::Locale arg1)
		: java::text::Format(
			"java.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JString MessageFormat::format(JString arg0, JObjectArray arg1)
	{
		return callStaticObjectMethod(
			"java.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
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
} // namespace java::text

