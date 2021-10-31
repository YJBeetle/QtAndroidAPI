#include "../../java/util/Locale.hpp"
#include "./AudioPresentation.hpp"

namespace android::media
{
	// Fields
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
} // namespace android::media

