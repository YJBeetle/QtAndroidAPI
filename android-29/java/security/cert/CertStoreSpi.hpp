#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class CertStoreSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertStoreSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertStoreSpi(QJniObject obj);
		
		// Constructors
		CertStoreSpi(JObject arg0);
		
		// Methods
		JObject engineGetCRLs(JObject arg0) const;
		JObject engineGetCertificates(JObject arg0) const;
	};
} // namespace java::security::cert

