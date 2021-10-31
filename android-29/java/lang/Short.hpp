#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Number.hpp"

namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Short : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jshort MAX_VALUE();
		static jshort MIN_VALUE();
		static jint SIZE();
		static jclass TYPE();
		
		Short(QAndroidJniObject obj);
		// Constructors
		Short(jstring arg0);
		Short(jshort arg0);
		Short() = default;
		
		// Methods
		static jint compare(jshort arg0, jshort arg1);
		static jint compareUnsigned(jshort arg0, jshort arg1);
		static QAndroidJniObject decode(jstring arg0);
		static jint hashCode(jshort arg0);
		static jshort parseShort(jstring arg0);
		static jshort parseShort(jstring arg0, jint arg1);
		static jshort reverseBytes(jshort arg0);
		static jstring toString(jshort arg0);
		static jint toUnsignedInt(jshort arg0);
		static jlong toUnsignedLong(jshort arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(jshort arg0);
		static QAndroidJniObject valueOf(jstring arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(jobject arg0);
		jint compareTo(java::lang::Short arg0);
		QAndroidJniObject describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		jshort shortValue();
		jstring toString();
	};
} // namespace java::lang

