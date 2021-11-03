#pragma once

#include "./Number.hpp"

class JClass;
class JObject;
class JString;
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
		static JClass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Double(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Double(QAndroidJniObject obj);
		
		// Constructors
		Double(jdouble arg0);
		Double(JString arg0);
		
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
		static jdouble parseDouble(JString arg0);
		static jdouble sum(jdouble arg0, jdouble arg1);
		static JString toHexString(jdouble arg0);
		static JString toString(jdouble arg0);
		static java::lang::Double valueOf(jdouble arg0);
		static java::lang::Double valueOf(JString arg0);
		jbyte byteValue() const;
		jint compareTo(java::lang::Double arg0) const;
		jint compareTo(JObject arg0) const;
		java::util::Optional describeConstable() const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		jint hashCode() const;
		jint intValue() const;
		jboolean isInfinite() const;
		jboolean isNaN() const;
		jlong longValue() const;
		java::lang::Double resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const;
		jshort shortValue() const;
		JString toString() const;
	};
} // namespace java::lang

