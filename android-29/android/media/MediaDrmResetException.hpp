#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace android::media
{
	class MediaDrmResetException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		MediaDrmResetException(QAndroidJniObject obj);
		// Constructors
		MediaDrmResetException(jstring arg0);
		MediaDrmResetException() = default;
		
		// Methods
	};
} // namespace android::media

