#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class UnsupportedSchemeException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		UnsupportedSchemeException(QAndroidJniObject obj);
		// Constructors
		UnsupportedSchemeException(jstring &arg0);
		UnsupportedSchemeException(const QString &arg0);
		UnsupportedSchemeException() = default;
		
		// Methods
	};
} // namespace android::media

