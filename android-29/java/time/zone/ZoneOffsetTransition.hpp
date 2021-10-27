#pragma once

#ifndef JAVA_TIME_ZONE_ZONEOFFSETTRANSITION
#define JAVA_TIME_ZONE_ZONEOFFSETTRANSITION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time
{
	class Duration;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::time
{
	class LocalDateTime;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}

namespace __jni_impl::java::time::zone
{
	class ZoneOffsetTransition : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject of(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneOffset arg2);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::time::zone::ZoneOffsetTransition arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getDateTimeAfter();
		QAndroidJniObject getDateTimeBefore();
		QAndroidJniObject getDuration();
		QAndroidJniObject getInstant();
		QAndroidJniObject getOffsetAfter();
		QAndroidJniObject getOffsetBefore();
		jint hashCode();
		jboolean isGap();
		jboolean isOverlap();
		jboolean isValidOffset(__jni_impl::java::time::ZoneOffset arg0);
		jlong toEpochSecond();
		jstring toString();
	};
} // namespace __jni_impl::java::time::zone

#include "../../io/ObjectInputStream.hpp"
#include "../Duration.hpp"
#include "../Instant.hpp"
#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"

namespace __jni_impl::java::time::zone
{
	// Fields
	
	// Constructors
	void ZoneOffsetTransition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneOffsetTransition",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ZoneOffsetTransition::of(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransition",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint ZoneOffsetTransition::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ZoneOffsetTransition::compareTo(__jni_impl::java::time::zone::ZoneOffsetTransition arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/zone/ZoneOffsetTransition;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ZoneOffsetTransition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getDateTimeAfter()
	{
		return __thiz.callObjectMethod(
			"getDateTimeAfter",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getDateTimeBefore()
	{
		return __thiz.callObjectMethod(
			"getDateTimeBefore",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getDuration()
	{
		return __thiz.callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getInstant()
	{
		return __thiz.callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getOffsetAfter()
	{
		return __thiz.callObjectMethod(
			"getOffsetAfter",
			"()Ljava/time/ZoneOffset;"
		);
	}
	QAndroidJniObject ZoneOffsetTransition::getOffsetBefore()
	{
		return __thiz.callObjectMethod(
			"getOffsetBefore",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint ZoneOffsetTransition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZoneOffsetTransition::isGap()
	{
		return __thiz.callMethod<jboolean>(
			"isGap",
			"()Z"
		);
	}
	jboolean ZoneOffsetTransition::isOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"isOverlap",
			"()Z"
		);
	}
	jboolean ZoneOffsetTransition::isValidOffset(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/ZoneOffset;)Z",
			arg0.__jniObject().object()
		);
	}
	jlong ZoneOffsetTransition::toEpochSecond()
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	jstring ZoneOffsetTransition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::time::zone

namespace java::time::zone
{
	class ZoneOffsetTransition : public __jni_impl::java::time::zone::ZoneOffsetTransition
	{
	public:
		ZoneOffsetTransition(QAndroidJniObject obj) { __thiz = obj; }
		ZoneOffsetTransition()
		{
			__constructor();
		}
	};
} // namespace java::time::zone

#endif // JAVA_TIME_ZONE_ZONEOFFSETTRANSITION

