#include "./TimeZone_SystemTimeZoneType.hpp"
#include "./ULocale.hpp"
#include "../../../java/lang/Integer.hpp"
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
	jstring TimeZone::UNKNOWN_ZONE_ID()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	TimeZone::TimeZone(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TimeZone::TimeZone()
		: JObject(
			"android.icu.util.TimeZone",
			"()V"
		) {}
	
	// Methods
	jint TimeZone::countEquivalentIDs(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.util.TimeZone",
			"countEquivalentIDs",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jarray TimeZone::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray TimeZone::getAvailableIDs(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray TimeZone::getAvailableIDs(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	JObject TimeZone::getAvailableIDs(android::icu::util::TimeZone_SystemTimeZoneType arg0, jstring arg1, java::lang::Integer arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jstring TimeZone::getCanonicalID(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZone::getCanonicalID(jstring arg0, jbooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;[Z)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	android::icu::util::TimeZone TimeZone::getDefault()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getDefault",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jstring TimeZone::getEquivalentID(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getEquivalentID",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	android::icu::util::TimeZone TimeZone::getFrozenTimeZone(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getFrozenTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0
		);
	}
	jstring TimeZone::getIDForWindowsID(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getIDForWindowsID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getRegion(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getRegion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZone::getTZDataVersion()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTZDataVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::icu::util::TimeZone TimeZone::getTimeZone(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0
		);
	}
	android::icu::util::TimeZone TimeZone::getTimeZone(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;I)Landroid/icu/util/TimeZone;",
			arg0,
			arg1
		);
	}
	jstring TimeZone::getWindowsID(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getWindowsID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject TimeZone::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::icu::util::TimeZone TimeZone::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jboolean TimeZone::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring TimeZone::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1, android::icu::util::ULocale arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILandroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring TimeZone::getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring TimeZone::getID()
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void TimeZone::getOffset(jlong arg0, jboolean arg1, jintArray arg2)
	{
		callMethod<void>(
			"getOffset",
			"(JZ[I)V",
			arg0,
			arg1,
			arg2
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
	void TimeZone::setID(jstring arg0)
	{
		callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0
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

