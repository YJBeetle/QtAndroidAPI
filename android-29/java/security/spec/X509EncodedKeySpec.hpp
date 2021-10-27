#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EncodedKeySpec.hpp"


namespace java::security::spec
{
	class X509EncodedKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		X509EncodedKeySpec(QAndroidJniObject obj);
		// Constructors
		X509EncodedKeySpec(jbyteArray &arg0);
		X509EncodedKeySpec(jbyteArray &arg0, jstring &arg1);
		X509EncodedKeySpec(jbyteArray &arg0, const QString &arg1);
		X509EncodedKeySpec() = default;
		
		// Methods
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec

