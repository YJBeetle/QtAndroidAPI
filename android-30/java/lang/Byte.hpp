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
		Byte(QAndroidJniObject obj) : java::lang::Number(obj) {}
		
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
		jbyte byteValue() const;
		jint compareTo(java::lang::Byte arg0) const;
		jint compareTo(JObject arg0) const;
		java::util::Optional describeConstable() const;
		jdouble doubleValue() const;
		jboolean equals(JObject arg0) const;
		jfloat floatValue() const;
		jint hashCode() const;
		jint intValue() const;
		jlong longValue() const;
		jshort shortValue() const;
		JString toString() const;
	};
} // namespace java::lang

