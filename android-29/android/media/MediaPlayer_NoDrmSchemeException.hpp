#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class MediaPlayer_NoDrmSchemeException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		MediaPlayer_NoDrmSchemeException(QAndroidJniObject obj);
		// Constructors
		MediaPlayer_NoDrmSchemeException(jstring arg0);
		MediaPlayer_NoDrmSchemeException() = default;
		
		// Methods
	};
} // namespace android::media

