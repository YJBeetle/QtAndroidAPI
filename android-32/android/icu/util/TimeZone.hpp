#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "./TimeZone_SystemTimeZoneType.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../java/lang/Integer.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TimeZone.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint TimeZone::GENERIC_LOCATION()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"GENERIC_LOCATION"
		);
	}
	inline android::icu::util::TimeZone TimeZone::GMT_ZONE()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"GMT_ZONE",
			"Landroid/icu/util/TimeZone;"
		);
	}
	inline jint TimeZone::LONG()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG"
		);
	}
	inline jint TimeZone::LONG_GENERIC()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GENERIC"
		);
	}
	inline jint TimeZone::LONG_GMT()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"LONG_GMT"
		);
	}
	inline jint TimeZone::SHORT()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT"
		);
	}
	inline jint TimeZone::SHORT_COMMONLY_USED()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_COMMONLY_USED"
		);
	}
	inline jint TimeZone::SHORT_GENERIC()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GENERIC"
		);
	}
	inline jint TimeZone::SHORT_GMT()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"SHORT_GMT"
		);
	}
	inline jint TimeZone::TIMEZONE_ICU()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_ICU"
		);
	}
	inline jint TimeZone::TIMEZONE_JDK()
	{
		return getStaticField<jint>(
			"android.icu.util.TimeZone",
			"TIMEZONE_JDK"
		);
	}
	inline android::icu::util::TimeZone TimeZone::UNKNOWN_ZONE()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE",
			"Landroid/icu/util/TimeZone;"
		);
	}
	inline JString TimeZone::UNKNOWN_ZONE_ID()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone",
			"UNKNOWN_ZONE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TimeZone::TimeZone()
		: JObject(
			"android.icu.util.TimeZone",
			"()V"
		) {}
	
	// Methods
	inline jint TimeZone::countEquivalentIDs(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.util.TimeZone",
			"countEquivalentIDs",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JArray TimeZone::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray TimeZone::getAvailableIDs(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(I)[Ljava/lang/String;",
			arg0
		);
	}
	inline JArray TimeZone::getAvailableIDs(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getAvailableIDs",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject TimeZone::getAvailableIDs(android::icu::util::TimeZone_SystemTimeZoneType arg0, JString arg1, java::lang::Integer arg2)
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
	inline JString TimeZone::getCanonicalID(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString TimeZone::getCanonicalID(JString arg0, JBooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getCanonicalID",
			"(Ljava/lang/String;[Z)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline android::icu::util::TimeZone TimeZone::getDefault()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getDefault",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	inline JString TimeZone::getEquivalentID(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getEquivalentID",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::icu::util::TimeZone TimeZone::getFrozenTimeZone(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getFrozenTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	inline JString TimeZone::getIDForWindowsID(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getIDForWindowsID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString TimeZone::getRegion(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getRegion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString TimeZone::getTZDataVersion()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTZDataVersion",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::util::TimeZone TimeZone::getTimeZone(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::TimeZone TimeZone::getTimeZone(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getTimeZone",
			"(Ljava/lang/String;I)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString TimeZone::getWindowsID(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone",
			"getWindowsID",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject TimeZone::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::icu::util::TimeZone TimeZone::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	inline jboolean TimeZone::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::util::TimeZone TimeZone::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	inline jint TimeZone::getDSTSavings() const
	{
		return callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	inline JString TimeZone::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TimeZone::getDisplayName(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString TimeZone::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString TimeZone::getDisplayName(jboolean arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JString TimeZone::getDisplayName(jboolean arg0, jint arg1, android::icu::util::ULocale arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILandroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline JString TimeZone::getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(ZILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline JString TimeZone::getID() const
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		);
	}
	inline jint TimeZone::getOffset(jlong arg0) const
	{
		return callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	inline jint TimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline void TimeZone::getOffset(jlong arg0, jboolean arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"getOffset",
			"(JZ[I)V",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	inline jint TimeZone::getRawOffset() const
	{
		return callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	inline jboolean TimeZone::hasSameRules(android::icu::util::TimeZone arg0) const
	{
		return callMethod<jboolean>(
			"hasSameRules",
			"(Landroid/icu/util/TimeZone;)Z",
			arg0.object()
		);
	}
	inline jint TimeZone::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean TimeZone::inDaylightTime(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline jboolean TimeZone::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline jboolean TimeZone::observesDaylightTime() const
	{
		return callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	inline void TimeZone::setID(JString arg0) const
	{
		callMethod<void>(
			"setID",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TimeZone::setRawOffset(jint arg0) const
	{
		callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	inline jboolean TimeZone::useDaylightTime() const
	{
		return callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace android::icu::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
