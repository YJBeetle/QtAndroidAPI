#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./Format_Field.hpp"


namespace java::text
{
	class DateFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject AM_PM();
		static QAndroidJniObject DAY_OF_MONTH();
		static QAndroidJniObject DAY_OF_WEEK();
		static QAndroidJniObject DAY_OF_WEEK_IN_MONTH();
		static QAndroidJniObject DAY_OF_YEAR();
		static QAndroidJniObject ERA();
		static QAndroidJniObject HOUR0();
		static QAndroidJniObject HOUR1();
		static QAndroidJniObject HOUR_OF_DAY0();
		static QAndroidJniObject HOUR_OF_DAY1();
		static QAndroidJniObject MILLISECOND();
		static QAndroidJniObject MINUTE();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject SECOND();
		static QAndroidJniObject TIME_ZONE();
		static QAndroidJniObject WEEK_OF_MONTH();
		static QAndroidJniObject WEEK_OF_YEAR();
		static QAndroidJniObject YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat_Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject ofCalendarField(jint arg0);
		jint getCalendarField();
	};
} // namespace java::text

