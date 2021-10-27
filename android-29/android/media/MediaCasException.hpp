#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::media
{
	class MediaCasException : public java::lang::Exception
	{
	public:
		// Fields
		
		MediaCasException(QAndroidJniObject obj);
		// Constructors
		MediaCasException() = default;
		
		// Methods
	};
} // namespace android::media

