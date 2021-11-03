#pragma once

#include "../../JObject.hpp"
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
	class Integer : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		static jint SIZE();
		static jclass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Integer(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Integer(QJniObject obj);
		
		// Constructors
		Integer(jint arg0);
		Integer(jstring arg0);
		
		// Methods
		static jint bitCount(jint arg0);
		static jint compare(jint arg0, jint arg1);
		static jint compareUnsigned(jint arg0, jint arg1);
		static java::lang::Integer decode(jstring arg0);
		static jint divideUnsigned(jint arg0, jint arg1);
		static java::lang::Integer getInteger(jstring arg0);
		static java::lang::Integer getInteger(jstring arg0, jint arg1);
		static java::lang::Integer getInteger(jstring arg0, java::lang::Integer arg1);
		static jint hashCode(jint arg0);
		static jint highestOneBit(jint arg0);
		static jint lowestOneBit(jint arg0);
		static jint max(jint arg0, jint arg1);
		static jint min(jint arg0, jint arg1);
		static jint numberOfLeadingZeros(jint arg0);
		static jint numberOfTrailingZeros(jint arg0);
		static jint parseInt(jstring arg0);
		static jint parseInt(jstring arg0, jint arg1);
		static jint parseInt(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jint parseUnsignedInt(jstring arg0);
		static jint parseUnsignedInt(jstring arg0, jint arg1);
		static jint parseUnsignedInt(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jint remainderUnsigned(jint arg0, jint arg1);
		static jint reverse(jint arg0);
		static jint reverseBytes(jint arg0);
		static jint rotateLeft(jint arg0, jint arg1);
		static jint rotateRight(jint arg0, jint arg1);
		static jint signum(jint arg0);
		static jint sum(jint arg0, jint arg1);
		static jstring toBinaryString(jint arg0);
		static jstring toHexString(jint arg0);
		static jstring toOctalString(jint arg0);
		static jstring toString(jint arg0);
		static jstring toString(jint arg0, jint arg1);
		static jlong toUnsignedLong(jint arg0);
		static jstring toUnsignedString(jint arg0);
		static jstring toUnsignedString(jint arg0, jint arg1);
		static java::lang::Integer valueOf(jint arg0);
		static java::lang::Integer valueOf(jstring arg0);
		static java::lang::Integer valueOf(jstring arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Integer arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		java::lang::Integer resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		jstring toString();
	};
} // namespace java::lang

