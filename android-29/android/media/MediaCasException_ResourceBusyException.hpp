#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaCasException.hpp"


namespace android::media
{
	class MediaCasException_ResourceBusyException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		MediaCasException_ResourceBusyException(QAndroidJniObject obj);
		// Constructors
		MediaCasException_ResourceBusyException() = default;
		
		// Methods
	};
} // namespace android::media

