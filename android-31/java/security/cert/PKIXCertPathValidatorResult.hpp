#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class TrustAnchor;
}

namespace java::security::cert
{
	class PKIXCertPathValidatorResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PKIXCertPathValidatorResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PKIXCertPathValidatorResult(QJniObject obj);
		
		// Constructors
		PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, JObject arg1, JObject arg2);
		
		// Methods
		jobject clone();
		JObject getPolicyTree();
		JObject getPublicKey();
		java::security::cert::TrustAnchor getTrustAnchor();
		jstring toString();
	};
} // namespace java::security::cert

