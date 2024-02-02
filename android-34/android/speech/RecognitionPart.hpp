#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RecognitionPart.def.hpp"

namespace android::speech
{
	// Fields
	inline jint RecognitionPart::CONFIDENCE_LEVEL_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.RecognitionPart",
			"CONFIDENCE_LEVEL_HIGH"
		);
	}
	inline jint RecognitionPart::CONFIDENCE_LEVEL_LOW()
	{
		return getStaticField<jint>(
			"android.speech.RecognitionPart",
			"CONFIDENCE_LEVEL_LOW"
		);
	}
	inline jint RecognitionPart::CONFIDENCE_LEVEL_MEDIUM()
	{
		return getStaticField<jint>(
			"android.speech.RecognitionPart",
			"CONFIDENCE_LEVEL_MEDIUM"
		);
	}
	inline jint RecognitionPart::CONFIDENCE_LEVEL_MEDIUM_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.RecognitionPart",
			"CONFIDENCE_LEVEL_MEDIUM_HIGH"
		);
	}
	inline jint RecognitionPart::CONFIDENCE_LEVEL_MEDIUM_LOW()
	{
		return getStaticField<jint>(
			"android.speech.RecognitionPart",
			"CONFIDENCE_LEVEL_MEDIUM_LOW"
		);
	}
	inline jint RecognitionPart::CONFIDENCE_LEVEL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.speech.RecognitionPart",
			"CONFIDENCE_LEVEL_UNKNOWN"
		);
	}
	inline JObject RecognitionPart::CREATOR()
	{
		return getStaticObjectField(
			"android.speech.RecognitionPart",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RecognitionPart::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RecognitionPart::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint RecognitionPart::getConfidenceLevel() const
	{
		return callMethod<jint>(
			"getConfidenceLevel",
			"()I"
		);
	}
	inline JString RecognitionPart::getFormattedText() const
	{
		return callObjectMethod(
			"getFormattedText",
			"()Ljava/lang/String;"
		);
	}
	inline JString RecognitionPart::getRawText() const
	{
		return callObjectMethod(
			"getRawText",
			"()Ljava/lang/String;"
		);
	}
	inline jlong RecognitionPart::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline jint RecognitionPart::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RecognitionPart::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RecognitionPart::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
