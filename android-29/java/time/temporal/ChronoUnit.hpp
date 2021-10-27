#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace java::time
{
	class Duration;
}

namespace java::time::temporal
{
	class ChronoUnit : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTURIES();
		static QAndroidJniObject DAYS();
		static QAndroidJniObject DECADES();
		static QAndroidJniObject ERAS();
		static QAndroidJniObject FOREVER();
		static QAndroidJniObject HALF_DAYS();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject MICROS();
		static QAndroidJniObject MILLENNIA();
		static QAndroidJniObject MILLIS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject NANOS();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject WEEKS();
		static QAndroidJniObject YEARS();
		
		ChronoUnit(QAndroidJniObject obj);
		// Constructors
		ChronoUnit() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		QAndroidJniObject addTo(__JniBaseClass arg0, jlong arg1);
		jlong between(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject getDuration();
		jboolean isDateBased();
		jboolean isDurationEstimated();
		jboolean isSupportedBy(__JniBaseClass arg0);
		jboolean isTimeBased();
		jstring toString();
	};
} // namespace java::time::temporal

