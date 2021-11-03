#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security::cert
{
	class CRL : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CRL(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CRL(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getType();
		jboolean isRevoked(java::security::cert::Certificate arg0);
		jstring toString();
	};
} // namespace java::security::cert

