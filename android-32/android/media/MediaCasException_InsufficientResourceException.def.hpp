#pragma once

#include "./MediaCasException.def.hpp"

namespace android::media
{
	class MediaCasException_InsufficientResourceException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCasException_InsufficientResourceException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_InsufficientResourceException(QJniObject obj) : android::media::MediaCasException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

