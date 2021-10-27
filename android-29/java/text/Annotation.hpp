#pragma once

#ifndef JAVA_TEXT_ANNOTATION
#define JAVA_TEXT_ANNOTATION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::text
{
	class Annotation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		
		// Methods
		jobject getValue();
		jstring toString();
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void Annotation::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.Annotation",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jobject Annotation::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring Annotation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class Annotation : public __jni_impl::java::text::Annotation
	{
	public:
		Annotation(QAndroidJniObject obj) { __thiz = obj; }
		Annotation(jobject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_ANNOTATION

