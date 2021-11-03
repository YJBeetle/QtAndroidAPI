#pragma once

#include "./Format.hpp"

class JIntArray;
class JObjectArray;
class JArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::lang
{
	class StringBuilder;
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

namespace java::text
{
	class MessageFormat : public java::text::Format
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat(QJniObject obj);
		
		// Constructors
		MessageFormat(JString arg0);
		MessageFormat(JString arg0, java::util::Locale arg1);
		
		// Methods
		static JString format(JString arg0, JObjectArray arg1);
		void applyPattern(JString arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(JObjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		JArray getFormats();
		JArray getFormatsByArgumentIndex();
		java::util::Locale getLocale();
		jint hashCode();
		JObjectArray parse(JString arg0);
		JObjectArray parse(JString arg0, java::text::ParsePosition arg1);
		JObject parseObject(JString arg0, java::text::ParsePosition arg1);
		void setFormat(jint arg0, java::text::Format arg1);
		void setFormatByArgumentIndex(jint arg0, java::text::Format arg1);
		void setFormats(JArray arg0);
		void setFormatsByArgumentIndex(JArray arg0);
		void setLocale(java::util::Locale arg0);
		JString toPattern();
	};
} // namespace java::text

