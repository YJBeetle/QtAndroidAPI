#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Number.hpp"

namespace java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Double : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jint MAX_EXPONENT();
		static jdouble MAX_VALUE();
		static jint MIN_EXPONENT();
		static jdouble MIN_NORMAL();
		static jdouble MIN_VALUE();
		static jdouble NEGATIVE_INFINITY();
		static jdouble NaN();
		static jdouble POSITIVE_INFINITY();
		static jint SIZE();
		static jclass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Double(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Double(QAndroidJniObject obj);
		
		// Constructors
		Double(jdouble arg0);
		Double(jstring arg0);
		
		// Methods
		static jint compare(jdouble arg0, jdouble arg1);
		static jlong doubleToLongBits(jdouble arg0);
		static jlong doubleToRawLongBits(jdouble arg0);
		static jint hashCode(jdouble arg0);
		static jboolean isFinite(jdouble arg0);
		static jboolean isInfinite(jdouble arg0);
		static jboolean isNaN(jdouble arg0);
		static jdouble longBitsToDouble(jlong arg0);
		static jdouble max(jdouble arg0, jdouble arg1);
		static jdouble min(jdouble arg0, jdouble arg1);
		static jdouble parseDouble(jstring arg0);
		static jdouble sum(jdouble arg0, jdouble arg1);
		static jstring toHexString(jdouble arg0);
		static jstring toString(jdouble arg0);
		static java::lang::Double valueOf(jdouble arg0);
		static java::lang::Double valueOf(jstring arg0);
		jbyte byteValue();
		jint compareTo(java::lang::Double arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jboolean isInfinite();
		jboolean isNaN();
		jlong longValue();
		java::lang::Double resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		jstring toString();
	};
} // namespace java::lang

