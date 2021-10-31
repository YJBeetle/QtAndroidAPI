#include "../io/ObjectInputStream.hpp"
#include "./ZoneOffset.hpp"
#include "./format/TextStyle.hpp"
#include "./zone/ZoneRules.hpp"
#include "../util/Locale.hpp"
#include "./ZoneId.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject ZoneId::SHORT_IDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.ZoneId",
			"SHORT_IDS",
			"Ljava/util/Map;"
		);
	}
	
	// QAndroidJniObject forward
	ZoneId::ZoneId(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ZoneId::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;",
			arg0.object()
		);
	}
	QAndroidJniObject ZoneId::getAvailableZoneIds()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"getAvailableZoneIds",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject ZoneId::of(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;)Ljava/time/ZoneId;",
			arg0
		);
	}
	QAndroidJniObject ZoneId::of(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"of",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/time/ZoneId;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ZoneId::ofOffset(jstring arg0, java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"ofOffset",
			"(Ljava/lang/String;Ljava/time/ZoneOffset;)Ljava/time/ZoneId;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ZoneId::systemDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZoneId",
			"systemDefault",
			"()Ljava/time/ZoneId;"
		);
	}
	jboolean ZoneId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZoneId::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jstring ZoneId::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ZoneId::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/time/zone/ZoneRules;"
		);
	}
	jint ZoneId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ZoneId::normalized()
	{
		return callObjectMethod(
			"normalized",
			"()Ljava/time/ZoneId;"
		);
	}
	jstring ZoneId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time
