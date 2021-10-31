#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertStoreSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertStoreSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertStoreSpi(QAndroidJniObject obj);
		
		// Constructors
		CertStoreSpi(__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject engineGetCRLs(__JniBaseClass arg0);
		QAndroidJniObject engineGetCertificates(__JniBaseClass arg0);
	};
} // namespace java::security::cert

