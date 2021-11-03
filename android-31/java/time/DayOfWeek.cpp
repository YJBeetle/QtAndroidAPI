#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./format/TextStyle.hpp"
#include "./temporal/ValueRange.hpp"
#include "../util/Locale.hpp"
#include "./DayOfWeek.hpp"

namespace java::time
{
	// Fields
	java::time::DayOfWeek DayOfWeek::FRIDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"FRIDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	java::time::DayOfWeek DayOfWeek::MONDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"MONDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	java::time::DayOfWeek DayOfWeek::SATURDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"SATURDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	java::time::DayOfWeek DayOfWeek::SUNDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"SUNDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	java::time::DayOfWeek DayOfWeek::THURSDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"THURSDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	java::time::DayOfWeek DayOfWeek::TUESDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"TUESDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	java::time::DayOfWeek DayOfWeek::WEDNESDAY()
	{
		return getStaticObjectField(
			"java.time.DayOfWeek",
			"WEDNESDAY",
			"Ljava/time/DayOfWeek;"
		);
	}
	
	// QJniObject forward
	DayOfWeek::DayOfWeek(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::DayOfWeek DayOfWeek::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.DayOfWeek",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/DayOfWeek;",
			arg0.object()
		);
	}
	java::time::DayOfWeek DayOfWeek::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.DayOfWeek",
			"of",
			"(I)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	java::time::DayOfWeek DayOfWeek::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.DayOfWeek",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/DayOfWeek;",
			arg0.object<jstring>()
		);
	}
	JArray DayOfWeek::values()
	{
		return callStaticObjectMethod(
			"java.time.DayOfWeek",
			"values",
			"()[Ljava/time/DayOfWeek;"
		);
	}
	JObject DayOfWeek::adjustInto(JObject arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint DayOfWeek::get(JObject arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	JString DayOfWeek::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	jlong DayOfWeek::getLong(JObject arg0)
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
	jboolean DayOfWeek::isSupported(JObject arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	java::time::DayOfWeek DayOfWeek::minus(jlong arg0)
	{
		return callObjectMethod(
			"minus",
			"(J)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	java::time::DayOfWeek DayOfWeek::plus(jlong arg0)
	{
		return callObjectMethod(
			"plus",
			"(J)Ljava/time/DayOfWeek;",
			arg0
		);
	}
	JObject DayOfWeek::query(JObject arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange DayOfWeek::range(JObject arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
} // namespace java::time

