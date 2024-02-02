#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
namespace java::net
{
	class URI;
}

namespace java::security::cert
{
	class URICertStoreParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URICertStoreParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URICertStoreParameters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		URICertStoreParameters(java::net::URI arg0);
		
		// Methods
		java::security::cert::URICertStoreParameters clone() const;
		jboolean equals(JObject arg0) const;
		java::net::URI getURI() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::security::cert

