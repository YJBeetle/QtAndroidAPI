#include "./Parcel.hpp"
#include "./PatternMatcher.hpp"

namespace android::os
{
	// Fields
	__JniBaseClass PatternMatcher::CREATOR()
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
	
	// QAndroidJniObject forward
	PatternMatcher::PatternMatcher(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PatternMatcher::PatternMatcher(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.os.PatternMatcher",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	PatternMatcher::PatternMatcher(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.os.PatternMatcher",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint PatternMatcher::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PatternMatcher::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PatternMatcher::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean PatternMatcher::match(jstring arg0)
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring PatternMatcher::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PatternMatcher::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

