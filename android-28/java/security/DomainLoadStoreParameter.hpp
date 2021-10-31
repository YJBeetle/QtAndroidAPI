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
		
		// QJniObject forward
		template<typename ...Ts> explicit DomainLoadStoreParameter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DomainLoadStoreParameter(QJniObject obj);
		
		// Constructors
		DomainLoadStoreParameter(java::net::URI arg0, __JniBaseClass arg1);
		
		// Methods
		java::net::URI getConfiguration();
		__JniBaseClass getProtectionParameter();
		__JniBaseClass getProtectionParams();
	};
} // namespace java::security

