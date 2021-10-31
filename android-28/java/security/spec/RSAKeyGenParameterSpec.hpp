#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAKeyGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static java::math::BigInteger F0();
		static java::math::BigInteger F4();
		
		// QJniObject forward
		template<typename ...Ts> explicit RSAKeyGenParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RSAKeyGenParameterSpec(QJniObject obj);
		
		// Constructors
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1);
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1, __JniBaseClass arg2);
		
		// Methods
		__JniBaseClass getKeyParams();
		jint getKeysize();
		java::math::BigInteger getPublicExponent();
	};
} // namespace java::security::spec

