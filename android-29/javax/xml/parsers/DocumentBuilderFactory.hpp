#pragma once

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
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newDefaultNSInstance();
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newInstance(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newNSInstance();
		static QAndroidJniObject newNSInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newNSInstance(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1);
		jobject getAttribute(jstring arg0);
		jobject getAttribute(const QString &arg0);
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		QAndroidJniObject getSchema();
		jboolean isCoalescing();
		jboolean isExpandEntityReferences();
		jboolean isIgnoringComments();
		jboolean isIgnoringElementContentWhitespace();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		QAndroidJniObject newDocumentBuilder();
		void setAttribute(jstring arg0, jobject arg1);
		void setAttribute(const QString &arg0, jobject arg1);
		void setCoalescing(jboolean arg0);
		void setExpandEntityReferences(jboolean arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setIgnoringComments(jboolean arg0);
		void setIgnoringElementContentWhitespace(jboolean arg0);
		void setNamespaceAware(jboolean arg0);
		void setSchema(__jni_impl::javax::xml::validation::Schema arg0);
		void setValidating(jboolean arg0);
		void setXIncludeAware(jboolean arg0);
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
	QAndroidJniObject DocumentBuilderFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newDefaultNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newDefaultNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newInstance(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"()Ljavax/xml/parsers/DocumentBuilderFactory;"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newNSInstance(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.parsers.DocumentBuilderFactory",
			"newNSInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobject DocumentBuilderFactory::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject DocumentBuilderFactory::getAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jboolean DocumentBuilderFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean DocumentBuilderFactory::getFeature(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DocumentBuilderFactory::getSchema()
	{
		return __thiz.callObjectMethod(
			"getSchema",
			"()Ljavax/xml/validation/Schema;"
		);
	}
	jboolean DocumentBuilderFactory::isCoalescing()
	{
		return __thiz.callMethod<jboolean>(
			"isCoalescing",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isExpandEntityReferences()
	{
		return __thiz.callMethod<jboolean>(
			"isExpandEntityReferences",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringComments()
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringComments",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isIgnoringElementContentWhitespace()
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringElementContentWhitespace",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	jboolean DocumentBuilderFactory::isXIncludeAware()
	{
		return __thiz.callMethod<jboolean>(
			"isXIncludeAware",
			"()Z"
		);
	}
	QAndroidJniObject DocumentBuilderFactory::newDocumentBuilder()
	{
		return __thiz.callObjectMethod(
			"newDocumentBuilder",
			"()Ljavax/xml/parsers/DocumentBuilder;"
		);
	}
	void DocumentBuilderFactory::setAttribute(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void DocumentBuilderFactory::setAttribute(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void DocumentBuilderFactory::setCoalescing(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCoalescing",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setExpandEntityReferences(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExpandEntityReferences",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void DocumentBuilderFactory::setFeature(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void DocumentBuilderFactory::setIgnoringComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoringComments",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setIgnoringElementContentWhitespace(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoringElementContentWhitespace",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setNamespaceAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setSchema(__jni_impl::javax::xml::validation::Schema arg0)
	{
		__thiz.callMethod<void>(
			"setSchema",
			"(Ljavax/xml/validation/Schema;)V",
			arg0.__jniObject().object()
		);
	}
	void DocumentBuilderFactory::setValidating(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	void DocumentBuilderFactory::setXIncludeAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setXIncludeAware",
			"(Z)V",
			arg0
		);
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

