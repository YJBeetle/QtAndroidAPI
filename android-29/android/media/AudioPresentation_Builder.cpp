#include "../icu/util/ULocale.hpp"
#include "./AudioPresentation.hpp"
#include "./AudioPresentation_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioPresentation_Builder::AudioPresentation_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioPresentation_Builder::AudioPresentation_Builder(jint arg0)
		: __JniBaseClass(
			"android.media.AudioPresentation$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject AudioPresentation_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioPresentation;"
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setHasAudioDescription(jboolean arg0)
	{
		return callObjectMethod(
			"setHasAudioDescription",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setHasDialogueEnhancement(jboolean arg0)
	{
		return callObjectMethod(
			"setHasDialogueEnhancement",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setHasSpokenSubtitles(jboolean arg0)
	{
		return callObjectMethod(
			"setHasSpokenSubtitles",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setLabels(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setLabels",
			"(Ljava/util/Map;)Landroid/media/AudioPresentation$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setLocale(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/media/AudioPresentation$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setMasteringIndication(jint arg0)
	{
		return callObjectMethod(
			"setMasteringIndication",
			"(I)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioPresentation_Builder::setProgramId(jint arg0)
	{
		return callObjectMethod(
			"setProgramId",
			"(I)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
} // namespace android::media

