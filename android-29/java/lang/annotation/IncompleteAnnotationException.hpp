#pragma once

#ifndef JAVA_LANG_ANNOTATION_INCOMPLETEANNOTATIONEXCEPTION
#define JAVA_LANG_ANNOTATION_INCOMPLETEANNOTATIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace __jni_impl::java::lang::annotation
{
	class IncompleteAnnotationException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jclass arg0, jstring arg1);
		void __constructor(jclass arg0, const QString &arg1);
		
		// Methods
		jclass annotationType();
		jstring elementName();
	};
} // namespace __jni_impl::java::lang::annotation


namespace __jni_impl::java::lang::annotation
{
	// Fields
	
	// Constructors
	void IncompleteAnnotationException::__constructor(jclass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void IncompleteAnnotationException::__constructor(jclass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jclass IncompleteAnnotationException::annotationType()
	{
		return __thiz.callObjectMethod(
			"annotationType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jstring IncompleteAnnotationException::elementName()
	{
		return __thiz.callObjectMethod(
			"elementName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang::annotation

namespace java::lang::annotation
{
	class IncompleteAnnotationException : public __jni_impl::java::lang::annotation::IncompleteAnnotationException
	{
	public:
		IncompleteAnnotationException(QAndroidJniObject obj) { __thiz = obj; }
		IncompleteAnnotationException(jclass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::annotation

#endif // JAVA_LANG_ANNOTATION_INCOMPLETEANNOTATIONEXCEPTION

