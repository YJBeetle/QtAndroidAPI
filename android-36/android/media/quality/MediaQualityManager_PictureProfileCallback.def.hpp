#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class PictureProfile;
}
class JString;

namespace android::media::quality
{
	class MediaQualityManager_PictureProfileCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityManager_PictureProfileCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityManager_PictureProfileCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaQualityManager_PictureProfileCallback();
		
		// Methods
		void onError(JString arg0, jint arg1) const;
		void onParameterCapabilitiesChanged(JString arg0, JObject arg1) const;
		void onPictureProfileAdded(JString arg0, android::media::quality::PictureProfile arg1) const;
		void onPictureProfileRemoved(JString arg0, android::media::quality::PictureProfile arg1) const;
		void onPictureProfileUpdated(JString arg0, android::media::quality::PictureProfile arg1) const;
	};
} // namespace android::media::quality

