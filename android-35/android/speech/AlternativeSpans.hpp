#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AlternativeSpans.def.hpp"

namespace android::speech
{
	// Fields
	inline JObject AlternativeSpans::CREATOR()
	{
		return getStaticObjectField(
			"android.speech.AlternativeSpans",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AlternativeSpans::AlternativeSpans(JObject arg0)
		: JObject(
			"android.speech.AlternativeSpans",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint AlternativeSpans::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AlternativeSpans::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AlternativeSpans::getSpans() const
	{
		return callObjectMethod(
			"getSpans",
			"()Ljava/util/List;"
		);
	}
	inline jint AlternativeSpans::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AlternativeSpans::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AlternativeSpans::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
