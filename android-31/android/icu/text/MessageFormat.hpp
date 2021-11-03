#pragma once

#include "./UFormat.hpp"

class JObjectArray;
class JArray;
namespace android::icu::text
{
	class MessagePattern_ApostropheMode;
}
namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class Format;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class MessageFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat(QJniObject obj);
		
		// Constructors
		MessageFormat(JString arg0);
		MessageFormat(JString arg0, android::icu::util::ULocale arg1);
		MessageFormat(JString arg0, java::util::Locale arg1);
		
		// Methods
		static JString autoQuoteApostrophe(JString arg0);
		static JString format(JString arg0, JObjectArray arg1);
		static JString format(JString arg0, JObject arg1);
		void applyPattern(JString arg0);
		void applyPattern(JString arg0, android::icu::text::MessagePattern_ApostropheMode arg1);
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(JObjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		android::icu::text::MessagePattern_ApostropheMode getApostropheMode();
		JObject getArgumentNames();
		java::text::Format getFormatByArgumentName(JString arg0);
		JArray getFormats();
		JArray getFormatsByArgumentIndex();
		java::util::Locale getLocale();
		android::icu::util::ULocale getULocale();
		jint hashCode();
		JObjectArray parse(JString arg0);
		JObjectArray parse(JString arg0, java::text::ParsePosition arg1);
		JObject parseObject(JString arg0, java::text::ParsePosition arg1);
		JObject parseToMap(JString arg0);
		JObject parseToMap(JString arg0, java::text::ParsePosition arg1);
		void setFormat(jint arg0, java::text::Format arg1);
		void setFormatByArgumentIndex(jint arg0, java::text::Format arg1);
		void setFormatByArgumentName(JString arg0, java::text::Format arg1);
		void setFormats(JArray arg0);
		void setFormatsByArgumentIndex(JArray arg0);
		void setFormatsByArgumentName(JObject arg0);
		void setLocale(android::icu::util::ULocale arg0);
		void setLocale(java::util::Locale arg0);
		JString toPattern();
		jboolean usesNamedArguments();
	};
} // namespace android::icu::text

