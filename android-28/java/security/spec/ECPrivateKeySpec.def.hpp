#pragma once

#include "../../../JObject.hpp"

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
	class ECPrivateKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECPrivateKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECPrivateKeySpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ECPrivateKeySpec(java::math::BigInteger arg0, java::security::spec::ECParameterSpec arg1);
		
		// Methods
		java::security::spec::ECParameterSpec getParams() const;
		java::math::BigInteger getS() const;
	};
} // namespace java::security::spec

