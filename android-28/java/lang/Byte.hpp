#pragma once

#include "./Number.hpp"

class JClass;
class JObject;
class JString;
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
		static JClass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Byte(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Byte(QAndroidJniObject obj);
		
		// Constructors
		Byte(jbyte arg0);
		Byte(JString arg0);
		
		// Methods
		static jint compare(jbyte arg0, jbyte arg1);
		static jint compareUnsigned(jbyte arg0, jbyte arg1);
		static java::lang::Byte decode(JString arg0);
		static jint hashCode(jbyte arg0);
		static jbyte parseByte(JString arg0);
		static jbyte parseByte(JString arg0, jint arg1);
		static JString toString(jbyte arg0);
		static jint toUnsignedInt(jbyte arg0);
		static jlong toUnsignedLong(jbyte arg0);
		static java::lang::Byte valueOf(jbyte arg0);
		static java::lang::Byte valueOf(JString arg0);
		static java::lang::Byte valueOf(JString arg0, jint arg1);
		jbyte byteValue();
		jint compareTo(java::lang::Byte arg0);
		jint compareTo(JObject arg0);
		java::util::Optional describeConstable();
		jdouble doubleValue();
		jboolean equals(JObject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jlong longValue();
		jshort shortValue();
		JString toString();
	};
} // namespace java::lang

