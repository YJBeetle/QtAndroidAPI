#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AudioPresentation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPresentation_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioPresentation_Builder(QJniObject obj);
		
		// Constructors
		AudioPresentation_Builder(jint arg0);
		
		// Methods
		android::media::AudioPresentation build();
		android::media::AudioPresentation_Builder setHasAudioDescription(jboolean arg0);
		android::media::AudioPresentation_Builder setHasDialogueEnhancement(jboolean arg0);
		android::media::AudioPresentation_Builder setHasSpokenSubtitles(jboolean arg0);
		android::media::AudioPresentation_Builder setLabels(__JniBaseClass arg0);
		android::media::AudioPresentation_Builder setLocale(android::icu::util::ULocale arg0);
		android::media::AudioPresentation_Builder setMasteringIndication(jint arg0);
		android::media::AudioPresentation_Builder setProgramId(jint arg0);
	};
} // namespace android::media

