#pragma once

#ifndef JAVA_LANG_STRINGBUFFER
#define JAVA_LANG_STRINGBUFFER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::lang
{
	class StringBuffer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jint length();
		jstring toString();
		QAndroidJniObject append(jint arg0);
		QAndroidJniObject append(jlong arg0);
		QAndroidJniObject append(jfloat arg0);
		QAndroidJniObject append(jcharArray arg0);
		QAndroidJniObject append(jcharArray arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jboolean arg0);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jdouble arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(__jni_impl::java::lang::StringBuffer arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jobject arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint compareTo(__jni_impl::java::lang::StringBuffer arg0);
		jint compareTo(jobject arg0);
		jint indexOf(jstring arg0);
		jint indexOf(jstring arg0, jint arg1);
		jchar charAt(jint arg0);
		jint codePointAt(jint arg0);
		jint codePointBefore(jint arg0);
		jint codePointCount(jint arg0, jint arg1);
		jint offsetByCodePoints(jint arg0, jint arg1);
		jint lastIndexOf(jstring arg0);
		jint lastIndexOf(jstring arg0, jint arg1);
		jstring substring(jint arg0, jint arg1);
		jstring substring(jint arg0);
		QAndroidJniObject replace(jint arg0, jint arg1, jstring arg2);
		QAndroidJniObject codePoints();
		jstring subSequence(jint arg0, jint arg1);
		QAndroidJniObject chars();
		QAndroidJniObject _delete(jint arg0, jint arg1);
		void setLength(jint arg0);
		QAndroidJniObject insert(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		QAndroidJniObject insert(jint arg0, jfloat arg1);
		QAndroidJniObject insert(jint arg0, jdouble arg1);
		QAndroidJniObject insert(jint arg0, jcharArray arg1);
		QAndroidJniObject insert(jint arg0, jstring arg1, jint arg2, jint arg3);
		QAndroidJniObject insert(jint arg0, jstring arg1);
		QAndroidJniObject insert(jint arg0, jobject arg1);
		QAndroidJniObject insert(jint arg0, jboolean arg1);
		QAndroidJniObject insert(jint arg0, jchar arg1);
		QAndroidJniObject insert(jint arg0, jint arg1);
		QAndroidJniObject insert(jint arg0, jlong arg1);
		jint capacity();
		void ensureCapacity(jint arg0);
		void trimToSize();
		void setCharAt(jint arg0, jchar arg1);
		QAndroidJniObject appendCodePoint(jint arg0);
		QAndroidJniObject deleteCharAt(jint arg0);
		QAndroidJniObject reverse();
	};
} // namespace __jni_impl::java::lang

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void StringBuffer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuffer",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void StringBuffer::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuffer",
			"(I)V",
			arg0);
	}
	void StringBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuffer",
			"()V");
	}
	
	// Methods
	jint StringBuffer::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring StringBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject StringBuffer::append(jint arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(J)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(F)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jcharArray arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"([C)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"([CII)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuffer::append(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Z)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(D)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/String;)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::append(__jni_impl::java::lang::StringBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StringBuffer::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuffer::append(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	void StringBuffer::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint StringBuffer::compareTo(__jni_impl::java::lang::StringBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/StringBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint StringBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint StringBuffer::indexOf(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint StringBuffer::indexOf(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jchar StringBuffer::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jint StringBuffer::codePointAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"codePointAt",
			"(I)I",
			arg0
		);
	}
	jint StringBuffer::codePointBefore(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"codePointBefore",
			"(I)I",
			arg0
		);
	}
	jint StringBuffer::codePointCount(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"codePointCount",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint StringBuffer::offsetByCodePoints(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"offsetByCodePoints",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint StringBuffer::lastIndexOf(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint StringBuffer::lastIndexOf(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jstring StringBuffer::substring(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"substring",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring StringBuffer::substring(jint arg0)
	{
		return __thiz.callObjectMethod(
			"substring",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject StringBuffer::replace(jint arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuffer::codePoints()
	{
		return __thiz.callObjectMethod(
			"codePoints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jstring StringBuffer::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	QAndroidJniObject StringBuffer::chars()
	{
		return __thiz.callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject StringBuffer::_delete(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"delete",
			"(II)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	void StringBuffer::setLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(I[CII)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IF)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ID)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(I[C)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jstring arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/String;)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/Object;)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IZ)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IC)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(II)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::insert(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IJ)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	jint StringBuffer::capacity()
	{
		return __thiz.callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	void StringBuffer::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	void StringBuffer::trimToSize()
	{
		__thiz.callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
	void StringBuffer::setCharAt(jint arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"setCharAt",
			"(IC)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuffer::appendCodePoint(jint arg0)
	{
		return __thiz.callObjectMethod(
			"appendCodePoint",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::deleteCharAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"deleteCharAt",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	QAndroidJniObject StringBuffer::reverse()
	{
		return __thiz.callObjectMethod(
			"reverse",
			"()Ljava/lang/StringBuffer;"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class StringBuffer : public __jni_impl::java::lang::StringBuffer
	{
	public:
		StringBuffer(QAndroidJniObject obj) { __thiz = obj; }
		StringBuffer(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StringBuffer(jint arg0)
		{
			__constructor(
				arg0);
		}
		StringBuffer()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_STRINGBUFFER

