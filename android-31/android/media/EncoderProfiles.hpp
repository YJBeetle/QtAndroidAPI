#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class EncoderProfiles : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EncoderProfiles(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getAudioProfiles();
		jint getDefaultDurationSeconds();
		jint getRecommendedFileFormat();
		__JniBaseClass getVideoProfiles();
	};
} // namespace android::media

