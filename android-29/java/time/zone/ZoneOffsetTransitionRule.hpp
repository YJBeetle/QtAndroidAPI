#pragma once

#ifndef JAVA_TIME_ZONE_ZONEOFFSETTRANSITIONRULE
#define JAVA_TIME_ZONE_ZONEOFFSETTRANSITIONRULE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class Month;
}
namespace __jni_impl::java::time
{
	class DayOfWeek;
}
namespace __jni_impl::java::time
{
	class LocalTime;
}
namespace __jni_impl::java::time::zone
{
	class ZoneOffsetTransitionRule_TimeDefinition;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::zone
{
	class ZoneOffsetTransition;
}

namespace __jni_impl::java::time::zone
{
	class ZoneOffsetTransitionRule : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject of(__jni_impl::java::time::Month arg0, jint arg1, __jni_impl::java::time::DayOfWeek arg2, __jni_impl::java::time::LocalTime arg3, jboolean arg4, __jni_impl::java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, __jni_impl::java::time::ZoneOffset arg6, __jni_impl::java::time::ZoneOffset arg7, __jni_impl::java::time::ZoneOffset arg8);
		QAndroidJniObject getOffsetAfter();
		QAndroidJniObject getOffsetBefore();
		QAndroidJniObject createTransition(jint arg0);
		QAndroidJniObject getStandardOffset();
		QAndroidJniObject getMonth();
		jint getDayOfMonthIndicator();
		QAndroidJniObject getLocalTime();
		jboolean isMidnightEndOfDay();
		QAndroidJniObject getTimeDefinition();
		QAndroidJniObject getDayOfWeek();
	};
} // namespace __jni_impl::java::time::zone

#include "../Month.hpp"
#include "../DayOfWeek.hpp"
#include "../LocalTime.hpp"
#include "ZoneOffsetTransitionRule_TimeDefinition.hpp"
#include "../ZoneOffset.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "ZoneOffsetTransition.hpp"

namespace __jni_impl::java::time::zone
{
	// Fields
	
	// Constructors
	void ZoneOffsetTransitionRule::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneOffsetTransitionRule",
			"(V)V");
	}
	
	// Methods
	jboolean ZoneOffsetTransitionRule::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ZoneOffsetTransitionRule::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ZoneOffsetTransitionRule::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::of(__jni_impl::java::time::Month arg0, jint arg1, __jni_impl::java::time::DayOfWeek arg2, __jni_impl::java::time::LocalTime arg3, jboolean arg4, __jni_impl::java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, __jni_impl::java::time::ZoneOffset arg6, __jni_impl::java::time::ZoneOffset arg7, __jni_impl::java::time::ZoneOffset arg8)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule",
			"of",
			"(Ljava/time/Month;ILjava/time/DayOfWeek;Ljava/time/LocalTime;ZLjava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransitionRule;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8.__jniObject().object());
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getOffsetAfter()
	{
		return __thiz.callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getOffsetBefore()
	{
		return __thiz.callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::createTransition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createTransition",
			"(I)Ljava/time/zone/ZoneOffsetTransition;",
			arg0);
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getStandardOffset()
	{
		return __thiz.callObjectMethod(
			"getStandardOffset",
			"()Ljava/time/ZoneOffset;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;");
	}
	jint ZoneOffsetTransitionRule::getDayOfMonthIndicator()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonthIndicator",
			"()I");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getLocalTime()
	{
		return __thiz.callObjectMethod(
			"getLocalTime",
			"()Ljava/time/LocalTime;");
	}
	jboolean ZoneOffsetTransitionRule::isMidnightEndOfDay()
	{
		return __thiz.callMethod<jboolean>(
			"isMidnightEndOfDay",
			"()Z");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getTimeDefinition()
	{
		return __thiz.callObjectMethod(
			"getTimeDefinition",
			"()Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule::getDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;");
	}
} // namespace __jni_impl::java::time::zone

namespace java::time::zone
{
	class ZoneOffsetTransitionRule : public __jni_impl::java::time::zone::ZoneOffsetTransitionRule
	{
	public:
		ZoneOffsetTransitionRule(QAndroidJniObject obj) { __thiz = obj; }
		ZoneOffsetTransitionRule()
		{
			__constructor();
		}
	};
} // namespace java::time::zone

#endif // JAVA_TIME_ZONE_ZONEOFFSETTRANSITIONRULE

