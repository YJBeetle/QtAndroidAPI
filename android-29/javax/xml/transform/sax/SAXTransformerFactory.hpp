#pragma once

#ifndef JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY
#define JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY

#include "../../../../__JniBaseClass.hpp"
#include "../TransformerFactory.hpp"


namespace __jni_impl::javax::xml::transform::sax
{
	class SAXTransformerFactory : public __jni_impl::javax::xml::transform::TransformerFactory
	{
	public:
		// Fields
		static jstring FEATURE();
		static jstring FEATURE_XMLFILTER();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject newTransformerHandler();
		QAndroidJniObject newTransformerHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject newTemplatesHandler();
		QAndroidJniObject newXMLFilter(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::javax::xml::transform::sax


namespace __jni_impl::javax::xml::transform::sax
{
	// Fields
	jstring SAXTransformerFactory::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXTransformerFactory::FEATURE_XMLFILTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"FEATURE_XMLFILTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SAXTransformerFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXTransformerFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SAXTransformerFactory::newTransformerHandler()
	{
		return __thiz.callObjectMethod(
			"newTransformerHandler",
			"()Ljavax/xml/transform/sax/TransformerHandler;"
		);
	}
	QAndroidJniObject SAXTransformerFactory::newTransformerHandler(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newTransformerHandler",
			"(Ljavax/xml/transform/Templates;)Ljavax/xml/transform/sax/TransformerHandler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SAXTransformerFactory::newTemplatesHandler()
	{
		return __thiz.callObjectMethod(
			"newTemplatesHandler",
			"()Ljavax/xml/transform/sax/TemplatesHandler;"
		);
	}
	QAndroidJniObject SAXTransformerFactory::newXMLFilter(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"newXMLFilter",
			"(Ljavax/xml/transform/Templates;)Lorg/xml/sax/XMLFilter;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::xml::transform::sax

namespace javax::xml::transform::sax
{
	class SAXTransformerFactory : public __jni_impl::javax::xml::transform::sax::SAXTransformerFactory
	{
	public:
		SAXTransformerFactory(QAndroidJniObject obj) { __thiz = obj; }
		SAXTransformerFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform::sax

#endif // JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY

