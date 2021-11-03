#pragma once

#include "./EncodedKeySpec.hpp"

class JByteArray;
class JString;

namespace java::security::spec
{
	class X509EncodedKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509EncodedKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::EncodedKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		X509EncodedKeySpec(QAndroidJniObject obj);
		
		// Constructors
		X509EncodedKeySpec(JByteArray arg0);
		X509EncodedKeySpec(JByteArray arg0, JString arg1);
		
		// Methods
		JByteArray getEncoded() const;
		JString getFormat() const;
	};
} // namespace java::security::spec

