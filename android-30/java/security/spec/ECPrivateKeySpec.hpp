#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security::spec
{
	class ECParameterSpec;
}

namespace java::security::spec
{
	class ECPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECPrivateKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ECPrivateKeySpec(QAndroidJniObject obj);
		
		// Constructors
		ECPrivateKeySpec(java::math::BigInteger arg0, java::security::spec::ECParameterSpec arg1);
		
		// Methods
		java::security::spec::ECParameterSpec getParams();
		java::math::BigInteger getS();
	};
} // namespace java::security::spec

