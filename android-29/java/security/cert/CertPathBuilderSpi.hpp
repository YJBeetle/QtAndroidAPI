#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPathBuilderSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		CertPathBuilderSpi(QAndroidJniObject obj);
		// Constructors
		CertPathBuilderSpi();
		
		// Methods
		QAndroidJniObject engineBuild(__JniBaseClass arg0);
		QAndroidJniObject engineGetRevocationChecker();
	};
} // namespace java::security::cert

