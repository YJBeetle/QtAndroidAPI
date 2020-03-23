#pragma once

#ifndef JAVA_TIME_ZONE_ZONERULES
#define JAVA_TIME_ZONE_ZONERULES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time
{
	class LocalDateTime;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::time::zone
{
	class ZoneOffsetTransition;
}
namespace __jni_impl::java::time
{
	class Duration;
}

namespace __jni_impl::java::time::zone
{
	class ZoneRules : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject of(__jni_impl::java::time::ZoneOffset arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		static QAndroidJniObject of(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject getOffset(__jni_impl::java::time::LocalDateTime arg0);
		QAndroidJniObject getOffset(__jni_impl::java::time::Instant arg0);
		jboolean isFixedOffset();
		QAndroidJniObject getValidOffsets(__jni_impl::java::time::LocalDateTime arg0);
		QAndroidJniObject getStandardOffset(__jni_impl::java::time::Instant arg0);
		QAndroidJniObject getTransition(__jni_impl::java::time::LocalDateTime arg0);
		QAndroidJniObject getDaylightSavings(__jni_impl::java::time::Instant arg0);
		jboolean isDaylightSavings(__jni_impl::java::time::Instant arg0);
		jboolean isValidOffset(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1);
		QAndroidJniObject nextTransition(__jni_impl::java::time::Instant arg0);
		QAndroidJniObject previousTransition(__jni_impl::java::time::Instant arg0);
		QAndroidJniObject getTransitions();
		QAndroidJniObject getTransitionRules();
	};
} // namespace __jni_impl::java::time::zone

#include "../ZoneOffset.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../LocalDateTime.hpp"
#include "../Instant.hpp"
#include "ZoneOffsetTransition.hpp"
#include "../Duration.hpp"

namespace __jni_impl::java::time::zone
{
	// Fields
	
	// Constructors
	void ZoneRules::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRules",
			"(V)V");
	}
	
	// Methods
	jboolean ZoneRules::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ZoneRules::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ZoneRules::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ZoneRules::of(__jni_impl::java::time::ZoneOffset arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneRules",
			"of",
			"(Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Ljava/time/zone/ZoneRules;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::of(__jni_impl::java::time::ZoneOffset arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneRules",
			"of",
			"(Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneRules;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::getOffset(__jni_impl::java::time::LocalDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"(Ljava/time/LocalDateTime;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::getOffset(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"(Ljava/time/Instant;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object());
	}
	jboolean ZoneRules::isFixedOffset()
	{
		return __thiz.callMethod<jboolean>(
			"isFixedOffset",
			"()Z");
	}
	QAndroidJniObject ZoneRules::getValidOffsets(__jni_impl::java::time::LocalDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"getValidOffsets",
			"(Ljava/time/LocalDateTime;)Ljava/util/List;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::getStandardOffset(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"getStandardOffset",
			"(Ljava/time/Instant;)Ljava/time/ZoneOffset;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::getTransition(__jni_impl::java::time::LocalDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"getTransition",
			"(Ljava/time/LocalDateTime;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::getDaylightSavings(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"getDaylightSavings",
			"(Ljava/time/Instant;)Ljava/time/Duration;",
			arg0.__jniObject().object());
	}
	jboolean ZoneRules::isDaylightSavings(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isDaylightSavings",
			"(Ljava/time/Instant;)Z",
			arg0.__jniObject().object());
	}
	jboolean ZoneRules::isValidOffset(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isValidOffset",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::nextTransition(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"nextTransition",
			"(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::previousTransition(__jni_impl::java::time::Instant arg0)
	{
		return __thiz.callObjectMethod(
			"previousTransition",
			"(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ZoneRules::getTransitions()
	{
		return __thiz.callObjectMethod(
			"getTransitions",
			"()Ljava/util/List;");
	}
	QAndroidJniObject ZoneRules::getTransitionRules()
	{
		return __thiz.callObjectMethod(
			"getTransitionRules",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::java::time::zone

namespace java::time::zone
{
	class ZoneRules : public __jni_impl::java::time::zone::ZoneRules
	{
	public:
		ZoneRules(QAndroidJniObject obj) { __thiz = obj; }
		ZoneRules()
		{
			__constructor();
		}
	};
} // namespace java::time::zone

#endif // JAVA_TIME_ZONE_ZONERULES

