#pragma once

#ifndef JAVA_TIME_CHRONO_JAPANESECHRONOLOGY
#define JAVA_TIME_CHRONO_JAPANESECHRONOLOGY

#include "../../../__JniBaseClass.hpp"
#include "AbstractChronology.hpp"

namespace __jni_impl::java::util
{
	class Locale;
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
	class JapaneseDate;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time::format
{
	class ResolverStyle;
}
namespace __jni_impl::java::time::chrono
{
	class JapaneseEra;
}
namespace __jni_impl::java::time
{
	class Instant;
}

namespace __jni_impl::java::time::chrono
{
	class JapaneseChronology : public __jni_impl::java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static QAndroidJniObject INSTANCE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getId();
		QAndroidJniObject range(__jni_impl::java::time::temporal::ChronoField arg0);
		jstring getCalendarType();
		jboolean isLeapYear(jlong arg0);
		QAndroidJniObject date(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject date(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject dateEpochDay(jlong arg0);
		jint prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject dateYearDay(jint arg0, jint arg1);
		QAndroidJniObject dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		QAndroidJniObject dateNow(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject dateNow();
		QAndroidJniObject dateNow(__jni_impl::java::time::Clock arg0);
		QAndroidJniObject resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1);
		QAndroidJniObject eraOf(jint arg0);
		QAndroidJniObject zonedDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		QAndroidJniObject localDateTime(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject eras();
	};
} // namespace __jni_impl::java::time::chrono

#include "../../util/Locale.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../temporal/ValueRange.hpp"
#include "../temporal/ChronoField.hpp"
#include "JapaneseDate.hpp"
#include "../ZoneId.hpp"
#include "../Clock.hpp"
#include "../format/ResolverStyle.hpp"
#include "JapaneseEra.hpp"
#include "../Instant.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject JapaneseChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseChronology",
			"INSTANCE",
			"Ljava/time/chrono/JapaneseChronology;"
		);
	}
	
	// Constructors
	void JapaneseChronology::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.JapaneseChronology",
			"(V)V");
	}
	
	// Methods
	jstring JapaneseChronology::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JapaneseChronology::range(__jni_impl::java::time::temporal::ChronoField arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jstring JapaneseChronology::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean JapaneseChronology::isLeapYear(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject JapaneseChronology::date(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::date(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject JapaneseChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject JapaneseChronology::dateEpochDay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/JapaneseDate;",
			arg0
		);
	}
	jint JapaneseChronology::prolepticYear(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject JapaneseChronology::dateYearDay(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JapaneseChronology::dateYearDay(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject JapaneseChronology::dateNow(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::dateNow()
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/JapaneseDate;"
		);
	}
	QAndroidJniObject JapaneseChronology::dateNow(__jni_impl::java::time::Clock arg0)
	{
		return __thiz.callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::resolveDate(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::ResolverStyle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/JapaneseDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::eraOf(jint arg0)
	{
		return __thiz.callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	QAndroidJniObject JapaneseChronology::zonedDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::zonedDateTime(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return __thiz.callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::localDateTime(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JapaneseChronology::eras()
	{
		return __thiz.callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class JapaneseChronology : public __jni_impl::java::time::chrono::JapaneseChronology
	{
	public:
		JapaneseChronology(QAndroidJniObject obj) { __thiz = obj; }
		JapaneseChronology()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_JAPANESECHRONOLOGY

