#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPathBuilderSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPathBuilderSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilderSpi(QJniObject obj);
		
		// Constructors
		CertPathBuilderSpi();
		
		// Methods
		__JniBaseClass engineBuild(__JniBaseClass arg0);
		__JniBaseClass engineGetRevocationChecker();
	};
} // namespace java::security::cert

