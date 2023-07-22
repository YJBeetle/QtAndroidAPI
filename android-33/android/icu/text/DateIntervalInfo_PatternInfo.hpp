#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DateIntervalInfo_PatternInfo.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(JString arg0, JString arg1, jboolean arg2)
		: JObject(
			"android.icu.text.DateIntervalInfo$PatternInfo",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jboolean DateIntervalInfo_PatternInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean DateIntervalInfo_PatternInfo::firstDateInPtnIsLaterDate() const
	{
		return callMethod<jboolean>(
			"firstDateInPtnIsLaterDate",
			"()Z"
		);
	}
	inline JString DateIntervalInfo_PatternInfo::getFirstPart() const
	{
		return callObjectMethod(
			"getFirstPart",
			"()Ljava/lang/String;"
		);
	}
	inline JString DateIntervalInfo_PatternInfo::getSecondPart() const
	{
		return callObjectMethod(
			"getSecondPart",
			"()Ljava/lang/String;"
		);
	}
	inline jint DateIntervalInfo_PatternInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DateIntervalInfo_PatternInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
