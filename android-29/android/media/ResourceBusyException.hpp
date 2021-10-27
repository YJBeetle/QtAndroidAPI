#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class ResourceBusyException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		ResourceBusyException(QAndroidJniObject obj);
		// Constructors
		ResourceBusyException(jstring &arg0);
		ResourceBusyException(const QString &arg0);
		ResourceBusyException() = default;
		
		// Methods
	};
} // namespace android::media

