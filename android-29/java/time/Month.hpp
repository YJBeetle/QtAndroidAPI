#pragma once

#ifndef JAVA_TIME_MONTH
#define JAVA_TIME_MONTH

#include "../lang/Enum.hpp"

namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time::format
{
	class TextStyle;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time
{
	class Month : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject JANUARY();
		static QAndroidJniObject FEBRUARY();
		static QAndroidJniObject MARCH();
		static QAndroidJniObject APRIL();
		static QAndroidJniObject MAY();
		static QAndroidJniObject JUNE();
		static QAndroidJniObject JULY();
		static QAndroidJniObject AUGUST();
		static QAndroidJniObject SEPTEMBER();
		static QAndroidJniObject OCTOBER();
		static QAndroidJniObject NOVEMBER();
		static QAndroidJniObject DECEMBER();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jint length(jboolean arg0);
		static QAndroidJniObject values();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		jint getValue();
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint maxLength();
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0);
		QAndroidJniObject minus(jlong arg0);
		QAndroidJniObject getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1);
		jint firstDayOfYear(jboolean arg0);
		jint minLength();
		QAndroidJniObject firstMonthOfQuarter();
	};
} // namespace __jni_impl::java::time

#include "temporal/ValueRange.hpp"
#include "format/TextStyle.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject Month::JANUARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"JANUARY",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::FEBRUARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"FEBRUARY",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::MARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"MARCH",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::APRIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"APRIL",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::MAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"MAY",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::JUNE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"JUNE",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::JULY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"JULY",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::AUGUST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"AUGUST",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::SEPTEMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"SEPTEMBER",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::OCTOBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"OCTOBER",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::NOVEMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"NOVEMBER",
			"Ljava/time/Month;");
	}
	QAndroidJniObject Month::DECEMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"DECEMBER",
			"Ljava/time/Month;");
	}
	
	// Constructors
	void Month::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.Month",
			"(V)V");
	}
	
	// Methods
	jint Month::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object());
	}
	jint Month::length(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"length",
			"(Z)I",
			arg0);
	}
	QAndroidJniObject Month::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"values",
			"()[Ljava/time/Month;");
	}
	jlong Month::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Month::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/Month;",
			arg0);
	}
	jint Month::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I");
	}
	QAndroidJniObject Month::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"of",
			"(I)Ljava/time/Month;",
			arg0);
	}
	QAndroidJniObject Month::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Month;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Month::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	jboolean Month::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Month::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object());
	}
	jint Month::maxLength()
	{
		return __thiz.callMethod<jint>(
			"maxLength",
			"()I");
	}
	QAndroidJniObject Month::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Month::plus(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(J)Ljava/time/Month;",
			arg0);
	}
	QAndroidJniObject Month::minus(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(J)Ljava/time/Month;",
			arg0);
	}
	QAndroidJniObject Month::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jint Month::firstDayOfYear(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"firstDayOfYear",
			"(Z)I",
			arg0);
	}
	jint Month::minLength()
	{
		return __thiz.callMethod<jint>(
			"minLength",
			"()I");
	}
	QAndroidJniObject Month::firstMonthOfQuarter()
	{
		return __thiz.callObjectMethod(
			"firstMonthOfQuarter",
			"()Ljava/time/Month;");
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class Month : public __jni_impl::java::time::Month
	{
	public:
		Month(QAndroidJniObject obj) { __thiz = obj; }
		Month()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_MONTH

