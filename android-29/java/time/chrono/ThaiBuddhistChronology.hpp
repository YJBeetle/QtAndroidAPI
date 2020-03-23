#pragma once

#ifndef JAVA_TIME_CHRONO_THAIBUDDHISTCHRONOLOGY
#define JAVA_TIME_CHRONO_THAIBUDDHISTCHRONOLOGY

#include "AbstractChronology.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time::temporal
{
	class ChronoField;
}
namespace __jni_impl::java::time::chrono
{
	class ThaiBuddhistDate;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time::format
{
	class ResolverStyle;
}
namespace __jni_impl::java::time::chrono
{
	class ThaiBuddhistEra;
}
namespace __jni_impl::java::time
{
	class Instant;
}

namespace __jni_impl::java::time::chrono
{
	class ThaiBuddhistChronology : public __jni_impl::java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static QAndroidJniObject INSTANCE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getId();
		QAndroidJniObject range(__jni_impl::java::time::temporal::ChronoField arg0);
		QAndroidJniObject getCalendarType();
		jboolean isLeapYear(jlong arg0);
		QAndroidJniObject date(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject date(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject dateEpochDay(jlong arg0);
		jint prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		QAndroidJniObject dateYearDay(jint arg0, jint arg1);
		QAndroidJniObject dateNow(__jni_impl::java::time::Clock arg0);
		QAndroidJniObject dateNow(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject dateNow();
		QAndroidJniObject resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1);
		QAndroidJniObject eraOf(jint arg0);
		QAndroidJniObject zonedDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		QAndroidJniObject localDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject eras();
	};
} // namespace __jni_impl::java::time::chrono

#include "../../util/HashMap.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../temporal/ValueRange.hpp"
#include "../temporal/ChronoField.hpp"
#include "ThaiBuddhistDate.hpp"
#include "../Clock.hpp"
#include "../ZoneId.hpp"
#include "../format/ResolverStyle.hpp"
#include "ThaiBuddhistEra.hpp"
#include "../Instant.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject ThaiBuddhistChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.ThaiBuddhistChronology",
			"INSTANCE",
			"Ljava/time/chrono/ThaiBuddhistChronology;");
	}
	
	// Constructors
	void ThaiBuddhistChronology::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.ThaiBuddhistChronology",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ThaiBuddhistChronology::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ThaiBuddhistChronology::range(__jni_impl::java::time::temporal::ChronoField arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;");
	}
	jboolean ThaiBuddhistChronology::isLeapYear(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0);
	}
	QAndroidJniObject ThaiBuddhistChronology::date(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject ThaiBuddhistChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateEpochDay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0);
	}
	jint ThaiBuddhistChronology::prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateYearDay(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateNow(__jni_impl::java::time::Clock arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::dateNow(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::dateNow()
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/ThaiBuddhistDate;");
	}
	QAndroidJniObject ThaiBuddhistChronology::resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::eraOf(jint arg0)
	{
		return __thiz.callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0);
	}
	QAndroidJniObject ThaiBuddhistChronology::zonedDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::localDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ThaiBuddhistChronology::eras()
	{
		return __thiz.callObjectMethod(
			"eras",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class ThaiBuddhistChronology : public __jni_impl::java::time::chrono::ThaiBuddhistChronology
	{
	public:
		ThaiBuddhistChronology(QAndroidJniObject obj) { __thiz = obj; }
		ThaiBuddhistChronology()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_THAIBUDDHISTCHRONOLOGY

