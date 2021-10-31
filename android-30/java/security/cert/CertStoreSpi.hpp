#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertStoreSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertStoreSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertStoreSpi(QJniObject obj);
		
		// Constructors
		CertStoreSpi(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass engineGetCRLs(__JniBaseClass arg0);
		__JniBaseClass engineGetCertificates(__JniBaseClass arg0);
	};
} // namespace java::security::cert

