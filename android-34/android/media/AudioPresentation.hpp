#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./AudioPresentation.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioPresentation::CONTENT_COMMENTARY()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_COMMENTARY"
		);
	}
	inline jint AudioPresentation::CONTENT_DIALOG()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_DIALOG"
		);
	}
	inline jint AudioPresentation::CONTENT_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_EMERGENCY"
		);
	}
	inline jint AudioPresentation::CONTENT_HEARING_IMPAIRED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_HEARING_IMPAIRED"
		);
	}
	inline jint AudioPresentation::CONTENT_MAIN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_MAIN"
		);
	}
	inline jint AudioPresentation::CONTENT_MUSIC_AND_EFFECTS()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_MUSIC_AND_EFFECTS"
		);
	}
	inline jint AudioPresentation::CONTENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_UNKNOWN"
		);
	}
	inline jint AudioPresentation::CONTENT_VISUALLY_IMPAIRED()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_VISUALLY_IMPAIRED"
		);
	}
	inline jint AudioPresentation::CONTENT_VOICEOVER()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"CONTENT_VOICEOVER"
		);
	}
	inline JObject AudioPresentation::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioPresentation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
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
	inline jint AudioPresentation::PRESENTATION_ID_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"PRESENTATION_ID_UNKNOWN"
		);
	}
	inline jint AudioPresentation::PROGRAM_ID_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioPresentation",
			"PROGRAM_ID_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioPresentation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
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
	inline void AudioPresentation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
