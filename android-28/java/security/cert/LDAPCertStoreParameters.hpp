#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class LDAPCertStoreParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LDAPCertStoreParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LDAPCertStoreParameters(QAndroidJniObject obj);
		
		// Constructors
		LDAPCertStoreParameters();
		LDAPCertStoreParameters(jstring arg0);
		LDAPCertStoreParameters(jstring arg0, jint arg1);
		
		// Methods
		jobject clone();
		jint getPort();
		jstring getServerName();
		jstring toString();
	};
} // namespace java::security::cert

