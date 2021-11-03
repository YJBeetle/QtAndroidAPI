#pragma once

#include "../../../JObject.hpp"


namespace java::security::cert
{
	class CertPathBuilderSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPathBuilderSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilderSpi(QJniObject obj);
		
		// Constructors
		CertPathBuilderSpi();
		
		// Methods
		JObject engineBuild(JObject arg0);
		JObject engineGetRevocationChecker();
	};
} // namespace java::security::cert

