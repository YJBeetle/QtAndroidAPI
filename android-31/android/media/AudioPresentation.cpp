#include "../../java/util/Locale.hpp"
#include "./AudioPresentation.hpp"

namespace android::media
{
	// Fields
	jint AudioPresentation::CONTENT_COMMENTARY()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_COMMENTARY"
		);
	}
	jint AudioPresentation::CONTENT_DIALOG()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_DIALOG"
		);
	}
	jint AudioPresentation::CONTENT_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_EMERGENCY"
		);
	}
	jint AudioPresentation::CONTENT_HEARING_IMPAIRED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_HEARING_IMPAIRED"
		);
	}
	jint AudioPresentation::CONTENT_MAIN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_MAIN"
		);
	}
	jint AudioPresentation::CONTENT_MUSIC_AND_EFFECTS()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_MUSIC_AND_EFFECTS"
		);
	}
	jint AudioPresentation::CONTENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_UNKNOWN"
		);
	}
	jint AudioPresentation::CONTENT_VISUALLY_IMPAIRED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_VISUALLY_IMPAIRED"
		);
	}
	jint AudioPresentation::CONTENT_VOICEOVER()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_VOICEOVER"
		);
	}
	jint AudioPresentation::MASTERED_FOR_3D()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_3D"
		);
	}
	jint AudioPresentation::MASTERED_FOR_HEADPHONE()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_HEADPHONE"
		);
	}
	jint AudioPresentation::MASTERED_FOR_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_STEREO"
		);
	}
	jint AudioPresentation::MASTERED_FOR_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_SURROUND"
		);
	}
	jint AudioPresentation::MASTERING_NOT_INDICATED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERING_NOT_INDICATED"
		);
	}
	
	// QAndroidJniObject forward
	AudioPresentation::AudioPresentation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioPresentation::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass AudioPresentation::getLabels()
	{
		return callObjectMethod(
			"getLabels",
			"()Ljava/util/Map;"
		);
	}
	java::util::Locale AudioPresentation::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jint AudioPresentation::getMasteringIndication()
	{
		return callMethod<jint>(
			"getMasteringIndication",
			"()I"
		);
	}
	jint AudioPresentation::getPresentationId()
	{
		return callMethod<jint>(
			"getPresentationId",
			"()I"
		);
	}
	jint AudioPresentation::getProgramId()
	{
		return callMethod<jint>(
			"getProgramId",
			"()I"
		);
	}
	jboolean AudioPresentation::hasAudioDescription()
	{
		return callMethod<jboolean>(
			"hasAudioDescription",
			"()Z"
		);
	}
	jboolean AudioPresentation::hasDialogueEnhancement()
	{
		return callMethod<jboolean>(
			"hasDialogueEnhancement",
			"()Z"
		);
	}
	jboolean AudioPresentation::hasSpokenSubtitles()
	{
		return callMethod<jboolean>(
			"hasSpokenSubtitles",
			"()Z"
		);
	}
	jint AudioPresentation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AudioPresentation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

