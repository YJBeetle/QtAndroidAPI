#pragma once

#include "../../JObject.hpp"
#include "./Number.hpp"

namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Byte : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jbyte MAX_VALUE();
		static jbyte MIN_VALUE();
		static jint SIZE();
		static jclass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Byte(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Byte(QJniObject obj);
		
		// Constructors
		Byte(jbyte arg0);
		Byte(jstring arg0);
		
		// Methods
		static jint compare(jbyte arg0, jbyte arg1);
		static jint compareUnsigned(jbyte arg0, jbyte arg1);
		static java::lang::Byte decode(jstring arg0);
		static jint hashCode(jbyte arg0);
		static jbyte parseByte(jstring arg0);
		static jbyte parseByte(jstring arg0, jint arg1);
		static jstring toString(jbyte arg0);
		static jint toUnsignedInt(jbyte arg0);
		static jlong toUnsignedLong(jbyte arg0);
		static java::lang::Byte valueOf(jbyte arg0);
		static java::lang::Byte valueOf(jstring arg0);
		static java::lang::Byte valueOf(jstring arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Byte arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
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

