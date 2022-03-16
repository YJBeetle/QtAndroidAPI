#pragma once

#include "./DateIntervalInfo_PatternInfo.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateIntervalInfo.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline DateIntervalInfo::DateIntervalInfo(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.DateIntervalInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline DateIntervalInfo::DateIntervalInfo(java::util::Locale arg0)
		: JObject(
			"android.icu.text.DateIntervalInfo",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject DateIntervalInfo::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::icu::text::DateIntervalInfo DateIntervalInfo::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	inline jboolean DateIntervalInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::DateIntervalInfo DateIntervalInfo::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	inline jboolean DateIntervalInfo::getDefaultOrder() const
	{
		return callMethod<jboolean>(
			"getDefaultOrder",
			"()Z"
		);
	}
	inline JString DateIntervalInfo::getFallbackIntervalPattern() const
	{
		return callObjectMethod(
			"getFallbackIntervalPattern",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::text::DateIntervalInfo_PatternInfo DateIntervalInfo::getIntervalPattern(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getIntervalPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/DateIntervalInfo$PatternInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint DateIntervalInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean DateIntervalInfo::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline void DateIntervalInfo::setFallbackIntervalPattern(JString arg0) const
	{
		callMethod<void>(
			"setFallbackIntervalPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DateIntervalInfo::setIntervalPattern(JString arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"setIntervalPattern",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

