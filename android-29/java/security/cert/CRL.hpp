#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security::cert
{
	class CRL : public __JniBaseClass
	{
	public:
		// Fields
		
		CRL(QAndroidJniObject obj);
		// Constructors
		CRL() = default;
		
		// Methods
		jstring getType();
		jboolean isRevoked(java::security::cert::Certificate arg0);
		jstring toString();
	};
} // namespace java::security::cert

