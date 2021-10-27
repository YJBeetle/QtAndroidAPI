#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::media
{
	class MediaDrmException : public java::lang::Exception
	{
	public:
		// Fields
		
		MediaDrmException(QAndroidJniObject obj);
		// Constructors
		MediaDrmException(jstring &arg0);
		MediaDrmException(const QString &arg0);
		MediaDrmException() = default;
		
		// Methods
	};
} // namespace android::media

