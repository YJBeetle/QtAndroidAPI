#pragma once

#ifndef JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY
#define JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::javax::xml::transform
{
	class Transformer;
}

namespace __jni_impl::javax::xml::transform
{
	class TransformerFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newInstance();
		QAndroidJniObject getAttribute(jstring arg0);
		void setAttribute(jstring arg0, jobject arg1);
		static QAndroidJniObject newDefaultInstance();
		QAndroidJniObject newTransformer();
		QAndroidJniObject newTransformer(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject newTemplates(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getAssociatedStylesheet(__jni_impl::__JniBaseClass arg0, jstring arg1, jstring arg2, jstring arg3);
		void setURIResolver(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getURIResolver();
		void setErrorListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getErrorListener();
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
	};
} // namespace __jni_impl::javax::xml::transform

#include "../../../java/lang/ClassLoader.hpp"
#include "Transformer.hpp"

namespace __jni_impl::javax::xml::transform
{
	// Fields
	
	// Constructors
	void TransformerFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TransformerFactory::newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject TransformerFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newInstance",
			"()Ljavax/xml/transform/TransformerFactory;");
	}
	QAndroidJniObject TransformerFactory::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
	}
	void TransformerFactory::setAttribute(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject TransformerFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.transform.TransformerFactory",
			"newDefaultInstance",
			"()Ljavax/xml/transform/TransformerFactory;");
	}
	QAndroidJniObject TransformerFactory::newTransformer()
	{
		return __thiz.callObjectMethod(
			"newTransformer",
			"()Ljavax/xml/transform/Transformer;");
	}
	QAndroidJniObject TransformerFactory::newTransformer(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newTransformer",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TransformerFactory::newTemplates(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newTemplates",
			"(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TransformerFactory::getAssociatedStylesheet(__jni_impl::__JniBaseClass arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return __thiz.callObjectMethod(
			"getAssociatedStylesheet",
			"(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void TransformerFactory::setURIResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TransformerFactory::getURIResolver()
	{
		return __thiz.callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;");
	}
	void TransformerFactory::setErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TransformerFactory::getErrorListener()
	{
		return __thiz.callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;");
	}
	void TransformerFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	jboolean TransformerFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0);
	}
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class TransformerFactory : public __jni_impl::javax::xml::transform::TransformerFactory
	{
	public:
		TransformerFactory(QAndroidJniObject obj) { __thiz = obj; }
		TransformerFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform

#endif // JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY

