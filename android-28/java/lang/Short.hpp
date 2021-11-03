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
	class Short : public java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jshort MAX_VALUE();
		static jshort MIN_VALUE();
		static jint SIZE();
		static JClass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Short(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		Short(QJniObject obj);
		
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
		jbyte byteValue();
		jint compareTo(JObject arg0);
		jint compareTo(java::lang::Short arg0);
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

