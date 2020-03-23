#pragma once

#ifndef JAVA_TIME_TEMPORAL_WEEKFIELDS
#define JAVA_TIME_TEMPORAL_WEEKFIELDS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class DayOfWeek;
}
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
	class WeekFields : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ISO();
		static QAndroidJniObject SUNDAY_START();
		static QAndroidJniObject WEEK_BASED_YEARS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject of(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject of(__jni_impl::java::time::DayOfWeek arg0, jint arg1);
		QAndroidJniObject dayOfWeek();
		QAndroidJniObject getFirstDayOfWeek();
		jint getMinimalDaysInFirstWeek();
		QAndroidJniObject weekOfYear();
		QAndroidJniObject weekOfMonth();
		QAndroidJniObject weekBasedYear();
		QAndroidJniObject weekOfWeekBasedYear();
	};
} // namespace __jni_impl::java::time::temporal

#include "../DayOfWeek.hpp"
#include "../../util/Locale.hpp"
#include "../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::time::temporal
{
	// Fields
	QAndroidJniObject WeekFields::ISO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.WeekFields",
			"ISO",
			"Ljava/time/temporal/WeekFields;");
	}
	QAndroidJniObject WeekFields::SUNDAY_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.WeekFields",
			"SUNDAY_START",
			"Ljava/time/temporal/WeekFields;");
	}
	QAndroidJniObject WeekFields::WEEK_BASED_YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.WeekFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;");
	}
	
	// Constructors
	void WeekFields::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.WeekFields",
			"(V)V");
	}
	
	// Methods
	jboolean WeekFields::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject WeekFields::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint WeekFields::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject WeekFields::of(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/util/Locale;)Ljava/time/temporal/WeekFields;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject WeekFields::of(__jni_impl::java::time::DayOfWeek arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/time/DayOfWeek;I)Ljava/time/temporal/WeekFields;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject WeekFields::dayOfWeek()
	{
		return __thiz.callObjectMethod(
			"dayOfWeek",
			"()Ljava/time/temporal/TemporalField;");
	}
	QAndroidJniObject WeekFields::getFirstDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getFirstDayOfWeek",
			"()Ljava/time/DayOfWeek;");
	}
	jint WeekFields::getMinimalDaysInFirstWeek()
	{
		return __thiz.callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I");
	}
	QAndroidJniObject WeekFields::weekOfYear()
	{
		return __thiz.callObjectMethod(
			"weekOfYear",
			"()Ljava/time/temporal/TemporalField;");
	}
	QAndroidJniObject WeekFields::weekOfMonth()
	{
		return __thiz.callObjectMethod(
			"weekOfMonth",
			"()Ljava/time/temporal/TemporalField;");
	}
	QAndroidJniObject WeekFields::weekBasedYear()
	{
		return __thiz.callObjectMethod(
			"weekBasedYear",
			"()Ljava/time/temporal/TemporalField;");
	}
	QAndroidJniObject WeekFields::weekOfWeekBasedYear()
	{
		return __thiz.callObjectMethod(
			"weekOfWeekBasedYear",
			"()Ljava/time/temporal/TemporalField;");
	}
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class WeekFields : public __jni_impl::java::time::temporal::WeekFields
	{
	public:
		WeekFields(QAndroidJniObject obj) { __thiz = obj; }
		WeekFields()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_WEEKFIELDS

