#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
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
		PKIXCertPathValidatorResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, JObject arg1, JObject arg2);
		
		// Methods
		JObject clone() const;
		JObject getPolicyTree() const;
		JObject getPublicKey() const;
		java::security::cert::TrustAnchor getTrustAnchor() const;
		JString toString() const;
	};
} // namespace java::security::cert

