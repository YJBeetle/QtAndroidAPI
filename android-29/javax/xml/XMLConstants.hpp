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
		static jstring ACCESS_EXTERNAL_DTD();
		static jstring ACCESS_EXTERNAL_SCHEMA();
		static jstring ACCESS_EXTERNAL_STYLESHEET();
		static jstring DEFAULT_NS_PREFIX();
		static jstring FEATURE_SECURE_PROCESSING();
		static jstring NULL_NS_URI();
		static jstring RELAXNG_NS_URI();
		static jstring USE_CATALOG();
		static jstring W3C_XML_SCHEMA_INSTANCE_NS_URI();
		static jstring W3C_XML_SCHEMA_NS_URI();
		static jstring W3C_XPATH_DATATYPE_NS_URI();
		static jstring XMLNS_ATTRIBUTE();
		static jstring XMLNS_ATTRIBUTE_NS_URI();
		static jstring XML_DTD_NS_URI();
		static jstring XML_NS_PREFIX();
		static jstring XML_NS_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml


namespace __jni_impl::javax::xml
{
	// Fields
	jstring XMLConstants::ACCESS_EXTERNAL_DTD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_DTD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::ACCESS_EXTERNAL_SCHEMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_SCHEMA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::ACCESS_EXTERNAL_STYLESHEET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_STYLESHEET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::DEFAULT_NS_PREFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"DEFAULT_NS_PREFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::FEATURE_SECURE_PROCESSING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"FEATURE_SECURE_PROCESSING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::NULL_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"NULL_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::RELAXNG_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"RELAXNG_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::USE_CATALOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"USE_CATALOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::W3C_XML_SCHEMA_INSTANCE_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XML_SCHEMA_INSTANCE_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::W3C_XML_SCHEMA_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XML_SCHEMA_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::W3C_XPATH_DATATYPE_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XPATH_DATATYPE_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::XMLNS_ATTRIBUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XMLNS_ATTRIBUTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::XMLNS_ATTRIBUTE_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XMLNS_ATTRIBUTE_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::XML_DTD_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_DTD_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::XML_NS_PREFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_NS_PREFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLConstants::XML_NS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_NS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
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

