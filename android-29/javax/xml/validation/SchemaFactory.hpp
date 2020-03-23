#pragma once

#ifndef JAVAX_XML_VALIDATION_SCHEMAFACTORY
#define JAVAX_XML_VALIDATION_SCHEMAFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::javax::xml::validation
{
	class Schema;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::net
{
	class URL;
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
		QAndroidJniObject getProperty(jstring arg0);
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		void setProperty(jstring arg0, jobject arg1);
		static QAndroidJniObject newDefaultInstance();
		jboolean isSchemaLanguageSupported(jstring arg0);
		QAndroidJniObject newSchema(__jni_impl::java::io::File arg0);
		QAndroidJniObject newSchema(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject newSchema(__jni_impl::java::net::URL arg0);
		QAndroidJniObject newSchema(jarray arg0);
		QAndroidJniObject newSchema();
		void setResourceResolver(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getResourceResolver();
		void setErrorHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getErrorHandler();
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
	};
} // namespace __jni_impl::javax::xml::validation

#include "../../../java/lang/ClassLoader.hpp"
#include "Schema.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/net/URL.hpp"

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
	QAndroidJniObject SchemaFactory::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject SchemaFactory::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0);
	}
	QAndroidJniObject SchemaFactory::newInstance(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void SchemaFactory::setProperty(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject SchemaFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.validation.SchemaFactory",
			"newDefaultInstance",
			"()Ljavax/xml/validation/SchemaFactory;");
	}
	jboolean SchemaFactory::isSchemaLanguageSupported(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSchemaLanguageSupported",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject SchemaFactory::newSchema(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"(Ljava/io/File;)Ljavax/xml/validation/Schema;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SchemaFactory::newSchema(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SchemaFactory::newSchema(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"(Ljava/net/URL;)Ljavax/xml/validation/Schema;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SchemaFactory::newSchema(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;",
			arg0);
	}
	QAndroidJniObject SchemaFactory::newSchema()
	{
		return __thiz.callObjectMethod(
			"newSchema",
			"()Ljavax/xml/validation/Schema;");
	}
	void SchemaFactory::setResourceResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setResourceResolver",
			"(Lorg/w3c/dom/ls/LSResourceResolver;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SchemaFactory::getResourceResolver()
	{
		return __thiz.callObjectMethod(
			"getResourceResolver",
			"()Lorg/w3c/dom/ls/LSResourceResolver;");
	}
	void SchemaFactory::setErrorHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SchemaFactory::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;");
	}
	void SchemaFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	jboolean SchemaFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0);
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

