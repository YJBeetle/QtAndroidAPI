#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class CertPathBuilderSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathBuilderSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilderSpi(QAndroidJniObject obj);
		
		// Constructors
		CertPathBuilderSpi();
		
		// Methods
		JObject engineBuild(JObject arg0);
		JObject engineGetRevocationChecker();
	};
} // namespace java::security::cert

