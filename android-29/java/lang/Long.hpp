#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		Long(QAndroidJniObject obj);
		// Constructors
		Long(jstring &arg0);
		Long(const QString &arg0);
		Long(jlong &arg0);
		Long() = default;
		
		// Methods
		static jint bitCount(jlong arg0);
		static jint compare(jlong arg0, jlong arg1);
		static jint compareUnsigned(jlong arg0, jlong arg1);
		static QAndroidJniObject decode(jstring arg0);
		static QAndroidJniObject decode(const QString &arg0);
		static jlong divideUnsigned(jlong arg0, jlong arg1);
		static QAndroidJniObject getLong(jstring arg0);
		static QAndroidJniObject getLong(const QString &arg0);
		static QAndroidJniObject getLong(jstring arg0, java::lang::Long arg1);
		static QAndroidJniObject getLong(const QString &arg0, java::lang::Long arg1);
		static QAndroidJniObject getLong(jstring arg0, jlong arg1);
		static QAndroidJniObject getLong(const QString &arg0, jlong arg1);
		static jint hashCode(jlong arg0);
		static jlong highestOneBit(jlong arg0);
		static jlong lowestOneBit(jlong arg0);
		static jlong max(jlong arg0, jlong arg1);
		static jlong min(jlong arg0, jlong arg1);
		static jint numberOfLeadingZeros(jlong arg0);
		static jint numberOfTrailingZeros(jlong arg0);
		static jlong parseLong(jstring arg0);
		static jlong parseLong(const QString &arg0);
		static jlong parseLong(jstring arg0, jint arg1);
		static jlong parseLong(const QString &arg0, jint arg1);
		static jlong parseLong(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jlong parseLong(const QString &arg0, jint arg1, jint arg2, jint arg3);
		static jlong parseUnsignedLong(jstring arg0);
		static jlong parseUnsignedLong(const QString &arg0);
		static jlong parseUnsignedLong(jstring arg0, jint arg1);
		static jlong parseUnsignedLong(const QString &arg0, jint arg1);
		static jlong parseUnsignedLong(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jlong parseUnsignedLong(const QString &arg0, jint arg1, jint arg2, jint arg3);
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
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jstring arg0, jint arg1);
		static QAndroidJniObject valueOf(const QString &arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Long arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		QAndroidJniObject resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		jstring toString();
	};
} // namespace java::lang

