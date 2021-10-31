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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECPublicKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ECPublicKeySpec(QAndroidJniObject obj);
		
		// Constructors
		ECPublicKeySpec(java::security::spec::ECPoint arg0, java::security::spec::ECParameterSpec arg1);
		
		// Methods
		QAndroidJniObject getParams();
		QAndroidJniObject getW();
	};
} // namespace java::security::spec

