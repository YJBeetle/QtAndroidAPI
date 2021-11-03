#pragma once

#include "../../../JObject.hpp"


namespace java::security::cert
{
	class CertPath_CertPathRep : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPath_CertPathRep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPath_CertPathRep(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::security::cert

