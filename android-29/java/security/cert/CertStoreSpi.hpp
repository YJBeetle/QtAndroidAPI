#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertStoreSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		CertStoreSpi(QAndroidJniObject obj);
		// Constructors
		CertStoreSpi(__JniBaseClass arg0);
		CertStoreSpi() = default;
		
		// Methods
		QAndroidJniObject engineGetCRLs(__JniBaseClass arg0);
		QAndroidJniObject engineGetCertificates(__JniBaseClass arg0);
	};
} // namespace java::security::cert

