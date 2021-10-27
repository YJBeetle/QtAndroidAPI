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
		
		AudioPresentation_Builder(QAndroidJniObject obj);
		// Constructors
		AudioPresentation_Builder(jint &arg0);
		AudioPresentation_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setHasAudioDescription(jboolean arg0);
		QAndroidJniObject setHasDialogueEnhancement(jboolean arg0);
		QAndroidJniObject setHasSpokenSubtitles(jboolean arg0);
		QAndroidJniObject setLabels(__JniBaseClass arg0);
		QAndroidJniObject setLocale(android::icu::util::ULocale arg0);
		QAndroidJniObject setMasteringIndication(jint arg0);
		QAndroidJniObject setProgramId(jint arg0);
	};
} // namespace android::media

