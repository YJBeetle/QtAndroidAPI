#pragma once


class JByteArray;
class JCharArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
class JObject;
class JString;

namespace java::lang
{
	class StringBuffer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringBuffer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StringBuffer(QAndroidJniObject obj);
		
		// Constructors
		StringBuffer();
		StringBuffer(jint arg0);
		StringBuffer(JString arg0);
		
		// Methods
		java::lang::StringBuffer append(JCharArray arg0);
		java::lang::StringBuffer append(jboolean arg0);
		java::lang::StringBuffer append(jchar arg0);
		java::lang::StringBuffer append(jdouble arg0);
		java::lang::StringBuffer append(jfloat arg0);
		java::lang::StringBuffer append(jint arg0);
		java::lang::StringBuffer append(JString arg0);
		java::lang::StringBuffer append(JObject arg0);
		java::lang::StringBuffer append(java::lang::StringBuffer arg0);
		java::lang::StringBuffer append(jlong arg0);
		java::lang::StringBuffer append(JCharArray arg0, jint arg1, jint arg2);
		java::lang::StringBuffer append(JString arg0, jint arg1, jint arg2);
		java::lang::StringBuffer appendCodePoint(jint arg0);
		jint capacity();
		jchar charAt(jint arg0);
		JObject chars();
		jint codePointAt(jint arg0);
		jint codePointBefore(jint arg0);
		jint codePointCount(jint arg0, jint arg1);
		JObject codePoints();
		jint compareTo(JObject arg0);
		jint compareTo(java::lang::StringBuffer arg0);
		java::lang::StringBuffer _delete(jint arg0, jint arg1);
		java::lang::StringBuffer deleteCharAt(jint arg0);
		void ensureCapacity(jint arg0);
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3);
		jint indexOf(JString arg0);
		jint indexOf(JString arg0, jint arg1);
		java::lang::StringBuffer insert(jint arg0, JCharArray arg1);
		java::lang::StringBuffer insert(jint arg0, jboolean arg1);
		java::lang::StringBuffer insert(jint arg0, jchar arg1);
		java::lang::StringBuffer insert(jint arg0, jdouble arg1);
		java::lang::StringBuffer insert(jint arg0, jfloat arg1);
		java::lang::StringBuffer insert(jint arg0, jint arg1);
		java::lang::StringBuffer insert(jint arg0, JString arg1);
		java::lang::StringBuffer insert(jint arg0, JObject arg1);
		java::lang::StringBuffer insert(jint arg0, jlong arg1);
		java::lang::StringBuffer insert(jint arg0, JCharArray arg1, jint arg2, jint arg3);
		java::lang::StringBuffer insert(jint arg0, JString arg1, jint arg2, jint arg3);
		jint lastIndexOf(JString arg0);
		jint lastIndexOf(JString arg0, jint arg1);
		jint length();
		jint offsetByCodePoints(jint arg0, jint arg1);
		java::lang::StringBuffer replace(jint arg0, jint arg1, JString arg2);
		java::lang::StringBuffer reverse();
		void setCharAt(jint arg0, jchar arg1);
		void setLength(jint arg0);
		JString subSequence(jint arg0, jint arg1);
		JString substring(jint arg0);
		JString substring(jint arg0, jint arg1);
		JString toString();
		void trimToSize();
	};
} // namespace java::lang

