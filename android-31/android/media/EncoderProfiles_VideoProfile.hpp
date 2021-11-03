#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class EncoderProfiles_VideoProfile : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncoderProfiles_VideoProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles_VideoProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getBitrate() const;
		jint getCodec() const;
		jint getFrameRate() const;
		jint getHeight() const;
		JString getMediaType() const;
		jint getProfile() const;
		jint getWidth() const;
	};
} // namespace android::media

