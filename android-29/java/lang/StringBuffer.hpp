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
		java::lang::StringBuffer append(JCharArray arg0) const;
		java::lang::StringBuffer append(jboolean arg0) const;
		java::lang::StringBuffer append(jchar arg0) const;
		java::lang::StringBuffer append(jdouble arg0) const;
		java::lang::StringBuffer append(jfloat arg0) const;
		java::lang::StringBuffer append(jint arg0) const;
		java::lang::StringBuffer append(JString arg0) const;
		java::lang::StringBuffer append(JObject arg0) const;
		java::lang::StringBuffer append(java::lang::StringBuffer arg0) const;
		java::lang::StringBuffer append(jlong arg0) const;
		java::lang::StringBuffer append(JCharArray arg0, jint arg1, jint arg2) const;
		java::lang::StringBuffer append(JString arg0, jint arg1, jint arg2) const;
		java::lang::StringBuffer appendCodePoint(jint arg0) const;
		jint capacity() const;
		jchar charAt(jint arg0) const;
		JObject chars() const;
		jint codePointAt(jint arg0) const;
		jint codePointBefore(jint arg0) const;
		jint codePointCount(jint arg0, jint arg1) const;
		JObject codePoints() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::lang::StringBuffer arg0) const;
		java::lang::StringBuffer delete_(jint arg0, jint arg1) const;
		java::lang::StringBuffer deleteCharAt(jint arg0) const;
		void ensureCapacity(jint arg0) const;
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const;
		jint indexOf(JString arg0) const;
		jint indexOf(JString arg0, jint arg1) const;
		java::lang::StringBuffer insert(jint arg0, JCharArray arg1) const;
		java::lang::StringBuffer insert(jint arg0, jboolean arg1) const;
		java::lang::StringBuffer insert(jint arg0, jchar arg1) const;
		java::lang::StringBuffer insert(jint arg0, jdouble arg1) const;
		java::lang::StringBuffer insert(jint arg0, jfloat arg1) const;
		java::lang::StringBuffer insert(jint arg0, jint arg1) const;
		java::lang::StringBuffer insert(jint arg0, JString arg1) const;
		java::lang::StringBuffer insert(jint arg0, JObject arg1) const;
		java::lang::StringBuffer insert(jint arg0, jlong arg1) const;
		java::lang::StringBuffer insert(jint arg0, JCharArray arg1, jint arg2, jint arg3) const;
		java::lang::StringBuffer insert(jint arg0, JString arg1, jint arg2, jint arg3) const;
		jint lastIndexOf(JString arg0) const;
		jint lastIndexOf(JString arg0, jint arg1) const;
		jint length() const;
		jint offsetByCodePoints(jint arg0, jint arg1) const;
		java::lang::StringBuffer replace(jint arg0, jint arg1, JString arg2) const;
		java::lang::StringBuffer reverse() const;
		void setCharAt(jint arg0, jchar arg1) const;
		void setLength(jint arg0) const;
		JString subSequence(jint arg0, jint arg1) const;
		JString substring(jint arg0) const;
		JString substring(jint arg0, jint arg1) const;
		JString toString() const;
		void trimToSize() const;
	};
} // namespace java::lang

