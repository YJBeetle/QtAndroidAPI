#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AlternativeSpan.def.hpp"

namespace android::speech
{
	// Fields
	inline JObject AlternativeSpan::CREATOR()
	{
		return getStaticObjectField(
			"android.speech.AlternativeSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AlternativeSpan::AlternativeSpan(jint arg0, jint arg1, JObject arg2)
		: JObject(
			"android.speech.AlternativeSpan",
			"(IILjava/util/List;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jint AlternativeSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AlternativeSpan::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AlternativeSpan::getAlternatives() const
	{
		return callObjectMethod(
			"getAlternatives",
			"()Ljava/util/List;"
		);
	}
	inline jint AlternativeSpan::getEndPosition() const
	{
		return callMethod<jint>(
			"getEndPosition",
			"()I"
		);
	}
	inline jint AlternativeSpan::getStartPosition() const
	{
		return callMethod<jint>(
			"getStartPosition",
			"()I"
		);
	}
	inline jint AlternativeSpan::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AlternativeSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AlternativeSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
