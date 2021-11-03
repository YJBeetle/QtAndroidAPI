#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class EncoderProfiles : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncoderProfiles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAudioProfiles();
		jint getDefaultDurationSeconds();
		jint getRecommendedFileFormat();
		JObject getVideoProfiles();
	};
} // namespace android::media

