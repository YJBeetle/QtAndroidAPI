#pragma once

#include "./MediaCasException.hpp"

class JString;

namespace android::media
{
	class MediaCasException_UnsupportedCasException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException_UnsupportedCasException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_UnsupportedCasException(QAndroidJniObject obj) : android::media::MediaCasException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

