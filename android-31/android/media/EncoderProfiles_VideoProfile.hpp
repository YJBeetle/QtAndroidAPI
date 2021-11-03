#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class EncoderProfiles_VideoProfile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EncoderProfiles_VideoProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles_VideoProfile(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getBitrate();
		jint getCodec();
		jint getFrameRate();
		jint getHeight();
		jstring getMediaType();
		jint getProfile();
		jint getWidth();
	};
} // namespace android::media

