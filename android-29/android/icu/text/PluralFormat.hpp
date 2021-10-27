#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
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
		
		PluralFormat(QAndroidJniObject obj);
		// Constructors
		PluralFormat();
		PluralFormat(android::icu::text::PluralRules &arg0);
		PluralFormat(android::icu::util::ULocale &arg0);
		PluralFormat(jstring &arg0);
		PluralFormat(const QString &arg0);
		PluralFormat(java::util::Locale &arg0);
		PluralFormat(android::icu::text::PluralRules &arg0, jstring &arg1);
		PluralFormat(android::icu::text::PluralRules &arg0, const QString &arg1);
		PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules &arg1);
		PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules_PluralType &arg1);
		PluralFormat(android::icu::util::ULocale &arg0, jstring &arg1);
		PluralFormat(android::icu::util::ULocale &arg0, const QString &arg1);
		PluralFormat(java::util::Locale &arg0, android::icu::text::PluralRules &arg1);
		PluralFormat(java::util::Locale &arg0, android::icu::text::PluralRules_PluralType &arg1);
		PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules &arg1, jstring &arg2);
		PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules &arg1, const QString &arg2);
		PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules_PluralType &arg1, jstring &arg2);
		PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules_PluralType &arg1, const QString &arg2);
		
		// Methods
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jboolean equals(android::icu::text::PluralFormat arg0);
		jboolean equals(jobject arg0);
		jstring format(jdouble arg0);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jint hashCode();
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, java::text::ParsePosition arg1);
		void setNumberFormat(android::icu::text::NumberFormat arg0);
		jstring toPattern();
		jstring toString();
	};
} // namespace android::icu::text

