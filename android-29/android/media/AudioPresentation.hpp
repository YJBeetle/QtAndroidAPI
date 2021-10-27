#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::media
{
	class AudioPresentation : public __JniBaseClass
	{
	public:
		// Fields
		static jint MASTERED_FOR_3D();
		static jint MASTERED_FOR_HEADPHONE();
		static jint MASTERED_FOR_STEREO();
		static jint MASTERED_FOR_SURROUND();
		static jint MASTERING_NOT_INDICATED();
		
		AudioPresentation(QAndroidJniObject obj);
		// Constructors
		AudioPresentation() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getLabels();
		QAndroidJniObject getLocale();
		jint getMasteringIndication();
		jint getPresentationId();
		jint getProgramId();
		jboolean hasAudioDescription();
		jboolean hasDialogueEnhancement();
		jboolean hasSpokenSubtitles();
		jint hashCode();
		jstring toString();
	};
} // namespace android::media

