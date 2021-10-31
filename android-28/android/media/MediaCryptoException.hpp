#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::media
{
	class MediaCryptoException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCryptoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaCryptoException(QJniObject obj);
		
		// Constructors
		MediaCryptoException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

