#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CertPathBuilderSpi;
}

namespace java::security::cert
{
	class CertPathBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultType();
		static java::security::cert::CertPathBuilder getInstance(jstring arg0);
		static java::security::cert::CertPathBuilder getInstance(jstring arg0, jstring arg1);
		static java::security::cert::CertPathBuilder getInstance(jstring arg0, java::security::Provider arg1);
		JObject build(JObject arg0);
		jstring getAlgorithm();
		java::security::Provider getProvider();
		JObject getRevocationChecker();
	};
} // namespace java::security::cert

