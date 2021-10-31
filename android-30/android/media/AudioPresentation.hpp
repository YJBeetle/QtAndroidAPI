#pragma once

#include "../../__JniBaseClass.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPresentation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioPresentation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getLabels();
		java::util::Locale getLocale();
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

