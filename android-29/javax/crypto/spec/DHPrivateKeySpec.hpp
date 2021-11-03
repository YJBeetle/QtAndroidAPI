#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHPrivateKeySpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DHPrivateKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DHPrivateKeySpec(QAndroidJniObject obj);
		
		// Constructors
		DHPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		
		// Methods
		java::math::BigInteger getG() const;
		java::math::BigInteger getP() const;
		java::math::BigInteger getX() const;
	};
} // namespace javax::crypto::spec

