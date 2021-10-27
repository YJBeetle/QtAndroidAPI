#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPath : public __JniBaseClass
	{
	public:
		// Fields
		
		CertPath(QAndroidJniObject obj);
		// Constructors
		CertPath() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getCertificates();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		jbyteArray getEncoded(const QString &arg0);
		QAndroidJniObject getEncodings();
		jstring getType();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security::cert

