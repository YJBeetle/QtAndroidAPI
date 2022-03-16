#include "./Parcel.hpp"
#include "../../JString.hpp"
#include "./PatternMatcher.hpp"

namespace android::os
{
	// Fields
	JObject PatternMatcher::CREATOR()
	{
		return getStaticObjectField(
			"android.os.PatternMatcher",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PatternMatcher::PATTERN_ADVANCED_GLOB()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_ADVANCED_GLOB"
		);
	}
	jint PatternMatcher::PATTERN_LITERAL()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_LITERAL"
		);
	}
	jint PatternMatcher::PATTERN_PREFIX()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_PREFIX"
		);
	}
	jint PatternMatcher::PATTERN_SIMPLE_GLOB()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_SIMPLE_GLOB"
		);
	}
	jint PatternMatcher::PATTERN_SUFFIX()
	{
		return getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_SUFFIX"
		);
	}
	
	// Constructors
	PatternMatcher::PatternMatcher(android::os::Parcel arg0)
		: JObject(
			"android.os.PatternMatcher",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	PatternMatcher::PatternMatcher(JString arg0, jint arg1)
		: JObject(
			"android.os.PatternMatcher",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jint PatternMatcher::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString PatternMatcher::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	jint PatternMatcher::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean PatternMatcher::match(JString arg0) const
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString PatternMatcher::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PatternMatcher::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

