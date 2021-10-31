#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DHPublicKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DHPublicKeySpec(QJniObject obj);
		
		// Constructors
		DHPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		
		// Methods
		java::math::BigInteger getG();
		java::math::BigInteger getP();
		java::math::BigInteger getY();
	};
} // namespace javax::crypto::spec

