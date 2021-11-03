#pragma once

#include "./MediaDrmException.hpp"

class JString;

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
		MediaPlayer_NoDrmSchemeException(JString arg0);
		
		// Methods
	};
} // namespace android::media

