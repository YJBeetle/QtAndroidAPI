#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioFormat;
}

namespace android::media
{
	class Spatializer : public JObject
	{
	public:
		// Fields
		static jint SPATIALIZER_IMMERSIVE_LEVEL_MULTICHANNEL();
		static jint SPATIALIZER_IMMERSIVE_LEVEL_NONE();
		static jint SPATIALIZER_IMMERSIVE_LEVEL_OTHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Spatializer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Spatializer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addOnHeadTrackerAvailableListener(JObject arg0, JObject arg1) const;
		void addOnSpatializerStateChangedListener(JObject arg0, JObject arg1) const;
		jboolean canBeSpatialized(android::media::AudioAttributes arg0, android::media::AudioFormat arg1) const;
		jint getImmersiveAudioLevel() const;
		jboolean isAvailable() const;
		jboolean isEnabled() const;
		jboolean isHeadTrackerAvailable() const;
		void removeOnHeadTrackerAvailableListener(JObject arg0) const;
		void removeOnSpatializerStateChangedListener(JObject arg0) const;
	};
} // namespace android::media

