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
		
		StringBuilder(QAndroidJniObject obj);
		// Constructors
		StringBuilder();
		StringBuilder(jint &arg0);
		StringBuilder(jstring &arg0);
		StringBuilder(const QString &arg0);
		
		// Methods
		QAndroidJniObject append(jcharArray arg0);
		QAndroidJniObject append(jboolean arg0);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jdouble arg0);
		QAndroidJniObject append(jfloat arg0);
		QAndroidJniObject append(jint arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jobject arg0);
		QAndroidJniObject append(java::lang::StringBuffer arg0);
		QAndroidJniObject append(jlong arg0);
		QAndroidJniObject append(jcharArray arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		QAndroidJniObject appendCodePoint(jint arg0);
		jint capacity();
		jchar charAt(jint arg0);
		QAndroidJniObject chars();
		jint codePointAt(jint arg0);
		jint codePointBefore(jint arg0);
		jint codePointCount(jint arg0, jint arg1);
		QAndroidJniObject codePoints();
		jint compareTo(jobject arg0);
		jint compareTo(java::lang::StringBuilder arg0);
		QAndroidJniObject _delete(jint arg0, jint arg1);
		QAndroidJniObject deleteCharAt(jint arg0);
		void ensureCapacity(jint arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint indexOf(jstring arg0);
		jint indexOf(const QString &arg0);
		jint indexOf(jstring arg0, jint arg1);
		jint indexOf(const QString &arg0, jint arg1);
		QAndroidJniObject insert(jint arg0, jcharArray arg1);
		QAndroidJniObject insert(jint arg0, jboolean arg1);
		QAndroidJniObject insert(jint arg0, jchar arg1);
		QAndroidJniObject insert(jint arg0, jdouble arg1);
		QAndroidJniObject insert(jint arg0, jfloat arg1);
		QAndroidJniObject insert(jint arg0, jint arg1);
		QAndroidJniObject insert(jint arg0, jstring arg1);
		QAndroidJniObject insert(jint arg0, const QString &arg1);
		QAndroidJniObject insert(jint arg0, jobject arg1);
		QAndroidJniObject insert(jint arg0, jlong arg1);
		QAndroidJniObject insert(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		QAndroidJniObject insert(jint arg0, jstring arg1, jint arg2, jint arg3);
		QAndroidJniObject insert(jint arg0, const QString &arg1, jint arg2, jint arg3);
		jint lastIndexOf(jstring arg0);
		jint lastIndexOf(const QString &arg0);
		jint lastIndexOf(jstring arg0, jint arg1);
		jint lastIndexOf(const QString &arg0, jint arg1);
		jint length();
		jint offsetByCodePoints(jint arg0, jint arg1);
		QAndroidJniObject replace(jint arg0, jint arg1, jstring arg2);
		QAndroidJniObject replace(jint arg0, jint arg1, const QString &arg2);
		QAndroidJniObject reverse();
		void setCharAt(jint arg0, jchar arg1);
		void setLength(jint arg0);
		jstring subSequence(jint arg0, jint arg1);
		jstring substring(jint arg0);
		jstring substring(jint arg0, jint arg1);
		jstring toString();
		void trimToSize();
	};
} // namespace java::lang

