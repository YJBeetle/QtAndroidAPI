#pragma once

#include "../../JObject.hpp"

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
		static jint MASTERED_FOR_3D();
		static jint MASTERED_FOR_HEADPHONE();
		static jint MASTERED_FOR_STEREO();
		static jint MASTERED_FOR_SURROUND();
		static jint MASTERING_NOT_INDICATED();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPresentation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPresentation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getLabels() const;
		java::util::Locale getLocale() const;
		jint getMasteringIndication() const;
		jboolean hasAudioDescription() const;
		jboolean hasDialogueEnhancement() const;
		jboolean hasSpokenSubtitles() const;
	};
} // namespace android::media

