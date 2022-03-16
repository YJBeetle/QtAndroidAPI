#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CertPath;
}
namespace java::security::cert
{
	class CertPathValidatorSpi;
}

namespace java::security::cert
{
	class CertPathValidator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getDefaultType();
		static java::security::cert::CertPathValidator getInstance(JString arg0);
		static java::security::cert::CertPathValidator getInstance(JString arg0, JString arg1);
		static java::security::cert::CertPathValidator getInstance(JString arg0, java::security::Provider arg1);
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		JObject getRevocationChecker() const;
		JObject validate(java::security::cert::CertPath arg0, JObject arg1) const;
	};
} // namespace java::security::cert

