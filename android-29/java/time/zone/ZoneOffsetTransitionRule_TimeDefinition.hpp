#pragma once

#ifndef JAVA_TIME_ZONE_ZONEOFFSETTRANSITIONRULE_TIMEDEFINITION
#define JAVA_TIME_ZONE_ZONEOFFSETTRANSITIONRULE_TIMEDEFINITION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

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
	class ZoneOffsetTransitionRule_TimeDefinition : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject UTC();
		static QAndroidJniObject WALL();
		static QAndroidJniObject STANDARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
		QAndroidJniObject createDateTime(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneOffset arg2);
	};
} // namespace __jni_impl::java::time::zone

#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"

namespace __jni_impl::java::time::zone
{
	// Fields
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::UTC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"UTC",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::WALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"WALL",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"STANDARD",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;");
	}
	
	// Constructors
	void ZoneOffsetTransitionRule_TimeDefinition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"values",
			"()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;");
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;",
			arg0);
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::createDateTime(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneOffset arg2)
	{
		return __thiz.callObjectMethod(
			"createDateTime",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::java::time::zone

namespace java::time::zone
{
	class ZoneOffsetTransitionRule_TimeDefinition : public __jni_impl::java::time::zone::ZoneOffsetTransitionRule_TimeDefinition
	{
	public:
		ZoneOffsetTransitionRule_TimeDefinition(QAndroidJniObject obj) { __thiz = obj; }
		ZoneOffsetTransitionRule_TimeDefinition()
		{
			__constructor();
		}
	};
} // namespace java::time::zone

#endif // JAVA_TIME_ZONE_ZONEOFFSETTRANSITIONRULE_TIMEDEFINITION

