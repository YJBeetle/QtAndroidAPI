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
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPathBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getDefaultType();
		static java::security::cert::CertPathBuilder getInstance(JString arg0);
		static java::security::cert::CertPathBuilder getInstance(JString arg0, JString arg1);
		static java::security::cert::CertPathBuilder getInstance(JString arg0, java::security::Provider arg1);
		JObject build(JObject arg0) const;
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		JObject getRevocationChecker() const;
	};
} // namespace java::security::cert

