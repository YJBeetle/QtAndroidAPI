#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class Certificate_CertificateRep : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Certificate_CertificateRep(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Certificate_CertificateRep(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::security::cert

