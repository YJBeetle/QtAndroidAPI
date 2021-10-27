#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaCasException.hpp"


namespace android::media
{
	class MediaCasException_NotProvisionedException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		MediaCasException_NotProvisionedException(QAndroidJniObject obj);
		// Constructors
		MediaCasException_NotProvisionedException() = default;
		
		// Methods
	};
} // namespace android::media

