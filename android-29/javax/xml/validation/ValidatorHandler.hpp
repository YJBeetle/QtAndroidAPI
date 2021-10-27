#pragma once

#ifndef JAVAX_XML_VALIDATION_VALIDATORHANDLER
#define JAVAX_XML_VALIDATION_VALIDATORHANDLER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::xml::validation
{
	class TypeInfoProvider;
}

namespace __jni_impl::javax::xml::validation
{
	class ValidatorHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getContentHandler();
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		QAndroidJniObject getResourceResolver();
		QAndroidJniObject getTypeInfoProvider();
		void setContentHandler(__jni_impl::__JniBaseClass arg0);
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
		void setResourceResolver(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::javax::xml::validation

#include "TypeInfoProvider.hpp"

namespace __jni_impl::javax::xml::validation
{
	// Fields
	
	// Constructors
	void ValidatorHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.validation.ValidatorHandler",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ValidatorHandler::getContentHandler()
	{
		return __thiz.callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject ValidatorHandler::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean ValidatorHandler::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ValidatorHandler::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject ValidatorHandler::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ValidatorHandler::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject ValidatorHandler::getResourceResolver()
	{
		return __thiz.callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	QAndroidJniObject ValidatorHandler::getTypeInfoProvider()
	{
		return __thiz.callObjectMethod(
			"getTypeInfoProvider",
			"()Ljavax/xml/validation/TypeInfoProvider;"
		);
	}
	void ValidatorHandler::setContentHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void ValidatorHandler::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void ValidatorHandler::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ValidatorHandler::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ValidatorHandler::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void ValidatorHandler::setProperty(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ValidatorHandler::setResourceResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::xml::validation

namespace javax::xml::validation
{
	class ValidatorHandler : public __jni_impl::javax::xml::validation::ValidatorHandler
	{
	public:
		ValidatorHandler(QAndroidJniObject obj) { __thiz = obj; }
		ValidatorHandler()
		{
			__constructor();
		}
	};
} // namespace javax::xml::validation

#endif // JAVAX_XML_VALIDATION_VALIDATORHANDLER

