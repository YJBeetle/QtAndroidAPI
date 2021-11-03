#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DHParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DHParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, jint arg2);
		
		// Methods
		java::math::BigInteger getG() const;
		jint getL() const;
		java::math::BigInteger getP() const;
	};
} // namespace javax::crypto::spec

