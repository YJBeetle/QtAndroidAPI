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
		static QAndroidJniObject F0();
		static QAndroidJniObject F4();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAKeyGenParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RSAKeyGenParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1);
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1, __JniBaseClass arg2);
		
		// Methods
		QAndroidJniObject getKeyParams();
		jint getKeysize();
		QAndroidJniObject getPublicExponent();
	};
} // namespace java::security::spec

