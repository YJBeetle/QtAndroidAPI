#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPath_CertPathRep : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPath_CertPathRep(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPath_CertPathRep(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::security::cert

