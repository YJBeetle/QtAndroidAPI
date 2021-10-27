#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AbstractChronology.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time::chrono
{
	class HijrahDate;
}
namespace __jni_impl::java::time::chrono
{
	class HijrahEra;
}
namespace __jni_impl::java::time::format
{
	class ResolverStyle;
}
namespace __jni_impl::java::time::temporal
{
	class ChronoField;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::util
{
	class Properties;
}

namespace __jni_impl::java::time::chrono
{
	class HijrahChronology : public __jni_impl::java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static QAndroidJniObject INSTANCE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject date(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject date(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject dateEpochDay(jlong arg0);
		QAndroidJniObject dateNow();
		QAndroidJniObject dateNow(__jni_impl::java::time::Clock arg0);
		QAndroidJniObject dateNow(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject dateYearDay(jint arg0, jint arg1);
		QAndroidJniObject dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		QAndroidJniObject eraOf(jint arg0);
		QAndroidJniObject eras();
		jstring getCalendarType();
		jstring getId();
		jboolean isLeapYear(jlong arg0);
		QAndroidJniObject localDateTime(__jni_impl::__JniBaseClass arg0);
		jint prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject range(__jni_impl::java::time::temporal::ChronoField arg0);
		QAndroidJniObject resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1);
		QAndroidJniObject zonedDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
	};
} // namespace __jni_impl::java::time::chrono

#include "../../io/InputStream.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../lang/Void.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../ZoneId.hpp"
#include "./HijrahDate.hpp"
#include "./HijrahEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Properties.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject HijrahChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.HijrahChronology",
			"INSTANCE",
			"Ljava/time/chrono/HijrahChronology;"
		);
	}
	
	// Constructors
	void HijrahChronology::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.HijrahChronology",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject HijrahChronology::date(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject HijrahChronology::date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject HijrahChronology::dateEpochDay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/HijrahDate;",
			arg0
		);
	}
	QAndroidJniObject HijrahChronology::dateNow()
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/HijrahDate;"
		);
	}
	QAndroidJniObject HijrahChronology::dateNow(__jni_impl::java::time::Clock arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahChronology::dateNow(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahChronology::dateYearDay(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject HijrahChronology::dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject HijrahChronology::eraOf(jint arg0)
	{
		return __thiz.callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	QAndroidJniObject HijrahChronology::eras()
	{
		return __thiz.callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	jstring HijrahChronology::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HijrahChronology::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HijrahChronology::isLeapYear(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject HijrahChronology::localDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	jint HijrahChronology::prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject HijrahChronology::range(__jni_impl::java::time::temporal::ChronoField arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahChronology::resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/HijrahDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahChronology::zonedDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HijrahChronology::zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class HijrahChronology : public __jni_impl::java::time::chrono::HijrahChronology
	{
	public:
		HijrahChronology(QAndroidJniObject obj) { __thiz = obj; }
		HijrahChronology()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

