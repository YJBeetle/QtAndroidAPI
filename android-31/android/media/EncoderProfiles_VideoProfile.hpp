#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class EncoderProfiles_VideoProfile : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncoderProfiles_VideoProfile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles_VideoProfile(QAndroidJniObject obj);
		
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

