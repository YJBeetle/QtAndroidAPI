#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class XECPublicKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XECPublicKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XECPublicKeySpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		XECPublicKeySpec(JObject arg0, java::math::BigInteger arg1);
		
		// Methods
		JObject getParams() const;
		java::math::BigInteger getU() const;
	};
} // namespace java::security::spec

