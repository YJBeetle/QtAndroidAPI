#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class URI;
}

namespace java::security
{
	class DomainLoadStoreParameter : public __JniBaseClass
	{
	public:
		// Fields
		
		DomainLoadStoreParameter(QAndroidJniObject obj);
		// Constructors
		DomainLoadStoreParameter(java::net::URI &arg0, __JniBaseClass &arg1);
		DomainLoadStoreParameter() = default;
		
		// Methods
		QAndroidJniObject getConfiguration();
		QAndroidJniObject getProtectionParameter();
		QAndroidJniObject getProtectionParams();
	};
} // namespace java::security

