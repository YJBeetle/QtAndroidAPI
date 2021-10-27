#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::media
{
	class MediaDrm_SessionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_RESOURCE_CONTENTION();
		static jint ERROR_UNKNOWN();
		
		MediaDrm_SessionException(QAndroidJniObject obj);
		// Constructors
		MediaDrm_SessionException(jint &arg0, jstring &arg1);
		MediaDrm_SessionException(jint &arg0, const QString &arg1);
		MediaDrm_SessionException() = default;
		
		// Methods
		jint getErrorCode();
	};
} // namespace android::media

