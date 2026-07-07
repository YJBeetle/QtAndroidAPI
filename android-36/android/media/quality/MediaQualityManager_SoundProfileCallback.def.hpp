#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class SoundProfile;
}
class JString;

namespace android::media::quality
{
	class MediaQualityManager_SoundProfileCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityManager_SoundProfileCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityManager_SoundProfileCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaQualityManager_SoundProfileCallback();
		
		// Methods
		void onError(JString arg0, jint arg1) const;
		void onParameterCapabilitiesChanged(JString arg0, JObject arg1) const;
		void onSoundProfileAdded(JString arg0, android::media::quality::SoundProfile arg1) const;
		void onSoundProfileRemoved(JString arg0, android::media::quality::SoundProfile arg1) const;
		void onSoundProfileUpdated(JString arg0, android::media::quality::SoundProfile arg1) const;
	};
} // namespace android::media::quality

