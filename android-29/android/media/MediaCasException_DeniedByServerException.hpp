#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaCasException.hpp"


namespace android::media
{
	class MediaCasException_DeniedByServerException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		MediaCasException_DeniedByServerException(QAndroidJniObject obj);
		// Constructors
		MediaCasException_DeniedByServerException() = default;
		
		// Methods
	};
} // namespace android::media

