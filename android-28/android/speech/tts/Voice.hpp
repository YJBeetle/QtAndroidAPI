#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./Voice.def.hpp"

namespace android::speech::tts
{
	// Fields
	inline JObject Voice::CREATOR()
	{
		return getStaticObjectField(
			"android.speech.tts.Voice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Voice::LATENCY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_HIGH"
		);
	}
	inline jint Voice::LATENCY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_LOW"
		);
	}
	inline jint Voice::LATENCY_NORMAL()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_NORMAL"
		);
	}
	inline jint Voice::LATENCY_VERY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_VERY_HIGH"
		);
	}
	inline jint Voice::LATENCY_VERY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_VERY_LOW"
		);
	}
	inline jint Voice::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_HIGH"
		);
	}
	inline jint Voice::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_LOW"
		);
	}
	inline jint Voice::QUALITY_NORMAL()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_NORMAL"
		);
	}
	inline jint Voice::QUALITY_VERY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_VERY_HIGH"
		);
	}
	inline jint Voice::QUALITY_VERY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_VERY_LOW"
		);
	}
	
	// Constructors
	inline Voice::Voice(JString arg0, java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, JObject arg5)
		: JObject(
			"android.speech.tts.Voice",
			"(Ljava/lang/String;Ljava/util/Locale;IIZLjava/util/Set;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
	inline jint Voice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Voice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Voice::getFeatures() const
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	inline jint Voice::getLatency() const
	{
		return callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	inline java::util::Locale Voice::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline JString Voice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Voice::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	inline jint Voice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Voice::isNetworkConnectionRequired() const
	{
		return callMethod<jboolean>(
			"isNetworkConnectionRequired",
			"()Z"
		);
	}
	inline JString Voice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Voice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::speech::tts

// Base class headers

