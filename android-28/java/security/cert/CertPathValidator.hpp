#pragma once

#include "../../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPathValidator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultType();
		static java::security::cert::CertPathValidator getInstance(jstring arg0);
		static java::security::cert::CertPathValidator getInstance(jstring arg0, jstring arg1);
		static java::security::cert::CertPathValidator getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		java::security::Provider getProvider();
		JObject getRevocationChecker();
		JObject validate(java::security::cert::CertPath arg0, JObject arg1);
	};
} // namespace java::security::cert

