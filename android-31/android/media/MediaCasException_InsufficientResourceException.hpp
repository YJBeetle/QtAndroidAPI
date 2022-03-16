#pragma once

#include "./MediaCasException.hpp"

namespace android::media
{
	class MediaCasException_InsufficientResourceException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException_InsufficientResourceException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_InsufficientResourceException(QAndroidJniObject obj) : android::media::MediaCasException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

