#pragma once

#include "../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::media
{
	class AudioPresentation;
}

namespace android::media
{
	class AudioPresentation_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPresentation_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPresentation_Builder(QJniObject obj);
		
		// Constructors
		AudioPresentation_Builder(jint arg0);
		
		// Methods
		android::media::AudioPresentation build();
		android::media::AudioPresentation_Builder setHasAudioDescription(jboolean arg0);
		android::media::AudioPresentation_Builder setHasDialogueEnhancement(jboolean arg0);
		android::media::AudioPresentation_Builder setHasSpokenSubtitles(jboolean arg0);
		android::media::AudioPresentation_Builder setLabels(JObject arg0);
		android::media::AudioPresentation_Builder setLocale(android::icu::util::ULocale arg0);
		android::media::AudioPresentation_Builder setMasteringIndication(jint arg0);
		android::media::AudioPresentation_Builder setProgramId(jint arg0);
	};
} // namespace android::media

