#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaCasException.hpp"


namespace android::media
{
	class MediaCasException_UnsupportedCasException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException_UnsupportedCasException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_UnsupportedCasException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

