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
		
		ECPrivateKeySpec(QAndroidJniObject obj);
		// Constructors
		ECPrivateKeySpec(java::math::BigInteger &arg0, java::security::spec::ECParameterSpec &arg1);
		ECPrivateKeySpec() = default;
		
		// Methods
		QAndroidJniObject getParams();
		QAndroidJniObject getS();
	};
} // namespace java::security::spec

