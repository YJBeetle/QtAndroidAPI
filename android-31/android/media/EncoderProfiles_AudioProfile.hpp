#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class EncoderProfiles_AudioProfile : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncoderProfiles_AudioProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles_AudioProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getBitrate();
		jint getChannels();
		jint getCodec();
		jstring getMediaType();
		jint getProfile();
		jint getSampleRate();
	};
} // namespace android::media

