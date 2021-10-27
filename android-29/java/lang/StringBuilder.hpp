#pragma once

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
	class StringBuffer;
}

namespace __jni_impl::java::lang
{
	class StringBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
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
		QAndroidJniObject append(__jni_impl::java::lang::StringBuffer arg0);
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
		jint compareTo(__jni_impl::java::lang::StringBuilder arg0);
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
} // namespace __jni_impl::java::lang

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./StringBuffer.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void StringBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"()V"
		);
	}
	void StringBuilder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"(I)V",
			arg0
		);
	}
	void StringBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void StringBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject StringBuilder::append(jcharArray arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"([C)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Z)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(D)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(F)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jint arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject StringBuilder::append(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(__jni_impl::java::lang::StringBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StringBuilder::append(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(J)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"([CII)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuilder::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuilder::append(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuilder::appendCodePoint(jint arg0)
	{
		return __thiz.callObjectMethod(
			"appendCodePoint",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	jint StringBuilder::capacity()
	{
		return __thiz.callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	jchar StringBuilder::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::chars()
	{
		return __thiz.callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuilder::codePointAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"codePointAt",
			"(I)I",
			arg0
		);
	}
	jint StringBuilder::codePointBefore(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"codePointBefore",
			"(I)I",
			arg0
		);
	}
	jint StringBuilder::codePointCount(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"codePointCount",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::codePoints()
	{
		return __thiz.callObjectMethod(
			"codePoints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuilder::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint StringBuilder::compareTo(__jni_impl::java::lang::StringBuilder arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/StringBuilder;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StringBuilder::_delete(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"delete",
			"(II)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::deleteCharAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"deleteCharAt",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	void StringBuilder::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	void StringBuilder::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
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
	jint StringBuilder::indexOf(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint StringBuilder::indexOf(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint StringBuilder::indexOf(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint StringBuilder::indexOf(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(I[C)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IZ)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IC)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ID)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IF)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(II)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(IJ)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(I[CII)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, jstring arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject StringBuilder::insert(jint arg0, const QString &arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	jint StringBuilder::lastIndexOf(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint StringBuilder::lastIndexOf(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint StringBuilder::lastIndexOf(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint StringBuilder::lastIndexOf(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint StringBuilder::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint StringBuilder::offsetByCodePoints(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"offsetByCodePoints",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StringBuilder::replace(jint arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringBuilder::replace(jint arg0, jint arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject StringBuilder::reverse()
	{
		return __thiz.callObjectMethod(
			"reverse",
			"()Ljava/lang/StringBuilder;"
		);
	}
	void StringBuilder::setCharAt(jint arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"setCharAt",
			"(IC)V",
			arg0,
			arg1
		);
	}
	void StringBuilder::setLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	jstring StringBuilder::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring StringBuilder::substring(jint arg0)
	{
		return __thiz.callObjectMethod(
			"substring",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring StringBuilder::substring(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"substring",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring StringBuilder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StringBuilder::trimToSize()
	{
		__thiz.callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class StringBuilder : public __jni_impl::java::lang::StringBuilder
	{
	public:
		StringBuilder(QAndroidJniObject obj) { __thiz = obj; }
		StringBuilder()
		{
			__constructor();
		}
		StringBuilder(jint arg0)
		{
			__constructor(
				arg0);
		}
		StringBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

