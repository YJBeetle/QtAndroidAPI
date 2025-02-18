#pragma once

#include "../../JObject.hpp"

namespace java::net
{
	class URI;
}

namespace java::security
{
	class DomainLoadStoreParameter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DomainLoadStoreParameter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DomainLoadStoreParameter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DomainLoadStoreParameter(java::net::URI arg0, JObject arg1);
		
		// Methods
		java::net::URI getConfiguration() const;
		JObject getProtectionParameter() const;
		JObject getProtectionParams() const;
	};
} // namespace java::security

