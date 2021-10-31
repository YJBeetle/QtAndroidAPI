#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class CertPathTrustManagerParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathTrustManagerParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPathTrustManagerParameters(QAndroidJniObject obj);
		
		// Constructors
		CertPathTrustManagerParameters(__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getParameters();
	};
} // namespace javax::net::ssl

