#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./StringBuffer.hpp"
#include "./StringBuilder.hpp"

namespace java::lang
{
	// Fields
	
	StringBuilder::StringBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringBuilder::StringBuilder()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"()V"
		);
	}
	StringBuilder::StringBuilder(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"(I)V",
			arg0
		);
	}
	StringBuilder::StringBuilder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0
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
	QAndroidJniObject StringBuilder::append(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	QAndroidJniObject StringBuilder::append(java::lang::StringBuffer arg0)
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
	jint StringBuilder::compareTo(java::lang::StringBuilder arg0)
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
	jint StringBuilder::indexOf(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0,
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
	jint StringBuilder::lastIndexOf(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0
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
} // namespace java::lang

