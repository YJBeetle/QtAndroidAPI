#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Voice.hpp"

namespace android::speech::tts
{
	// Fields
	JObject Voice::CREATOR()
	{
		return getStaticObjectField(
			"android.speech.tts.Voice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Voice::LATENCY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_HIGH"
		);
	}
	jint Voice::LATENCY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_LOW"
		);
	}
	jint Voice::LATENCY_NORMAL()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_NORMAL"
		);
	}
	jint Voice::LATENCY_VERY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_VERY_HIGH"
		);
	}
	jint Voice::LATENCY_VERY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_VERY_LOW"
		);
	}
	jint Voice::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_HIGH"
		);
	}
	jint Voice::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_LOW"
		);
	}
	jint Voice::QUALITY_NORMAL()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_NORMAL"
		);
	}
	jint Voice::QUALITY_VERY_HIGH()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_VERY_HIGH"
		);
	}
	jint Voice::QUALITY_VERY_LOW()
	{
		return getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_VERY_LOW"
		);
	}
	
	// QJniObject forward
	Voice::Voice(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Voice::Voice(JString arg0, java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, JObject arg5)
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
	jint Voice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Voice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Voice::getFeatures() const
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	jint Voice::getLatency() const
	{
		return callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	java::util::Locale Voice::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	JString Voice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Voice::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jint Voice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Voice::isNetworkConnectionRequired() const
	{
		return callMethod<jboolean>(
			"isNetworkConnectionRequired",
			"()Z"
		);
	}
	JString Voice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Voice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::speech::tts

