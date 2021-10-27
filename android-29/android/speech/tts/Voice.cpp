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
	
	Voice::Voice(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Voice::Voice(jstring &arg0, java::util::Locale &arg1, jint &arg2, jint &arg3, jboolean &arg4, __JniBaseClass &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.Voice",
			"(Ljava/lang/String;Ljava/util/Locale;IIZLjava/util/Set;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	Voice::Voice(const QString &arg0, java::util::Locale &arg1, jint &arg2, jint &arg3, jboolean &arg4, __JniBaseClass &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.Voice",
			"(Ljava/lang/String;Ljava/util/Locale;IIZLjava/util/Set;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	jint Voice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Voice::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Voice::getFeatures()
	{
		return __thiz.callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	jint Voice::getLatency()
	{
		return __thiz.callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	QAndroidJniObject Voice::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jstring Voice::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Voice::getQuality()
	{
		return __thiz.callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jint Voice::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Voice::isNetworkConnectionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isNetworkConnectionRequired",
			"()Z"
		);
	}
	jstring Voice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Voice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::speech::tts

