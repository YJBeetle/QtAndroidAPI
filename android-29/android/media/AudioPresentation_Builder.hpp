#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::media
{
	class AudioPresentation;
}

namespace __jni_impl::android::media
{
	class AudioPresentation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setHasAudioDescription(jboolean arg0);
		QAndroidJniObject setHasDialogueEnhancement(jboolean arg0);
		QAndroidJniObject setHasSpokenSubtitles(jboolean arg0);
		QAndroidJniObject setLabels(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setLocale(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject setMasteringIndication(jint arg0);
		QAndroidJniObject setProgramId(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "../icu/util/ULocale.hpp"
#include "AudioPresentation.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioPresentation_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioPresentation$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject AudioPresentation_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioPresentation;"
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setHasAudioDescription(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHasAudioDescription",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setHasDialogueEnhancement(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHasDialogueEnhancement",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setHasSpokenSubtitles(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHasSpokenSubtitles",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setLabels(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setLabels",
			"(Ljava/util/Map;)Landroid/media/AudioPresentation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/media/AudioPresentation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setMasteringIndication(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMasteringIndication",
			"(I)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setProgramId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setProgramId",
			"(I)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioPresentation_Builder : public __jni_impl::android::media::AudioPresentation_Builder
	{
	public:
		AudioPresentation_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioPresentation_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

