#pragma once

#include "../../../JObject.hpp"

class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CRL(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CRL(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getType();
		jboolean isRevoked(java::security::cert::Certificate arg0);
		JString toString();
	};
} // namespace java::security::cert

