#include "../icu/util/ULocale.hpp"
#include "./AudioPresentation.hpp"
#include "./AudioPresentation_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioPresentation_Builder::AudioPresentation_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioPresentation_Builder::AudioPresentation_Builder(jint arg0)
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
	QAndroidJniObject AudioPresentation_Builder::setLabels(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setLabels",
			"(Ljava/util/Map;)Landroid/media/AudioPresentation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setLocale(android::icu::util::ULocale arg0)
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
} // namespace android::media

