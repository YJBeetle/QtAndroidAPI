#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::media
{
	class AudioPresentation : public JObject
	{
	public:
		// Fields
		static jint CONTENT_COMMENTARY();
		static jint CONTENT_DIALOG();
		static jint CONTENT_EMERGENCY();
		static jint CONTENT_HEARING_IMPAIRED();
		static jint CONTENT_MAIN();
		static jint CONTENT_MUSIC_AND_EFFECTS();
		static jint CONTENT_UNKNOWN();
		static jint CONTENT_VISUALLY_IMPAIRED();
		static jint CONTENT_VOICEOVER();
		static jint MASTERED_FOR_3D();
		static jint MASTERED_FOR_HEADPHONE();
		static jint MASTERED_FOR_STEREO();
		static jint MASTERED_FOR_SURROUND();
		static jint MASTERING_NOT_INDICATED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPresentation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPresentation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getLabels();
		java::util::Locale getLocale();
		jint getMasteringIndication();
		jint getPresentationId();
		jint getProgramId();
		jboolean hasAudioDescription();
		jboolean hasDialogueEnhancement();
		jboolean hasSpokenSubtitles();
		jint hashCode();
		JString toString();
	};
} // namespace android::media

