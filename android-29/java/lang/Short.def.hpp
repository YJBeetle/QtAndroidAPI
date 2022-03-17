#pragma once

#include "./Number.def.hpp"

class JClass;
class JObject;
class JString;
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
		static JClass TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Short(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Short(QAndroidJniObject obj) : java::lang::Number(obj) {}
		
		// Constructors
		Short(JString arg0);
		Short(jshort arg0);
		
		// Methods
		static jint compare(jshort arg0, jshort arg1);
		static jint compareUnsigned(jshort arg0, jshort arg1);
		static java::lang::Short decode(JString arg0);
		static jint hashCode(jshort arg0);
		static jshort parseShort(JString arg0);
		static jshort parseShort(JString arg0, jint arg1);
		static jshort reverseBytes(jshort arg0);
		static JString toString(jshort arg0);
		static jint toUnsignedInt(jshort arg0);
		static jlong toUnsignedLong(jshort arg0);
		static java::lang::Short valueOf(JString arg0);
		static java::lang::Short valueOf(jshort arg0);
		static java::lang::Short valueOf(JString arg0, jint arg1);
		jbyte byteValue() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::lang::Short arg0) const;
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

