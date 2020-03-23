#pragma once

#ifndef JAVAX_XML_PARSERS_DOCUMENTBUILDERFACTORY
#define JAVAX_XML_PARSERS_DOCUMENTBUILDERFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::javax::xml::parsers
{
	class DocumentBuilder;
}
namespace __jni_impl::javax::xml::validation
{
	class Schema;
}

namespace __jni_impl::javax::xml::parsers
{
	class DocumentBuilderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		QAndroidJniObject getAttribute(jstring arg0);
		void setAttribute(jstring arg0, jobject arg1);
		static QAndroidJniObject newDefaultInstance();
		void setNamespaceAware(jboolean arg0);
		static QAndroidJniObject newDefaultNSInstance();
		static QAndroidJniObject newNSInstance();
		static QAndroidJniObject newNSInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		void setValidating(jboolean arg0);
		jboolean isNamespaceAware();
		jboolean isValidating();
		void setXIncludeAware(jboolean arg0);
		jboolean isXIncludeAware();
		QAndroidJniObject newDocumentBuilder();
		void setIgnoringElementContentWhitespace(jboolean arg0);
		void setExpandEntityReferences(jboolean arg0);
		void setIgnoringComments(jboolean arg0);
		void setCoalescing(jboolean arg0);
		jboolean isIgnoringElementContentWhitespace();
		jboolean isExpandEntityReferences();
		jboolean isIgnoringComments();
		jboolean isCoalescing();
		void setSchema(__jni_impl::javax::xml::validation::Schema arg0);
		QAndroidJniObject getSchema();
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
	};
} // namespace __jni_impl::javax::xml::parsers

#include "../../../java/lang/ClassLoader.hpp"
#include "DocumentBuilder.hpp"
#include "../validation/Schema.hpp"

namespace __jni_impl::javax::xml::parsers
{
	// Fields
	
	// Constructors
	void DocumentBuilderFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.DocumentBuilderFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DocumentBuilderFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;");
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject DocumentBuilderFactory::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
	}
	void DocumentBuilderFactory::setAttribute(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject DocumentBuilderFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;");
	}
	void DocumentBuilderFactory::setNamespaceAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject DocumentBuilderFactory::newDefaultNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;");
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;");
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.__jniObject().object());
	}
	void DocumentBuilderFactory::setValidating(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0);
	}
	jboolean DocumentBuilderFactory::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z");
	}
	jboolean DocumentBuilderFactory::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z");
	}
	void DocumentBuilderFactory::setXIncludeAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0);
	}
	jboolean DocumentBuilderFactory::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z");
	}
	QAndroidJniObject DocumentBuilderFactory::newDocumentBuilder()
	{
		return __thiz.callObjectMethod(
			"newDocumentBuilder",
			"()Ljavax/xml/parsers/DocumentBuilder;");
	}
	void DocumentBuilderFactory::setIgnoringElementContentWhitespace(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoringElementContentWhitespace",
			"(Z)V",
			arg0);
	}
	void DocumentBuilderFactory::setExpandEntityReferences(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExpandEntityReferences",
			"(Z)V",
			arg0);
	}
	void DocumentBuilderFactory::setIgnoringComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoringComments",
			"(Z)V",
			arg0);
	}
	void DocumentBuilderFactory::setCoalescing(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCoalescing",
			"(Z)V",
			arg0);
	}
	jboolean DocumentBuilderFactory::isIgnoringElementContentWhitespace()
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringElementContentWhitespace",
			"()Z");
	}
	jboolean DocumentBuilderFactory::isExpandEntityReferences()
	{
		return __thiz.callMethod<jboolean>(
			"isExpandEntityReferences",
			"()Z");
	}
	jboolean DocumentBuilderFactory::isIgnoringComments()
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringComments",
			"()Z");
	}
	jboolean DocumentBuilderFactory::isCoalescing()
	{
		return __thiz.callMethod<jboolean>(
			"isCoalescing",
			"()Z");
	}
	void DocumentBuilderFactory::setSchema(__jni_impl::javax::xml::validation::Schema arg0)
	{
		__thiz.callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DocumentBuilderFactory::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;");
	}
	void DocumentBuilderFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	jboolean DocumentBuilderFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0);
	}
} // namespace __jni_impl::javax::xml::parsers

namespace javax::xml::parsers
{
	class DocumentBuilderFactory : public __jni_impl::javax::xml::parsers::DocumentBuilderFactory
	{
	public:
		DocumentBuilderFactory(QAndroidJniObject obj) { __thiz = obj; }
		DocumentBuilderFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::parsers

#endif // JAVAX_XML_PARSERS_DOCUMENTBUILDERFACTORY

