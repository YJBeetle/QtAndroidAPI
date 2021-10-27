#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

namespace __jni_impl::java::lang::reflect
{
	class Method;
}

namespace __jni_impl::java::lang::annotation
{
	class AnnotationTypeMismatchException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::reflect::Method arg0, jstring arg1);
		void __constructor(__jni_impl::java::lang::reflect::Method arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject element();
		jstring foundType();
	};
} // namespace __jni_impl::java::lang::annotation

#include "../reflect/Method.hpp"

namespace __jni_impl::java::lang::annotation
{
	// Fields
	
	// Constructors
	void AnnotationTypeMismatchException::__constructor(__jni_impl::java::lang::reflect::Method arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationTypeMismatchException",
			"(Ljava/lang/reflect/Method;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AnnotationTypeMismatchException::__constructor(__jni_impl::java::lang::reflect::Method arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationTypeMismatchException",
			"(Ljava/lang/reflect/Method;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject AnnotationTypeMismatchException::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/reflect/Method;"
		);
	}
	jstring AnnotationTypeMismatchException::foundType()
	{
		return __thiz.callObjectMethod(
			"foundType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang::annotation

namespace java::lang::annotation
{
	class AnnotationTypeMismatchException : public __jni_impl::java::lang::annotation::AnnotationTypeMismatchException
	{
	public:
		AnnotationTypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		AnnotationTypeMismatchException(__jni_impl::java::lang::reflect::Method arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::annotation

