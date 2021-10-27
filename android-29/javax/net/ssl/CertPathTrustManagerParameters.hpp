#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class CertPathTrustManagerParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		CertPathTrustManagerParameters(QAndroidJniObject obj);
		// Constructors
		CertPathTrustManagerParameters(__JniBaseClass &arg0);
		CertPathTrustManagerParameters() = default;
		
		// Methods
		QAndroidJniObject getParameters();
	};
} // namespace javax::net::ssl

