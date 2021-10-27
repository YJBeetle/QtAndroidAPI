#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"

namespace __jni_impl::java::time::format
{
	class TextStyle;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time
{
	class DayOfWeek : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FRIDAY();
		static QAndroidJniObject MONDAY();
		static QAndroidJniObject SATURDAY();
		static QAndroidJniObject SUNDAY();
		static QAndroidJniObject THURSDAY();
		static QAndroidJniObject TUESDAY();
		static QAndroidJniObject WEDNESDAY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		jint get(__jni_impl::__JniBaseClass arg0);
		jstring getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jint getValue();
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0);
		QAndroidJniObject plus(jlong arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::time

#include "./format/TextStyle.hpp"
#include "./temporal/ValueRange.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject DayOfWeek::FRIDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"FRIDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	QAndroidJniObject DayOfWeek::MONDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"MONDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	QAndroidJniObject DayOfWeek::SATURDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"SATURDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	QAndroidJniObject DayOfWeek::SUNDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"SUNDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	QAndroidJniObject DayOfWeek::THURSDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"THURSDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	QAndroidJniObject DayOfWeek::TUESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"TUESDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	QAndroidJniObject DayOfWeek::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.DayOfWeek",
			"WEDNESDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	
	// Constructors
	void DayOfWeek::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.DayOfWeek",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DayOfWeek::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/DayOfWeek;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DayOfWeek::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"of",
			"(I)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	QAndroidJniObject DayOfWeek::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	QAndroidJniObject DayOfWeek::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/DayOfWeek;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray DayOfWeek::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"values",
			"()[Ljava/time/DayOfWeek;"
		).object<jarray>();
	}
	QAndroidJniObject DayOfWeek::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	jint DayOfWeek::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jstring DayOfWeek::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jlong DayOfWeek::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint DayOfWeek::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jboolean DayOfWeek::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DayOfWeek::minus(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(J)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	QAndroidJniObject DayOfWeek::plus(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(J)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	jobject DayOfWeek::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject DayOfWeek::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class DayOfWeek : public __jni_impl::java::time::DayOfWeek
	{
	public:
		DayOfWeek(QAndroidJniObject obj) { __thiz = obj; }
		DayOfWeek()
		{
			__constructor();
		}
	};
} // namespace java::time

