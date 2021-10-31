#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EncodedKeySpec.hpp"


namespace java::security::spec
{
	class X509EncodedKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509EncodedKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::EncodedKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		X509EncodedKeySpec(QJniObject obj);
		
		// Constructors
		X509EncodedKeySpec(jbyteArray arg0);
		X509EncodedKeySpec(jbyteArray arg0, jstring arg1);
		
		// Methods
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec

