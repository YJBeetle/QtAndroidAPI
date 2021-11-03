#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// QJniObject forward
	AudioPresentation::AudioPresentation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioPresentation::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AudioPresentation::getLabels()
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
	JString AudioPresentation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

