#include "../../os/Parcel.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Voice.hpp"

namespace android::speech::tts
{
	// Fields
	QAndroidJniObject Voice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.Voice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Voice::LATENCY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_HIGH"
		);
	}
	jint Voice::LATENCY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_LOW"
		);
	}
	jint Voice::LATENCY_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_NORMAL"
		);
	}
	jint Voice::LATENCY_VERY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_VERY_HIGH"
		);
	}
	jint Voice::LATENCY_VERY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"LATENCY_VERY_LOW"
		);
	}
	jint Voice::QUALITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_HIGH"
		);
	}
	jint Voice::QUALITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_LOW"
		);
	}
	jint Voice::QUALITY_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_NORMAL"
		);
	}
	jint Voice::QUALITY_VERY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_VERY_HIGH"
		);
	}
	jint Voice::QUALITY_VERY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.Voice",
			"QUALITY_VERY_LOW"
		);
	}
	
	// QAndroidJniObject forward
	Voice::Voice(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Voice::Voice(jstring arg0, java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __JniBaseClass arg5)
		: __JniBaseClass(
			"android.speech.tts.Voice",
			"(Ljava/lang/String;Ljava/util/Locale;IIZLjava/util/Set;)V",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
	jint Voice::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Voice::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Voice::getFeatures()
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	jint Voice::getLatency()
	{
		return callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	QAndroidJniObject Voice::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jstring Voice::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Voice::getQuality()
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jint Voice::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Voice::isNetworkConnectionRequired()
	{
		return callMethod<jboolean>(
			"isNetworkConnectionRequired",
			"()Z"
		);
	}
	jstring Voice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Voice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::speech::tts

