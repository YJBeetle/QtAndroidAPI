#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
		MessageFormat(jstring arg0);
		MessageFormat(jstring arg0, java::util::Locale arg1);
		
		// Methods
		static jstring format(jstring arg0, jobjectArray arg1);
		void applyPattern(jstring arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		java::lang::StringBuffer format(jobjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		__JniBaseClass formatToCharacterIterator(jobject arg0);
		jarray getFormats();
		jarray getFormatsByArgumentIndex();
		java::util::Locale getLocale();
		jint hashCode();
		jobjectArray parse(jstring arg0);
		jobjectArray parse(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		void setFormat(jint arg0, java::text::Format arg1);
		void setFormatByArgumentIndex(jint arg0, java::text::Format arg1);
		void setFormats(jarray arg0);
		void setFormatsByArgumentIndex(jarray arg0);
		void setLocale(java::util::Locale arg0);
		jstring toPattern();
	};
} // namespace java::text

