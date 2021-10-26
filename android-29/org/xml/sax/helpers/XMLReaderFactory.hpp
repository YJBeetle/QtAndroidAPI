#pragma once

#ifndef ORG_XML_SAX_HELPERS_XMLREADERFACTORY
#define ORG_XML_SAX_HELPERS_XMLREADERFACTORY

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::org::xml::sax::helpers
{
	class XMLReaderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createXMLReader(jstring arg0);
		static QAndroidJniObject createXMLReader(const QString &arg0);
		static QAndroidJniObject createXMLReader();
	};
} // namespace __jni_impl::org::xml::sax::helpers

#include "../../../../java/lang/ClassLoader.hpp"

namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void XMLReaderFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.XMLReaderFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject XMLReaderFactory::createXMLReader(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			arg0
		);
	}
	QAndroidJniObject XMLReaderFactory::createXMLReader(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"(Ljava/lang/String;)Lorg/xml/sax/XMLReader;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject XMLReaderFactory::createXMLReader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.XMLReaderFactory",
			"createXMLReader",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class XMLReaderFactory : public __jni_impl::org::xml::sax::helpers::XMLReaderFactory
	{
	public:
		XMLReaderFactory(QAndroidJniObject obj) { __thiz = obj; }
		XMLReaderFactory()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_XMLREADERFACTORY

