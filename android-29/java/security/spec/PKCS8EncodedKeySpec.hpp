#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EncodedKeySpec.hpp"


namespace java::security::spec
{
	class PKCS8EncodedKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		PKCS8EncodedKeySpec(QAndroidJniObject obj);
		// Constructors
		PKCS8EncodedKeySpec(jbyteArray &arg0);
		PKCS8EncodedKeySpec(jbyteArray &arg0, jstring &arg1);
		PKCS8EncodedKeySpec(jbyteArray &arg0, const QString &arg1);
		PKCS8EncodedKeySpec() = default;
		
		// Methods
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec

