#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class NotProvisionedException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		NotProvisionedException(QAndroidJniObject obj);
		// Constructors
		NotProvisionedException(jstring &arg0);
		NotProvisionedException(const QString &arg0);
		NotProvisionedException() = default;
		
		// Methods
	};
} // namespace android::media

