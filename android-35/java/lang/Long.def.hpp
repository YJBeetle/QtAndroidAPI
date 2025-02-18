#pragma once

#include "./Number.def.hpp"

class JByteArray;
class JString;
class JClass;
class JObject;
class JString;
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
		static JClass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Long(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Long(QJniObject obj) : java::lang::Number(obj) {}
		
		// Constructors
		Long(JString arg0);
		Long(jlong arg0);
		
		// Methods
		static jint bitCount(jlong arg0);
		static jint compare(jlong arg0, jlong arg1);
		static jint compareUnsigned(jlong arg0, jlong arg1);
		static jlong compress(jlong arg0, jlong arg1);
		static java::lang::Long decode(JString arg0);
		static jlong divideUnsigned(jlong arg0, jlong arg1);
		static jlong expand(jlong arg0, jlong arg1);
		static java::lang::Long getLong(JString arg0);
		static java::lang::Long getLong(JString arg0, java::lang::Long arg1);
		static java::lang::Long getLong(JString arg0, jlong arg1);
		static jint hashCode(jlong arg0);
		static jlong highestOneBit(jlong arg0);
		static jlong lowestOneBit(jlong arg0);
		static jlong max(jlong arg0, jlong arg1);
		static jlong min(jlong arg0, jlong arg1);
		static jint numberOfLeadingZeros(jlong arg0);
		static jint numberOfTrailingZeros(jlong arg0);
		static jlong parseLong(JString arg0);
		static jlong parseLong(JString arg0, jint arg1);
		static jlong parseLong(JString arg0, jint arg1, jint arg2, jint arg3);
		static jlong parseUnsignedLong(JString arg0);
		static jlong parseUnsignedLong(JString arg0, jint arg1);
		static jlong parseUnsignedLong(JString arg0, jint arg1, jint arg2, jint arg3);
		static jlong remainderUnsigned(jlong arg0, jlong arg1);
		static jlong reverse(jlong arg0);
		static jlong reverseBytes(jlong arg0);
		static jlong rotateLeft(jlong arg0, jint arg1);
		static jlong rotateRight(jlong arg0, jint arg1);
		static jint signum(jlong arg0);
		static jlong sum(jlong arg0, jlong arg1);
		static JString toBinaryString(jlong arg0);
		static JString toHexString(jlong arg0);
		static JString toOctalString(jlong arg0);
		static JString toString(jlong arg0);
		static JString toString(jlong arg0, jint arg1);
		static JString toUnsignedString(jlong arg0);
		static JString toUnsignedString(jlong arg0, jint arg1);
		static java::lang::Long valueOf(JString arg0);
		static java::lang::Long valueOf(jlong arg0);
		static java::lang::Long valueOf(JString arg0, jint arg1);
		jbyte byteValue() const;
		jint compareTo(java::lang::Long arg0) const;
		jint compareTo(JObject arg0) const;
		java::util::Optional describeConstable() const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		jint hashCode() const;
		jint intValue() const;
		jlong longValue() const;
		java::lang::Long resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0) const;
		jshort shortValue() const;
		JString toString() const;
	};
} // namespace java::lang

