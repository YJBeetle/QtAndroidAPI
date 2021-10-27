#pragma once

#ifndef JAVA_NIO_CHARSET_CODERRESULT
#define JAVA_NIO_CHARSET_CODERRESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::java::nio::charset
{
	class CoderResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject OVERFLOW();
		static QAndroidJniObject UNDERFLOW();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject malformedForLength(jint arg0);
		static QAndroidJniObject unmappableForLength(jint arg0);
		jboolean isError();
		jboolean isMalformed();
		jboolean isOverflow();
		jboolean isUnderflow();
		jboolean isUnmappable();
		jint length();
		void throwException();
		jstring toString();
	};
} // namespace __jni_impl::java::nio::charset

#include "../../lang/Integer.hpp"

namespace __jni_impl::java::nio::charset
{
	// Fields
	QAndroidJniObject CoderResult::OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CoderResult",
			"OVERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	QAndroidJniObject CoderResult::UNDERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CoderResult",
			"UNDERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	
	// Constructors
	void CoderResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CoderResult",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CoderResult::malformedForLength(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"malformedForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	QAndroidJniObject CoderResult::unmappableForLength(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"unmappableForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	jboolean CoderResult::isError()
	{
		return __thiz.callMethod<jboolean>(
			"isError",
			"()Z"
		);
	}
	jboolean CoderResult::isMalformed()
	{
		return __thiz.callMethod<jboolean>(
			"isMalformed",
			"()Z"
		);
	}
	jboolean CoderResult::isOverflow()
	{
		return __thiz.callMethod<jboolean>(
			"isOverflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnderflow()
	{
		return __thiz.callMethod<jboolean>(
			"isUnderflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnmappable()
	{
		return __thiz.callMethod<jboolean>(
			"isUnmappable",
			"()Z"
		);
	}
	jint CoderResult::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	void CoderResult::throwException()
	{
		__thiz.callMethod<void>(
			"throwException",
			"()V"
		);
	}
	jstring CoderResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class CoderResult : public __jni_impl::java::nio::charset::CoderResult
	{
	public:
		CoderResult(QAndroidJniObject obj) { __thiz = obj; }
		CoderResult()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_CODERRESULT

