#pragma once

#include "./UFormat.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
		
		// Constructors
		MessageFormat(JString arg0);
		MessageFormat(JString arg0, android::icu::util::ULocale arg1);
		MessageFormat(JString arg0, java::util::Locale arg1);
		
		// Methods
		static JString autoQuoteApostrophe(JString arg0);
		static JString format(JString arg0, JObjectArray arg1);
		static JString format(JString arg0, JObject arg1);
		void applyPattern(JString arg0) const;
		void applyPattern(JString arg0, android::icu::text::MessagePattern_ApostropheMode arg1) const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		java::lang::StringBuffer format(JObjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		JObject formatToCharacterIterator(JObject arg0) const;
		android::icu::text::MessagePattern_ApostropheMode getApostropheMode() const;
		JObject getArgumentNames() const;
		java::text::Format getFormatByArgumentName(JString arg0) const;
		JArray getFormats() const;
		JArray getFormatsByArgumentIndex() const;
		java::util::Locale getLocale() const;
		android::icu::util::ULocale getULocale() const;
		jint hashCode() const;
		JObjectArray parse(JString arg0) const;
		JObjectArray parse(JString arg0, java::text::ParsePosition arg1) const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		JObject parseToMap(JString arg0) const;
		JObject parseToMap(JString arg0, java::text::ParsePosition arg1) const;
		void setFormat(jint arg0, java::text::Format arg1) const;
		void setFormatByArgumentIndex(jint arg0, java::text::Format arg1) const;
		void setFormatByArgumentName(JString arg0, java::text::Format arg1) const;
		void setFormats(JArray arg0) const;
		void setFormatsByArgumentIndex(JArray arg0) const;
		void setFormatsByArgumentName(JObject arg0) const;
		void setLocale(android::icu::util::ULocale arg0) const;
		void setLocale(java::util::Locale arg0) const;
		JString toPattern() const;
		jboolean usesNamedArguments() const;
	};
} // namespace android::icu::text

