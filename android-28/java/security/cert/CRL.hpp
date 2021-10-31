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
		
		// QJniObject forward
		template<typename ...Ts> explicit CRL(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CRL(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getType();
		jboolean isRevoked(java::security::cert::Certificate arg0);
		jstring toString();
	};
} // namespace java::security::cert

