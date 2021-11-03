#pragma once

#include "../../JObject.hpp"
#include "./Number.hpp"

namespace java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace java::math
{
	class BigInteger;
}
namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Long : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jlong MAX_VALUE();
		static jlong MIN_VALUE();
		static jint SIZE();
		static jclass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Long(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Long(QJniObject obj);
		
		// Constructors
		Long(jstring arg0);
		Long(jlong arg0);
		
		// Methods
		static jint bitCount(jlong arg0);
		static jint compare(jlong arg0, jlong arg1);
		static jint compareUnsigned(jlong arg0, jlong arg1);
		static java::lang::Long decode(jstring arg0);
		static jlong divideUnsigned(jlong arg0, jlong arg1);
		static java::lang::Long getLong(jstring arg0);
		static java::lang::Long getLong(jstring arg0, java::lang::Long arg1);
		static java::lang::Long getLong(jstring arg0, jlong arg1);
		static jint hashCode(jlong arg0);
		static jlong highestOneBit(jlong arg0);
		static jlong lowestOneBit(jlong arg0);
		static jlong max(jlong arg0, jlong arg1);
		static jlong min(jlong arg0, jlong arg1);
		static jint numberOfLeadingZeros(jlong arg0);
		static jint numberOfTrailingZeros(jlong arg0);
		static jlong parseLong(jstring arg0);
		static jlong parseLong(jstring arg0, jint arg1);
		static jlong parseLong(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jlong parseUnsignedLong(jstring arg0);
		static jlong parseUnsignedLong(jstring arg0, jint arg1);
		static jlong parseUnsignedLong(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jlong remainderUnsigned(jlong arg0, jlong arg1);
		static jlong reverse(jlong arg0);
		static jlong reverseBytes(jlong arg0);
		static jlong rotateLeft(jlong arg0, jint arg1);
		static jlong rotateRight(jlong arg0, jint arg1);
		static jint signum(jlong arg0);
		static jlong sum(jlong arg0, jlong arg1);
		static jstring toBinaryString(jlong arg0);
		static jstring toHexString(jlong arg0);
		static jstring toOctalString(jlong arg0);
		static jstring toString(jlong arg0);
		static jstring toString(jlong arg0, jint arg1);
		static jstring toUnsignedString(jlong arg0);
		static jstring toUnsignedString(jlong arg0, jint arg1);
		static java::lang::Long valueOf(jstring arg0);
		static java::lang::Long valueOf(jlong arg0);
		static java::lang::Long valueOf(jstring arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Long arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		java::lang::Long resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		jstring toString();
	};
} // namespace java::lang

