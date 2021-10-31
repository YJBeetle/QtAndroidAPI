#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class StringBuffer;
}

namespace java::lang
{
	class StringBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StringBuilder(QJniObject obj);
		
		// Constructors
		StringBuilder();
		StringBuilder(jint arg0);
		StringBuilder(jstring arg0);
		
		// Methods
		java::lang::StringBuilder append(jcharArray arg0);
		java::lang::StringBuilder append(jboolean arg0);
		java::lang::StringBuilder append(jchar arg0);
		java::lang::StringBuilder append(jdouble arg0);
		java::lang::StringBuilder append(jfloat arg0);
		java::lang::StringBuilder append(jint arg0);
		java::lang::StringBuilder append(jstring arg0);
		java::lang::StringBuilder append(jobject arg0);
		java::lang::StringBuilder append(java::lang::StringBuffer arg0);
		java::lang::StringBuilder append(jlong arg0);
		java::lang::StringBuilder append(jcharArray arg0, jint arg1, jint arg2);
		java::lang::StringBuilder append(jstring arg0, jint arg1, jint arg2);
		java::lang::StringBuilder appendCodePoint(jint arg0);
		jint capacity();
		jchar charAt(jint arg0);
		__JniBaseClass chars();
		jint codePointAt(jint arg0);
		jint codePointBefore(jint arg0);
		jint codePointCount(jint arg0, jint arg1);
		__JniBaseClass codePoints();
		jint compareTo(jobject arg0);
		jint compareTo(java::lang::StringBuilder arg0);
		java::lang::StringBuilder _delete(jint arg0, jint arg1);
		java::lang::StringBuilder deleteCharAt(jint arg0);
		void ensureCapacity(jint arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint indexOf(jstring arg0);
		jint indexOf(jstring arg0, jint arg1);
		java::lang::StringBuilder insert(jint arg0, jcharArray arg1);
		java::lang::StringBuilder insert(jint arg0, jboolean arg1);
		java::lang::StringBuilder insert(jint arg0, jchar arg1);
		java::lang::StringBuilder insert(jint arg0, jdouble arg1);
		java::lang::StringBuilder insert(jint arg0, jfloat arg1);
		java::lang::StringBuilder insert(jint arg0, jint arg1);
		java::lang::StringBuilder insert(jint arg0, jstring arg1);
		java::lang::StringBuilder insert(jint arg0, jobject arg1);
		java::lang::StringBuilder insert(jint arg0, jlong arg1);
		java::lang::StringBuilder insert(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		java::lang::StringBuilder insert(jint arg0, jstring arg1, jint arg2, jint arg3);
		jint lastIndexOf(jstring arg0);
		jint lastIndexOf(jstring arg0, jint arg1);
		jint length();
		jint offsetByCodePoints(jint arg0, jint arg1);
		java::lang::StringBuilder replace(jint arg0, jint arg1, jstring arg2);
		java::lang::StringBuilder reverse();
		void setCharAt(jint arg0, jchar arg1);
		void setLength(jint arg0);
		jstring subSequence(jint arg0, jint arg1);
		jstring substring(jint arg0);
		jstring substring(jint arg0, jint arg1);
		jstring toString();
		void trimToSize();
	};
} // namespace java::lang

