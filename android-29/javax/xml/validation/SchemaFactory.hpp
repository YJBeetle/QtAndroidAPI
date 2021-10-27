#pragma once

#ifndef JAVAX_XML_VALIDATION_SCHEMAFACTORY
#define JAVAX_XML_VALIDATION_SCHEMAFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::javax::xml::validation
{
	class Schema;
}

namespace __jni_impl::javax::xml::validation
{
	class SchemaFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(const QString &arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		static QAndroidJniObject newInstance(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2);
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		QAndroidJniObject getResourceResolver();
		jboolean isSchemaLanguageSupported(jstring arg0);
		jboolean isSchemaLanguageSupported(const QString &arg0);
		QAndroidJniObject newSchema();
		QAndroidJniObject newSchema(jarray arg0);
		QAndroidJniObject newSchema(__jni_impl::java::io::File arg0);
		QAndroidJniObject newSchema(__jni_impl::java::net::URL arg0);
		QAndroidJniObject newSchema(__jni_impl::__JniBaseClass arg0);
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
		void setResourceResolver(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::javax::xml::validation

#include "../../../java/io/File.hpp"
#include "../../../java/lang/ClassLoader.hpp"
#include "../../../java/net/URL.hpp"
#include "Schema.hpp"

namespace __jni_impl::javax::xml::validation
{
	// Fields
	
	// Constructors
	void SchemaFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.validation.SchemaFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SchemaFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newDefaultInstance",
			"()Ljavax/xml/validation/SchemaFactory;"
		);
	}
	QAndroidJniObject SchemaFactory::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0
		);
	}
	QAndroidJniObject SchemaFactory::newInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SchemaFactory::newInstance(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SchemaFactory::newInstance(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SchemaFactory::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean SchemaFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SchemaFactory::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject SchemaFactory::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject SchemaFactory::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject SchemaFactory::getResourceResolver()
	{
		return __thiz.callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;"
		);
	}
	jboolean SchemaFactory::isSchemaLanguageSupported(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSchemaLanguageSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SchemaFactory::isSchemaLanguageSupported(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSchemaLanguageSupported",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SchemaFactory::newSchema()
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	QAndroidJniObject SchemaFactory::newSchema(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0
		);
	}
	QAndroidJniObject SchemaFactory::newSchema(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"(Ljava/io/File;)Ljavax/xml/validation/Schema;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SchemaFactory::newSchema(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"(Ljava/net/URL;)Ljavax/xml/validation/Schema;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SchemaFactory::newSchema(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.__jniObject().object()
		);
	}
	void SchemaFactory::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void SchemaFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void SchemaFactory::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SchemaFactory::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SchemaFactory::setProperty(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SchemaFactory::setResourceResolver(__jni_impl::__JniBaseClass arg0)
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
	class SchemaFactory : public __jni_impl::javax::xml::validation::SchemaFactory
	{
	public:
		SchemaFactory(QAndroidJniObject obj) { __thiz = obj; }
		SchemaFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::validation

#endif // JAVAX_XML_VALIDATION_SCHEMAFACTORY

