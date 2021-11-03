#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "./TimeZone_SystemTimeZoneType.hpp"
#include "./ULocale.hpp"
#include "../../../java/lang/Integer.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TimeZone.hpp"

namespace android::icu::util
{
	// Fields
	jint TimeZone::GENERIC_LOCATION()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"GENERIC_LOCATION"
		);
	}
	android::icu::util::TimeZone TimeZone::GMT_ZONE()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"GMT_ZONE",
			"Landroid/icu/util/TimeZone;"
		);
	}
	jint TimeZone::LONG()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG"
		);
	}
	jint TimeZone::LONG_GENERIC()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GENERIC"
		);
	}
	jint TimeZone::LONG_GMT()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GMT"
		);
	}
	jint TimeZone::SHORT()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT"
		);
	}
	jint TimeZone::SHORT_COMMONLY_USED()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_COMMONLY_USED"
		);
	}
	jint TimeZone::SHORT_GENERIC()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GENERIC"
		);
	}
	jint TimeZone::SHORT_GMT()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GMT"
		);
	}
	jint TimeZone::TIMEZONE_ICU()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_ICU"
		);
	}
	jint TimeZone::TIMEZONE_JDK()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_JDK"
		);
	}
	android::icu::util::TimeZone TimeZone::UNKNOWN_ZONE()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE",
			"Landroid/icu/util/TimeZone;"
		);
	}
	JString TimeZone::UNKNOWN_ZONE_ID()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	TimeZone::TimeZone(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TimeZone::TimeZone()
		: JObject(
			"android.icu.util.TimeZone",
			"()V"
		) {}
	
	// Methods
	jint TimeZone::countEquivalentIDs(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.util.TimeZone",
			"countEquivalentIDs",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JArray TimeZone::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		);
	}
	JArray TimeZone::getAvailableIDs(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	JArray TimeZone::getAvailableIDs(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject TimeZone::getAvailableIDs(android::icu::util::TimeZone_SystemTimeZoneType arg0, JString arg1, java::lang::Integer arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JString TimeZone::getCanonicalID(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString TimeZone::getCanonicalID(JString arg0, JBooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;[Z)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	android::icu::util::TimeZone TimeZone::getDefault()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getDefault",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	JString TimeZone::getEquivalentID(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getEquivalentID",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::icu::util::TimeZone TimeZone::getFrozenTimeZone(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getFrozenTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	JString TimeZone::getIDForWindowsID(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getIDForWindowsID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString TimeZone::getRegion(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getRegion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString TimeZone::getTZDataVersion()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTZDataVersion",
			"()Ljava/lang/String;"
		);
	}
	android::icu::util::TimeZone TimeZone::getTimeZone(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::TimeZone TimeZone::getTimeZone(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;I)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString TimeZone::getWindowsID(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getWindowsID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject TimeZone::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::icu::util::TimeZone TimeZone::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jboolean TimeZone::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::util::TimeZone TimeZone::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jint TimeZone::getDSTSavings()
	{
		return callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	JString TimeZone::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString TimeZone::getDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString TimeZone::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString TimeZone::getDisplayName(jboolean arg0, jint arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString TimeZone::getDisplayName(jboolean arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILandroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	JString TimeZone::getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	JString TimeZone::getID()
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		);
	}
	jint TimeZone::getOffset(jlong arg0)
	{
		return callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	jint TimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void TimeZone::getOffset(jlong arg0, jboolean arg1, JIntArray arg2)
	{
		callMethod<void>(
			"getOffset",
			"(JZ[I)V",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	jint TimeZone::getRawOffset()
	{
		return callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	jboolean TimeZone::hasSameRules(android::icu::util::TimeZone arg0)
	{
		return callMethod<jboolean>(
			"hasSameRules",
			"(Landroid/icu/util/TimeZone;)Z",
			arg0.object()
		);
	}
	jint TimeZone::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean TimeZone::inDaylightTime(java::util::Date arg0)
	{
		return callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	jboolean TimeZone::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	jboolean TimeZone::observesDaylightTime()
	{
		return callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	void TimeZone::setID(JString arg0)
	{
		callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TimeZone::setRawOffset(jint arg0)
	{
		callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	jboolean TimeZone::useDaylightTime()
	{
		return callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace android::icu::util

