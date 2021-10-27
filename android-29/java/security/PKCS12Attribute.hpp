#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util::regex
{
	class Pattern;
}

namespace java::security
{
	class PKCS12Attribute : public __JniBaseClass
	{
	public:
		// Fields
		
		PKCS12Attribute(QAndroidJniObject obj);
		// Constructors
		PKCS12Attribute(jbyteArray &arg0);
		PKCS12Attribute(jstring &arg0, jstring &arg1);
		PKCS12Attribute(const QString &arg0, const QString &arg1);
		PKCS12Attribute() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jstring getName();
		jstring getValue();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security

