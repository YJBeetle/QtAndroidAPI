#pragma once

#ifndef JAVA_TEXT_NORMALIZER
#define JAVA_TEXT_NORMALIZER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::text
{
	class Normalizer_Form;
}

namespace __jni_impl::java::text
{
	class Normalizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring normalize(jstring arg0, __jni_impl::java::text::Normalizer_Form arg1);
		static jstring normalize(const QString &arg0, __jni_impl::java::text::Normalizer_Form arg1);
		static jboolean isNormalized(jstring arg0, __jni_impl::java::text::Normalizer_Form arg1);
		static jboolean isNormalized(const QString &arg0, __jni_impl::java::text::Normalizer_Form arg1);
	};
} // namespace __jni_impl::java::text

#include "Normalizer_Form.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void Normalizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.Normalizer",
			"(V)V");
	}
	
	// Methods
	jstring Normalizer::normalize(jstring arg0, __jni_impl::java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Normalizer::normalize(const QString &arg0, __jni_impl::java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jboolean Normalizer::isNormalized(jstring arg0, __jni_impl::java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Normalizer::isNormalized(const QString &arg0, __jni_impl::java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class Normalizer : public __jni_impl::java::text::Normalizer
	{
	public:
		Normalizer(QAndroidJniObject obj) { __thiz = obj; }
		Normalizer()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_NORMALIZER

