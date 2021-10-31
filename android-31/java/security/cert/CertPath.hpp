#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CertPath : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPath(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPath(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getCertificates();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		__JniBaseClass getEncodings();
		jstring getType();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security::cert

