#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace java::security::cert
{
	class LDAPCertStoreParameters : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LDAPCertStoreParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LDAPCertStoreParameters(QAndroidJniObject obj);
		
		// Constructors
		LDAPCertStoreParameters();
		LDAPCertStoreParameters(JString arg0);
		LDAPCertStoreParameters(JString arg0, jint arg1);
		
		// Methods
		JObject clone();
		jint getPort();
		JString getServerName();
		JString toString();
	};
} // namespace java::security::cert

