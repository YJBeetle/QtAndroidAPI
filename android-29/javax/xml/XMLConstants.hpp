#pragma once

#ifndef JAVAX_XML_XMLCONSTANTS
#define JAVAX_XML_XMLCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml
{
	class XMLConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NULL_NS_URI();
		static QAndroidJniObject DEFAULT_NS_PREFIX();
		static QAndroidJniObject XML_NS_URI();
		static QAndroidJniObject XML_NS_PREFIX();
		static QAndroidJniObject XMLNS_ATTRIBUTE_NS_URI();
		static QAndroidJniObject XMLNS_ATTRIBUTE();
		static QAndroidJniObject W3C_XML_SCHEMA_NS_URI();
		static QAndroidJniObject W3C_XML_SCHEMA_INSTANCE_NS_URI();
		static QAndroidJniObject W3C_XPATH_DATATYPE_NS_URI();
		static QAndroidJniObject XML_DTD_NS_URI();
		static QAndroidJniObject RELAXNG_NS_URI();
		static QAndroidJniObject FEATURE_SECURE_PROCESSING();
		static QAndroidJniObject ACCESS_EXTERNAL_DTD();
		static QAndroidJniObject ACCESS_EXTERNAL_SCHEMA();
		static QAndroidJniObject ACCESS_EXTERNAL_STYLESHEET();
		static QAndroidJniObject USE_CATALOG();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml


namespace __jni_impl::javax::xml
{
	// Fields
	QAndroidJniObject XMLConstants::NULL_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"NULL_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::DEFAULT_NS_PREFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"DEFAULT_NS_PREFIX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::XML_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::XML_NS_PREFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_NS_PREFIX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::XMLNS_ATTRIBUTE_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XMLNS_ATTRIBUTE_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::XMLNS_ATTRIBUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XMLNS_ATTRIBUTE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::W3C_XML_SCHEMA_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XML_SCHEMA_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::W3C_XML_SCHEMA_INSTANCE_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XML_SCHEMA_INSTANCE_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::W3C_XPATH_DATATYPE_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XPATH_DATATYPE_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::XML_DTD_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_DTD_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::RELAXNG_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"RELAXNG_NS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::FEATURE_SECURE_PROCESSING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"FEATURE_SECURE_PROCESSING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::ACCESS_EXTERNAL_DTD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_DTD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::ACCESS_EXTERNAL_SCHEMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_SCHEMA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::ACCESS_EXTERNAL_STYLESHEET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_STYLESHEET",
			"Ljava/lang/String;");
	}
	QAndroidJniObject XMLConstants::USE_CATALOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"USE_CATALOG",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void XMLConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.XMLConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::javax::xml

namespace javax::xml
{
	class XMLConstants : public __jni_impl::javax::xml::XMLConstants
	{
	public:
		XMLConstants(QAndroidJniObject obj) { __thiz = obj; }
		XMLConstants()
		{
			__constructor();
		}
	};
} // namespace javax::xml

#endif // JAVAX_XML_XMLCONSTANTS

