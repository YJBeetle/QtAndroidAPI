#pragma once

#include "../../../JObject.hpp"

class JString;
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
		static JString getDefaultType();
		static java::security::cert::CertPathBuilder getInstance(JString arg0);
		static java::security::cert::CertPathBuilder getInstance(JString arg0, JString arg1);
		static java::security::cert::CertPathBuilder getInstance(JString arg0, java::security::Provider arg1);
		JObject build(JObject arg0);
		JString getAlgorithm();
		java::security::Provider getProvider();
		JObject getRevocationChecker();
	};
} // namespace java::security::cert

