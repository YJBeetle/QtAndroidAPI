#pragma once

#ifndef JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR
#define JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR

#include "../../../__JniBaseClass.hpp"
#include "../Error.hpp"


namespace __jni_impl::java::lang::annotation
{
	class AnnotationFormatError : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang::annotation


namespace __jni_impl::java::lang::annotation
{
	// Fields
	
	// Constructors
	void AnnotationFormatError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AnnotationFormatError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AnnotationFormatError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void AnnotationFormatError::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void AnnotationFormatError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::annotation

namespace java::lang::annotation
{
	class AnnotationFormatError : public __jni_impl::java::lang::annotation::AnnotationFormatError
	{
	public:
		AnnotationFormatError(QAndroidJniObject obj) { __thiz = obj; }
		AnnotationFormatError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AnnotationFormatError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AnnotationFormatError(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::annotation

#endif // JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR

