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
		static jint SIZE();
		static JClass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Float(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Float(QAndroidJniObject obj);
		
		// Constructors
		Float(jdouble arg0);
		Float(jfloat arg0);
		Float(JString arg0);
		
		// Methods
		static jint compare(jfloat arg0, jfloat arg1);
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
		jbyte byteValue();
		jint compareTo(java::lang::Float arg0);
		jint compareTo(JObject arg0);
		java::util::Optional describeConstable();
		jdouble doubleValue();
		jboolean equals(JObject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jboolean isInfinite();
		jboolean isNaN();
		jlong longValue();
		java::lang::Float resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		JString toString();
	};
} // namespace java::lang

