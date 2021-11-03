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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPresentation_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPresentation_Builder(QAndroidJniObject obj);
		
		// Constructors
		AudioPresentation_Builder(jint arg0);
		
		// Methods
		android::media::AudioPresentation build() const;
		android::media::AudioPresentation_Builder setHasAudioDescription(jboolean arg0) const;
		android::media::AudioPresentation_Builder setHasDialogueEnhancement(jboolean arg0) const;
		android::media::AudioPresentation_Builder setHasSpokenSubtitles(jboolean arg0) const;
		android::media::AudioPresentation_Builder setLabels(JObject arg0) const;
		android::media::AudioPresentation_Builder setLocale(android::icu::util::ULocale arg0) const;
		android::media::AudioPresentation_Builder setMasteringIndication(jint arg0) const;
		android::media::AudioPresentation_Builder setProgramId(jint arg0) const;
	};
} // namespace android::media

