#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace java::text
{
	class DateFormat;
}
namespace java::util
{
	class Calendar;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::text::format
{
	class DateFormat : public __JniBaseClass
	{
	public:
		// Fields
		
		DateFormat(QAndroidJniObject obj);
		// Constructors
		DateFormat();
		
		// Methods
		static jstring format(jstring arg0, java::util::Calendar arg1);
		static jstring format(jstring arg0, java::util::Date arg1);
		static jstring format(jstring arg0, jlong arg1);
		static jstring getBestDateTimePattern(java::util::Locale arg0, jstring arg1);
		static QAndroidJniObject getDateFormat(android::content::Context arg0);
		static jcharArray getDateFormatOrder(android::content::Context arg0);
		static QAndroidJniObject getLongDateFormat(android::content::Context arg0);
		static QAndroidJniObject getMediumDateFormat(android::content::Context arg0);
		static QAndroidJniObject getTimeFormat(android::content::Context arg0);
		static jboolean is24HourFormat(android::content::Context arg0);
	};
} // namespace android::text::format

