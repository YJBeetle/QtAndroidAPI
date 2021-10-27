#pragma once

#ifndef JAVAX_XML_VALIDATION_VALIDATOR
#define JAVAX_XML_VALIDATION_VALIDATOR

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::validation
{
	class Validator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		QAndroidJniObject getResourceResolver();
		void reset();
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
		void setResourceResolver(__jni_impl::__JniBaseClass arg0);
		void validate(__jni_impl::__JniBaseClass arg0);
		void validate(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::javax::xml::validation


namespace __jni_impl::javax::xml::validation
{
	// Fields
	
	// Constructors
	void Validator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.validation.Validator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Validator::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean Validator::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Validator::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject Validator::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Validator::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject Validator::getResourceResolver()
	{
		return __thiz.callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	void Validator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Validator::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void Validator::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void Validator::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Validator::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Validator::setProperty(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Validator::setResourceResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.__jniObject().object()
		);
	}
	void Validator::validate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;)V",
			arg0.__jniObject().object()
		);
	}
	void Validator::validate(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"validate",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::xml::validation

namespace javax::xml::validation
{
	class Validator : public __jni_impl::javax::xml::validation::Validator
	{
	public:
		Validator(QAndroidJniObject obj) { __thiz = obj; }
		Validator()
		{
			__constructor();
		}
	};
} // namespace javax::xml::validation

#endif // JAVAX_XML_VALIDATION_VALIDATOR

