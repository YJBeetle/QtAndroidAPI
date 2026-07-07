#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class AmbientBacklightSettings;
}
namespace android::media::quality
{
	class MediaQualityManager_PictureProfileCallback;
}
namespace android::media::quality
{
	class MediaQualityManager_ProfileQueryParams;
}
namespace android::media::quality
{
	class MediaQualityManager_SoundProfileCallback;
}
namespace android::media::quality
{
	class PictureProfile;
}
namespace android::media::quality
{
	class SoundProfile;
}
class JString;

namespace android::media::quality
{
	class MediaQualityManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addActiveProcessingPictureListener(JObject arg0, JObject arg1) const;
		void createPictureProfile(android::media::quality::PictureProfile arg0) const;
		void createSoundProfile(android::media::quality::SoundProfile arg0) const;
		JObject getAvailablePictureProfiles(android::media::quality::MediaQualityManager_ProfileQueryParams arg0) const;
		JObject getAvailableSoundProfiles(android::media::quality::MediaQualityManager_ProfileQueryParams arg0) const;
		JObject getParameterCapabilities(JObject arg0) const;
		android::media::quality::PictureProfile getPictureProfile(jint arg0, JString arg1, android::media::quality::MediaQualityManager_ProfileQueryParams arg2) const;
		android::media::quality::SoundProfile getSoundProfile(jint arg0, JString arg1, android::media::quality::MediaQualityManager_ProfileQueryParams arg2) const;
		jboolean isAmbientBacklightEnabled() const;
		jboolean isAutoPictureQualityEnabled() const;
		jboolean isAutoSoundQualityEnabled() const;
		jboolean isSuperResolutionEnabled() const;
		void registerAmbientBacklightCallback(JObject arg0, JObject arg1) const;
		void registerPictureProfileCallback(JObject arg0, android::media::quality::MediaQualityManager_PictureProfileCallback arg1) const;
		void registerSoundProfileCallback(JObject arg0, android::media::quality::MediaQualityManager_SoundProfileCallback arg1) const;
		void removeActiveProcessingPictureListener(JObject arg0) const;
		void removePictureProfile(JString arg0) const;
		void removeSoundProfile(JString arg0) const;
		void setAmbientBacklightEnabled(jboolean arg0) const;
		void setAmbientBacklightSettings(android::media::quality::AmbientBacklightSettings arg0) const;
		void unregisterAmbientBacklightCallback(JObject arg0) const;
		void unregisterPictureProfileCallback(android::media::quality::MediaQualityManager_PictureProfileCallback arg0) const;
		void unregisterSoundProfileCallback(android::media::quality::MediaQualityManager_SoundProfileCallback arg0) const;
		void updatePictureProfile(JString arg0, android::media::quality::PictureProfile arg1) const;
		void updateSoundProfile(JString arg0, android::media::quality::SoundProfile arg1) const;
	};
} // namespace android::media::quality

