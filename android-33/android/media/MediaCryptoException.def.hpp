#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;

namespace android::media
{
	class MediaCryptoException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCryptoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaCryptoException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		MediaCryptoException(JString arg0);
		
		// Methods
	};
} // namespace android::media

