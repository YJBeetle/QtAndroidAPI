#pragma once

#include "../../../__JniBaseClass.hpp"
#include "AbstractChronology.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
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
	class LocalDate;
}
namespace __jni_impl::java::time
{
	class LocalDateTime;
}
namespace __jni_impl::java::time
{
	class Period;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::java::time::chrono
{
	class IsoEra;
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

namespace __jni_impl::java::time::chrono
{
	class IsoChronology : public __jni_impl::java::time::chrono::AbstractChronology
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
		jlong epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::java::time::ZoneOffset arg6);
		QAndroidJniObject eraOf(jint arg0);
		QAndroidJniObject eras();
		jstring getCalendarType();
		jstring getId();
		jboolean isLeapYear(jlong arg0);
		QAndroidJniObject localDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject period(jint arg0, jint arg1, jint arg2);
		jint prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject range(__jni_impl::java::time::temporal::ChronoField arg0);
		QAndroidJniObject resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1);
		QAndroidJniObject zonedDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
	};
} // namespace __jni_impl::java::time::chrono

#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../LocalDate.hpp"
#include "../LocalDateTime.hpp"
#include "../Period.hpp"
#include "../ZoneId.hpp"
#include "../ZoneOffset.hpp"
#include "../ZonedDateTime.hpp"
#include "IsoEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject IsoChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.IsoChronology",
			"INSTANCE",
			"Ljava/time/chrono/IsoChronology;"
		);
	}
	
	// Constructors
	void IsoChronology::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.IsoChronology",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IsoChronology::date(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"date",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject IsoChronology::date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/LocalDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject IsoChronology::dateEpochDay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject IsoChronology::dateNow()
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject IsoChronology::dateNow(__jni_impl::java::time::Clock arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::dateNow(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::dateYearDay(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IsoChronology::dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/LocalDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong IsoChronology::epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::java::time::ZoneOffset arg6)
	{
		return __thiz.callMethod<jlong>(
			"epochSecond",
			"(IIIIIILjava/time/ZoneOffset;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::eraOf(jint arg0)
	{
		return __thiz.callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	QAndroidJniObject IsoChronology::eras()
	{
		return __thiz.callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	jstring IsoChronology::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IsoChronology::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean IsoChronology::isLeapYear(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject IsoChronology::localDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::period(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"period",
			"(III)Ljava/time/Period;",
			arg0,
			arg1,
			arg2
		);
	}
	jint IsoChronology::prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject IsoChronology::range(__jni_impl::java::time::temporal::ChronoField arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/LocalDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::zonedDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IsoChronology::zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class IsoChronology : public __jni_impl::java::time::chrono::IsoChronology
	{
	public:
		IsoChronology(QAndroidJniObject obj) { __thiz = obj; }
		IsoChronology()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

