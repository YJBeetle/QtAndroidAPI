#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::media
{
	class MediaCryptoException : public java::lang::Exception
	{
	public:
		// Fields
		
		MediaCryptoException(QAndroidJniObject obj);
		// Constructors
		MediaCryptoException(jstring &arg0);
		MediaCryptoException(const QString &arg0);
		MediaCryptoException() = default;
		
		// Methods
	};
} // namespace android::media

