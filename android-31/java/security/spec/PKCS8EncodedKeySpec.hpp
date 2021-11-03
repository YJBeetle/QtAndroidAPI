#pragma once

#include "./EncodedKeySpec.hpp"

class JByteArray;
class JString;

namespace java::security::spec
{
	class PKCS8EncodedKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PKCS8EncodedKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::EncodedKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		PKCS8EncodedKeySpec(QJniObject obj);
		
		// Constructors
		PKCS8EncodedKeySpec(JByteArray arg0);
		PKCS8EncodedKeySpec(JByteArray arg0, JString arg1);
		
		// Methods
		JByteArray getEncoded();
		JString getFormat();
	};
} // namespace java::security::spec

