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
		
		// QJniObject forward
		template<typename ...Ts> explicit CRL(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CRL(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getType() const;
		jboolean isRevoked(java::security::cert::Certificate arg0) const;
		JString toString() const;
	};
} // namespace java::security::cert

