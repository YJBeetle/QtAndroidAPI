#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPath : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPath(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPath(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getCertificates();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		QAndroidJniObject getEncodings();
		jstring getType();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security::cert

