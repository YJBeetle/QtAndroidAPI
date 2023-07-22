#pragma once

#include "./Number.def.hpp"

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
	class Float : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jint MAX_EXPONENT();
		static jfloat MAX_VALUE();
		static jint MIN_EXPONENT();
		static jfloat MIN_NORMAL();
		static jfloat MIN_VALUE();
		static jfloat NEGATIVE_INFINITY();
		static jfloat NaN();
		static jfloat POSITIVE_INFINITY();
		static jint PRECISION();
		static jint SIZE();
		static JClass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Float(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Float(QJniObject obj) : java::lang::Number(obj) {}
		
		// Constructors
		Float(jdouble arg0);
		Float(jfloat arg0);
		Float(JString arg0);
		
		// Methods
		static jint compare(jfloat arg0, jfloat arg1);
		static jfloat float16ToFloat(jshort arg0);
		static jshort floatToFloat16(jfloat arg0);
		static jint floatToIntBits(jfloat arg0);
		static jint floatToRawIntBits(jfloat arg0);
		static jint hashCode(jfloat arg0);
		static jfloat intBitsToFloat(jint arg0);
		static jboolean isFinite(jfloat arg0);
		static jboolean isInfinite(jfloat arg0);
		static jboolean isNaN(jfloat arg0);
		static jfloat max(jfloat arg0, jfloat arg1);
		static jfloat min(jfloat arg0, jfloat arg1);
		static jfloat parseFloat(JString arg0);
		static jfloat sum(jfloat arg0, jfloat arg1);
		static JString toHexString(jfloat arg0);
		static JString toString(jfloat arg0);
		static java::lang::Float valueOf(jfloat arg0);
		static java::lang::Float valueOf(JString arg0);
		jbyte byteValue() const;
		jint compareTo(java::lang::Float arg0) const;
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
		java::lang::Float resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const;
		jshort shortValue() const;
		JString toString() const;
	};
} // namespace java::lang

