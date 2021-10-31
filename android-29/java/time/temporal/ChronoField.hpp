#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class Locale;
}

namespace java::time::temporal
{
	class ChronoField : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALIGNED_DAY_OF_WEEK_IN_MONTH();
		static QAndroidJniObject ALIGNED_DAY_OF_WEEK_IN_YEAR();
		static QAndroidJniObject ALIGNED_WEEK_OF_MONTH();
		static QAndroidJniObject ALIGNED_WEEK_OF_YEAR();
		static QAndroidJniObject AMPM_OF_DAY();
		static QAndroidJniObject CLOCK_HOUR_OF_AMPM();
		static QAndroidJniObject CLOCK_HOUR_OF_DAY();
		static QAndroidJniObject DAY_OF_MONTH();
		static QAndroidJniObject DAY_OF_WEEK();
		static QAndroidJniObject DAY_OF_YEAR();
		static QAndroidJniObject EPOCH_DAY();
		static QAndroidJniObject ERA();
		static QAndroidJniObject HOUR_OF_AMPM();
		static QAndroidJniObject HOUR_OF_DAY();
		static QAndroidJniObject INSTANT_SECONDS();
		static QAndroidJniObject MICRO_OF_DAY();
		static QAndroidJniObject MICRO_OF_SECOND();
		static QAndroidJniObject MILLI_OF_DAY();
		static QAndroidJniObject MILLI_OF_SECOND();
		static QAndroidJniObject MINUTE_OF_DAY();
		static QAndroidJniObject MINUTE_OF_HOUR();
		static QAndroidJniObject MONTH_OF_YEAR();
		static QAndroidJniObject NANO_OF_DAY();
		static QAndroidJniObject NANO_OF_SECOND();
		static QAndroidJniObject OFFSET_SECONDS();
		static QAndroidJniObject PROLEPTIC_MONTH();
		static QAndroidJniObject SECOND_OF_DAY();
		static QAndroidJniObject SECOND_OF_MINUTE();
		static QAndroidJniObject YEAR();
		static QAndroidJniObject YEAR_OF_ERA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChronoField(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ChronoField(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		QAndroidJniObject adjustInto(__JniBaseClass arg0, jlong arg1);
		jint checkValidIntValue(jlong arg0);
		jlong checkValidValue(jlong arg0);
		QAndroidJniObject getBaseUnit();
		jstring getDisplayName(java::util::Locale arg0);
		jlong getFrom(__JniBaseClass arg0);
		QAndroidJniObject getRangeUnit();
		jboolean isDateBased();
		jboolean isSupportedBy(__JniBaseClass arg0);
		jboolean isTimeBased();
		QAndroidJniObject range();
		QAndroidJniObject rangeRefinedBy(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::time::temporal

