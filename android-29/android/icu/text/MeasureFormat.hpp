#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::text
{
	class MeasureFormat_FormatWidth;
}
namespace android::icu::text
{
	class NumberFormat;
}
namespace android::icu::util
{
	class Measure;
}
namespace android::icu::util
{
	class MeasureUnit;
}
namespace android::icu::util
{
	class ULocale;
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
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class MeasureFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MeasureFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		MeasureFormat(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getCurrencyFormat();
		static QAndroidJniObject getCurrencyFormat(android::icu::util::ULocale arg0);
		static QAndroidJniObject getCurrencyFormat(java::util::Locale arg0);
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0, android::icu::text::MeasureFormat_FormatWidth arg1);
		static QAndroidJniObject getInstance(java::util::Locale arg0, android::icu::text::MeasureFormat_FormatWidth arg1);
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0, android::icu::text::MeasureFormat_FormatWidth arg1, android::icu::text::NumberFormat arg2);
		static QAndroidJniObject getInstance(java::util::Locale arg0, android::icu::text::MeasureFormat_FormatWidth arg1, android::icu::text::NumberFormat arg2);
		jboolean equals(jobject arg0);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject formatMeasurePerUnit(android::icu::util::Measure arg0, android::icu::util::MeasureUnit arg1, java::lang::StringBuilder arg2, java::text::FieldPosition arg3);
		jstring formatMeasures(jarray arg0);
		QAndroidJniObject formatMeasures(java::lang::StringBuilder arg0, java::text::FieldPosition arg1, jarray arg2);
		QAndroidJniObject getLocale();
		QAndroidJniObject getNumberFormat();
		jstring getUnitDisplayName(android::icu::util::MeasureUnit arg0);
		QAndroidJniObject getWidth();
		jint hashCode();
		QAndroidJniObject parseObject(jstring arg0, java::text::ParsePosition arg1);
	};
} // namespace android::icu::text

