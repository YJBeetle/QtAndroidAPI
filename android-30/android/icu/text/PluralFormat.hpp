#pragma once

#include "./UFormat.hpp"

namespace android::icu::text
{
	class NumberFormat;
}
namespace android::icu::text
{
	class PluralRules;
}
namespace android::icu::text
{
	class PluralRules_PluralType;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class Number;
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
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class PluralFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PluralFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		PluralFormat(QAndroidJniObject obj);
		
		// Constructors
		PluralFormat();
		PluralFormat(android::icu::text::PluralRules arg0);
		PluralFormat(android::icu::util::ULocale arg0);
		PluralFormat(JString arg0);
		PluralFormat(java::util::Locale arg0);
		PluralFormat(android::icu::text::PluralRules arg0, JString arg1);
		PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules arg1);
		PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1);
		PluralFormat(android::icu::util::ULocale arg0, JString arg1);
		PluralFormat(java::util::Locale arg0, android::icu::text::PluralRules arg1);
		PluralFormat(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1);
		PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules arg1, JString arg2);
		PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1, JString arg2);
		
		// Methods
		void applyPattern(JString arg0);
		jboolean equals(android::icu::text::PluralFormat arg0);
		jboolean equals(JObject arg0);
		JString format(jdouble arg0);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jint hashCode();
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1);
		JObject parseObject(JString arg0, java::text::ParsePosition arg1);
		void setNumberFormat(android::icu::text::NumberFormat arg0);
		JString toPattern();
		JString toString();
	};
} // namespace android::icu::text

