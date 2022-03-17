#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./AudioPresentation.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioPresentation::MASTERED_FOR_3D()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_3D"
		);
	}
	inline jint AudioPresentation::MASTERED_FOR_HEADPHONE()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_HEADPHONE"
		);
	}
	inline jint AudioPresentation::MASTERED_FOR_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_STEREO"
		);
	}
	inline jint AudioPresentation::MASTERED_FOR_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERED_FOR_SURROUND"
		);
	}
	inline jint AudioPresentation::MASTERING_NOT_INDICATED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"MASTERING_NOT_INDICATED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AudioPresentation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AudioPresentation::getLabels() const
	{
		return callObjectMethod(
			"getLabels",
			"()Ljava/util/Map;"
		);
	}
	inline java::util::Locale AudioPresentation::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline jint AudioPresentation::getMasteringIndication() const
	{
		return callMethod<jint>(
			"getMasteringIndication",
			"()I"
		);
	}
	inline jint AudioPresentation::getPresentationId() const
	{
		return callMethod<jint>(
			"getPresentationId",
			"()I"
		);
	}
	inline jint AudioPresentation::getProgramId() const
	{
		return callMethod<jint>(
			"getProgramId",
			"()I"
		);
	}
	inline jboolean AudioPresentation::hasAudioDescription() const
	{
		return callMethod<jboolean>(
			"hasAudioDescription",
			"()Z"
		);
	}
	inline jboolean AudioPresentation::hasDialogueEnhancement() const
	{
		return callMethod<jboolean>(
			"hasDialogueEnhancement",
			"()Z"
		);
	}
	inline jboolean AudioPresentation::hasSpokenSubtitles() const
	{
		return callMethod<jboolean>(
			"hasSpokenSubtitles",
			"()Z"
		);
	}
	inline jint AudioPresentation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AudioPresentation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

