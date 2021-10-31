#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPathBuilderSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathBuilderSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilderSpi(QAndroidJniObject obj);
		
		// Constructors
		CertPathBuilderSpi();
		
		// Methods
		QAndroidJniObject engineBuild(__JniBaseClass arg0);
		QAndroidJniObject engineGetRevocationChecker();
	};
} // namespace java::security::cert

