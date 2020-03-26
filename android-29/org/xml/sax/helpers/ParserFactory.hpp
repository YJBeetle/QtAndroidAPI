#pragma once

#ifndef ORG_XML_SAX_HELPERS_PARSERFACTORY
#define ORG_XML_SAX_HELPERS_PARSERFACTORY

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class ParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject makeParser();
		static QAndroidJniObject makeParser(jstring arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void ParserFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.ParserFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ParserFactory::makeParser()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"()Lorg/xml/sax/Parser;"
		);
	}
	QAndroidJniObject ParserFactory::makeParser(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xml.sax.helpers.ParserFactory",
			"makeParser",
			"(Ljava/lang/String;)Lorg/xml/sax/Parser;",
			arg0
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class ParserFactory : public __jni_impl::org::xml::sax::helpers::ParserFactory
	{
	public:
		ParserFactory(QAndroidJniObject obj) { __thiz = obj; }
		ParserFactory()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_PARSERFACTORY

