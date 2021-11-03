#pragma once

#include "../../../JObject.hpp"


namespace java::security::cert
{
	class CertPath : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPath(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPath(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		JObject getCertificates();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		JObject getEncodings();
		jstring getType();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security::cert

