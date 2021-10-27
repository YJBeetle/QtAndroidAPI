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
		
		MediaCasException_UnsupportedCasException(QAndroidJniObject obj);
		// Constructors
		MediaCasException_UnsupportedCasException() = default;
		
		// Methods
	};
} // namespace android::media

