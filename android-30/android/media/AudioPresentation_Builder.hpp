#pragma once

#include "../icu/util/ULocale.def.hpp"
#include "./AudioPresentation.def.hpp"
#include "./AudioPresentation_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioPresentation_Builder::AudioPresentation_Builder(jint arg0)
		: JObject(
			"android.media.AudioPresentation$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::media::AudioPresentation AudioPresentation_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioPresentation;"
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setHasAudioDescription(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasAudioDescription",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setHasDialogueEnhancement(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasDialogueEnhancement",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setHasSpokenSubtitles(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasSpokenSubtitles",
			"(Z)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setLabels(JObject arg0) const
	{
		return callObjectMethod(
			"setLabels",
			"(Ljava/util/Map;)Landroid/media/AudioPresentation$Builder;",
			arg0.object()
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setLocale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/media/AudioPresentation$Builder;",
			arg0.object()
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setMasteringIndication(jint arg0) const
	{
		return callObjectMethod(
			"setMasteringIndication",
			"(I)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
	inline android::media::AudioPresentation_Builder AudioPresentation_Builder::setProgramId(jint arg0) const
	{
		return callObjectMethod(
			"setProgramId",
			"(I)Landroid/media/AudioPresentation$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

