#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class DeniedByServerException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		DeniedByServerException(QAndroidJniObject obj);
		// Constructors
		DeniedByServerException(jstring &arg0);
		DeniedByServerException(const QString &arg0);
		DeniedByServerException() = default;
		
		// Methods
	};
} // namespace android::media

