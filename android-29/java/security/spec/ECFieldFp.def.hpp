#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECFieldFp : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECFieldFp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECFieldFp(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ECFieldFp(java::math::BigInteger arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getFieldSize() const;
		java::math::BigInteger getP() const;
		jint hashCode() const;
	};
} // namespace java::security::spec

