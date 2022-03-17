#pragma once

#include "./Parcel.def.hpp"
#include "../../JString.hpp"
#include "./PatternMatcher.def.hpp"

namespace android::os
{
	// Fields
	inline JObject PatternMatcher::CREATOR()
	{
		return getStaticObjectField(
			"android.os.PatternMatcher",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PatternMatcher::PATTERN_ADVANCED_GLOB()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_ADVANCED_GLOB"
		);
	}
	inline jint PatternMatcher::PATTERN_LITERAL()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_LITERAL"
		);
	}
	inline jint PatternMatcher::PATTERN_PREFIX()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_PREFIX"
		);
	}
	inline jint PatternMatcher::PATTERN_SIMPLE_GLOB()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_SIMPLE_GLOB"
		);
	}
	
	// Constructors
	inline PatternMatcher::PatternMatcher(android::os::Parcel arg0)
		: JObject(
			"android.os.PatternMatcher",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline PatternMatcher::PatternMatcher(JString arg0, jint arg1)
		: JObject(
			"android.os.PatternMatcher",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint PatternMatcher::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PatternMatcher::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline jint PatternMatcher::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jboolean PatternMatcher::match(JString arg0) const
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString PatternMatcher::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PatternMatcher::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
