#pragma once

#include "../../../JObject.hpp"


namespace javax::net::ssl
{
	class CertPathTrustManagerParameters : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathTrustManagerParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathTrustManagerParameters(QAndroidJniObject obj);
		
		// Constructors
		CertPathTrustManagerParameters(JObject arg0);
		
		// Methods
		JObject getParameters();
	};
} // namespace javax::net::ssl

