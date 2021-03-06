#pragma once

#ifndef ANDROID_MEDIA_AUDIOPRESENTATION
#define ANDROID_MEDIA_AUDIOPRESENTATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::media
{
	class AudioPresentation : public __JniBaseClass
	{
	public:
		// Fields
		static jint MASTERED_FOR_3D();
		static jint MASTERED_FOR_HEADPHONE();
		static jint MASTERED_FOR_STEREO();
		static jint MASTERED_FOR_SURROUND();
		static jint MASTERING_NOT_INDICATED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getLocale();
		jint getPresentationId();
		jint getProgramId();
		QAndroidJniObject getLabels();
		jint getMasteringIndication();
		jboolean hasAudioDescription();
		jboolean hasSpokenSubtitles();
		jboolean hasDialogueEnhancement();
	};
} // namespace __jni_impl::android::media

#include "../icu/util/ULocale.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint AudioPresentation::MASTERED_FOR_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_3D"
		);
	}
	jint AudioPresentation::MASTERED_FOR_HEADPHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_HEADPHONE"
		);
	}
	jint AudioPresentation::MASTERED_FOR_STEREO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_STEREO"
		);
	}
	jint AudioPresentation::MASTERED_FOR_SURROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_SURROUND"
		);
	}
	jint AudioPresentation::MASTERING_NOT_INDICATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERING_NOT_INDICATED"
		);
	}
	
	// Constructors
	void AudioPresentation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioPresentation",
			"(V)V");
	}
	
	// Methods
	jboolean AudioPresentation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AudioPresentation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioPresentation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject AudioPresentation::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jint AudioPresentation::getPresentationId()
	{
		return __thiz.callMethod<jint>(
			"getPresentationId",
			"()I"
		);
	}
	jint AudioPresentation::getProgramId()
	{
		return __thiz.callMethod<jint>(
			"getProgramId",
			"()I"
		);
	}
	QAndroidJniObject AudioPresentation::getLabels()
	{
		return __thiz.callObjectMethod(
			"getLabels",
			"()Ljava/util/Map;"
		);
	}
	jint AudioPresentation::getMasteringIndication()
	{
		return __thiz.callMethod<jint>(
			"getMasteringIndication",
			"()I"
		);
	}
	jboolean AudioPresentation::hasAudioDescription()
	{
		return __thiz.callMethod<jboolean>(
			"hasAudioDescription",
			"()Z"
		);
	}
	jboolean AudioPresentation::hasSpokenSubtitles()
	{
		return __thiz.callMethod<jboolean>(
			"hasSpokenSubtitles",
			"()Z"
		);
	}
	jboolean AudioPresentation::hasDialogueEnhancement()
	{
		return __thiz.callMethod<jboolean>(
			"hasDialogueEnhancement",
			"()Z"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioPresentation : public __jni_impl::android::media::AudioPresentation
	{
	public:
		AudioPresentation(QAndroidJniObject obj) { __thiz = obj; }
		AudioPresentation()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOPRESENTATION

