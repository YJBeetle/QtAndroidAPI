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
		
		// QJniObject forward
		template<typename ...Ts> explicit ECPublicKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ECPublicKeySpec(QJniObject obj);
		
		// Constructors
		ECPublicKeySpec(java::security::spec::ECPoint arg0, java::security::spec::ECParameterSpec arg1);
		
		// Methods
		java::security::spec::ECParameterSpec getParams();
		java::security::spec::ECPoint getW();
	};
} // namespace java::security::spec

