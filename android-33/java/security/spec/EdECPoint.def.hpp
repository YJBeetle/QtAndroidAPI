#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class EdECPoint : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EdECPoint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EdECPoint(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EdECPoint(jboolean arg0, java::math::BigInteger arg1);
		
		// Methods
		java::math::BigInteger getY() const;
		jboolean isXOdd() const;
	};
} // namespace java::security::spec

