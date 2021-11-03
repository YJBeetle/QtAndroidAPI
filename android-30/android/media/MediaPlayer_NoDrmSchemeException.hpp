#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class MediaPlayer_NoDrmSchemeException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer_NoDrmSchemeException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_NoDrmSchemeException(QAndroidJniObject obj);
		
		// Constructors
		MediaPlayer_NoDrmSchemeException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

