#include "../LocalDateTime.hpp"
#include "../ZoneOffset.hpp"
#include "./ZoneOffsetTransitionRule_TimeDefinition.hpp"

namespace java::time::zone
{
	// Fields
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"STANDARD",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::UTC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"UTC",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::WALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"WALL",
			"Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		);
	}
	
	ZoneOffsetTransitionRule_TimeDefinition::ZoneOffsetTransitionRule_TimeDefinition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;",
			arg0
		);
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ZoneOffsetTransitionRule_TimeDefinition::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
			"values",
			"()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;"
		).object<jarray>();
	}
	QAndroidJniObject ZoneOffsetTransitionRule_TimeDefinition::createDateTime(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2)
	{
		return __thiz.callObjectMethod(
			"createDateTime",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace java::time::zone

