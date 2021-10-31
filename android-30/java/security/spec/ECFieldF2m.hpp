#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECFieldF2m : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECFieldF2m(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ECFieldF2m(QJniObject obj);
		
		// Constructors
		ECFieldF2m(jint arg0);
		ECFieldF2m(jint arg0, jintArray arg1);
		ECFieldF2m(jint arg0, java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFieldSize();
		jint getM();
		jintArray getMidTermsOfReductionPolynomial();
		java::math::BigInteger getReductionPolynomial();
		jint hashCode();
	};
} // namespace java::security::spec

