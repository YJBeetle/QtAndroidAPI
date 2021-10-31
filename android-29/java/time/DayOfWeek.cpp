#include "./format/TextStyle.hpp"
#include "./temporal/ValueRange.hpp"
#include "../util/Locale.hpp"
#include "./DayOfWeek.hpp"

namespace java::time
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
	
	// QAndroidJniObject forward
	DayOfWeek::DayOfWeek(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DayOfWeek::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/DayOfWeek;",
			arg0.object()
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
	jarray DayOfWeek::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.DayOfWeek",
			"values",
			"()[Ljava/time/DayOfWeek;"
		).object<jarray>();
	}
	QAndroidJniObject DayOfWeek::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint DayOfWeek::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jstring DayOfWeek::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jlong DayOfWeek::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint DayOfWeek::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jboolean DayOfWeek::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject DayOfWeek::minus(jlong arg0)
	{
		return callObjectMethod(
			"minus",
			"(J)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	QAndroidJniObject DayOfWeek::plus(jlong arg0)
	{
		return callObjectMethod(
			"plus",
			"(J)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	jobject DayOfWeek::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject DayOfWeek::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
} // namespace java::time

