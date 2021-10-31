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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_NoDrmSchemeException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_NoDrmSchemeException(QJniObject obj);
		
		// Constructors
		MediaPlayer_NoDrmSchemeException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

