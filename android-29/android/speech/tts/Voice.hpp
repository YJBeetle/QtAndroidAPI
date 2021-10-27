#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::speech::tts
{
	class Voice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint LATENCY_HIGH();
		static jint LATENCY_LOW();
		static jint LATENCY_NORMAL();
		static jint LATENCY_VERY_HIGH();
		static jint LATENCY_VERY_LOW();
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_NORMAL();
		static jint QUALITY_VERY_HIGH();
		static jint QUALITY_VERY_LOW();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5);
		void __constructor(const QString &arg0, __jni_impl::java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getFeatures();
		jint getLatency();
		QAndroidJniObject getLocale();
		jstring getName();
		jint getQuality();
		jint hashCode();
		jboolean isNetworkConnectionRequired();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::speech::tts

#include "../../os/Parcel.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::speech::tts
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
	
	// Constructors
	void Voice::__constructor(jstring arg0, __jni_impl::java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
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
	void Voice::__constructor(const QString &arg0, __jni_impl::java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
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
	void Voice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class Voice : public __jni_impl::android::speech::tts::Voice
	{
	public:
		Voice(QAndroidJniObject obj) { __thiz = obj; }
		Voice(jstring arg0, __jni_impl::java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::speech::tts

