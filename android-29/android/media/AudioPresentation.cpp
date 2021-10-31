#include "../icu/util/ULocale.hpp"
#include "../../java/util/Locale.hpp"
#include "./AudioPresentation.hpp"

namespace android::media
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
	QAndroidJniObject AudioPresentation::getLabels()
	{
		return callObjectMethod(
			"getLabels",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject AudioPresentation::getLocale()
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
