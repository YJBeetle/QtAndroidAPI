#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::media
{
	class MediaCryptoException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCryptoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaCryptoException(QAndroidJniObject obj);
		
		// Constructors
		MediaCryptoException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

