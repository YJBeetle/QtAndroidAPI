#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class ExtendedSSLSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExtendedSSLSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExtendedSSLSession(QJniObject obj);
		
		// Constructors
		ExtendedSSLSession();
		
		// Methods
		jarray getLocalSupportedSignatureAlgorithms();
		jarray getPeerSupportedSignatureAlgorithms();
		__JniBaseClass getRequestedServerNames();
		__JniBaseClass getStatusResponses();
	};
} // namespace javax::net::ssl

