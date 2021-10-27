#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace android::media
{
	class MediaDrm_MediaDrmStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		MediaDrm_MediaDrmStateException(QAndroidJniObject obj);
		// Constructors
		MediaDrm_MediaDrmStateException() = default;
		
		// Methods
		jstring getDiagnosticInfo();
	};
} // namespace android::media

