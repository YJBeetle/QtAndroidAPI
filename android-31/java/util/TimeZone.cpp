#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../time/ZoneId.hpp"
#include "./Date.hpp"
#include "./Locale.hpp"
#include "./TimeZone.hpp"

namespace java::util
{
	// Fields
	jint TimeZone::LONG()
	{
		return getStaticField<jint>(
			"java.util.TimeZone",
			"LONG"
		);
	}
	jint TimeZone::SHORT()
	{
		return getStaticField<jint>(
			"java.util.TimeZone",
			"SHORT"
		);
	}
	
	// QJniObject forward
	TimeZone::TimeZone(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TimeZone::TimeZone()
		: JObject(
			"java.util.TimeZone",
			"()V"
		) {}
	
	// Methods
	JArray TimeZone::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		);
	}
	JArray TimeZone::getAvailableIDs(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	java::util::TimeZone TimeZone::getDefault()
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getDefault",
			"()Ljava/util/TimeZone;"
		);
	}
	java::util::TimeZone TimeZone::getTimeZone(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Ljava/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	java::util::TimeZone TimeZone::getTimeZone(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.util.TimeZone",
			"getTimeZone",
			"(Ljava/time/ZoneId;)Ljava/util/TimeZone;",
			arg0.object()
		);
	}
	void TimeZone::setDefault(java::util::TimeZone arg0)
	{
		callStaticMethod<void>(
			"java.util.TimeZone",
			"setDefault",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
	JObject TimeZone::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint TimeZone::getDSTSavings() const
	{
		return callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	JString TimeZone::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString TimeZone::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString TimeZone::getDisplayName(jboolean arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString TimeZone::getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	JString TimeZone::getID() const
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		);
	}
	jint TimeZone::getOffset(jlong arg0) const
	{
		return callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	jint TimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		return callMethod<jint>(
			"getOffset",
			"(IIIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint TimeZone::getRawOffset() const
	{
		return callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	jboolean TimeZone::hasSameRules(java::util::TimeZone arg0) const
	{
		return callMethod<jboolean>(
			"hasSameRules",
			"(Ljava/util/TimeZone;)Z",
			arg0.object()
		);
	}
	jboolean TimeZone::inDaylightTime(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	jboolean TimeZone::observesDaylightTime() const
	{
		return callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	void TimeZone::setID(JString arg0) const
	{
		callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TimeZone::setRawOffset(jint arg0) const
	{
		callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	java::time::ZoneId TimeZone::toZoneId() const
	{
		return callObjectMethod(
			"toZoneId",
			"()Ljava/time/ZoneId;"
		);
	}
	jboolean TimeZone::useDaylightTime() const
	{
		return callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace java::util

