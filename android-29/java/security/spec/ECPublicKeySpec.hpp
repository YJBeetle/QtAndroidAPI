#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security::spec
{
	class ECParameterSpec;
}
namespace java::security::spec
{
	class ECPoint;
}

namespace java::security::spec
{
	class ECPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		ECPublicKeySpec(QAndroidJniObject obj);
		// Constructors
		ECPublicKeySpec(java::security::spec::ECPoint arg0, java::security::spec::ECParameterSpec arg1);
		ECPublicKeySpec() = default;
		
		// Methods
		QAndroidJniObject getParams();
		QAndroidJniObject getW();
	};
} // namespace java::security::spec

