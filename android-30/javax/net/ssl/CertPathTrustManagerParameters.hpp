#pragma once

#include "../../../JObject.hpp"

namespace javax::net::ssl
{
	class CertPathTrustManagerParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPathTrustManagerParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathTrustManagerParameters(QJniObject obj);
		
		// Constructors
		CertPathTrustManagerParameters(JObject arg0);
		
		// Methods
		JObject getParameters() const;
	};
} // namespace javax::net::ssl

