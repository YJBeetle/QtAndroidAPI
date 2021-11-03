#pragma once

#include "./Number.hpp"

class JByteArray;
class JCharArray;
class JIntArray;
class JString;
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
	class Integer : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		static jint SIZE();
		static JClass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Integer(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Integer(QAndroidJniObject obj);
		
		// Constructors
		Integer(jint arg0);
		Integer(JString arg0);
		
		// Methods
		static jint bitCount(jint arg0);
		static jint compare(jint arg0, jint arg1);
		static jint compareUnsigned(jint arg0, jint arg1);
		static java::lang::Integer decode(JString arg0);
		static jint divideUnsigned(jint arg0, jint arg1);
		static java::lang::Integer getInteger(JString arg0);
		static java::lang::Integer getInteger(JString arg0, jint arg1);
		static java::lang::Integer getInteger(JString arg0, java::lang::Integer arg1);
		static jint hashCode(jint arg0);
		static jint highestOneBit(jint arg0);
		static jint lowestOneBit(jint arg0);
		static jint max(jint arg0, jint arg1);
		static jint min(jint arg0, jint arg1);
		static jint numberOfLeadingZeros(jint arg0);
		static jint numberOfTrailingZeros(jint arg0);
		static jint parseInt(JString arg0);
		static jint parseInt(JString arg0, jint arg1);
		static jint parseInt(JString arg0, jint arg1, jint arg2, jint arg3);
		static jint parseUnsignedInt(JString arg0);
		static jint parseUnsignedInt(JString arg0, jint arg1);
		static jint parseUnsignedInt(JString arg0, jint arg1, jint arg2, jint arg3);
		static jint remainderUnsigned(jint arg0, jint arg1);
		static jint reverse(jint arg0);
		static jint reverseBytes(jint arg0);
		static jint rotateLeft(jint arg0, jint arg1);
		static jint rotateRight(jint arg0, jint arg1);
		static jint signum(jint arg0);
		static jint sum(jint arg0, jint arg1);
		static JString toBinaryString(jint arg0);
		static JString toHexString(jint arg0);
		static JString toOctalString(jint arg0);
		static JString toString(jint arg0);
		static JString toString(jint arg0, jint arg1);
		static jlong toUnsignedLong(jint arg0);
		static JString toUnsignedString(jint arg0);
		static JString toUnsignedString(jint arg0, jint arg1);
		static java::lang::Integer valueOf(jint arg0);
		static java::lang::Integer valueOf(JString arg0);
		static java::lang::Integer valueOf(JString arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Integer arg0);
		jint compareTo(JObject arg0);
		java::util::Optional describeConstable();
		jdouble doubleValue();
		jboolean equals(JObject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		java::lang::Integer resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		JString toString();
	};
} // namespace java::lang

