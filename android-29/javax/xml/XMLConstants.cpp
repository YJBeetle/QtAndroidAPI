#include "../../JString.hpp"
#include "./XMLConstants.hpp"

namespace javax::xml
{
	// Fields
	JString XMLConstants::ACCESS_EXTERNAL_DTD()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_DTD",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::ACCESS_EXTERNAL_SCHEMA()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_SCHEMA",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::ACCESS_EXTERNAL_STYLESHEET()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"ACCESS_EXTERNAL_STYLESHEET",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::DEFAULT_NS_PREFIX()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"DEFAULT_NS_PREFIX",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::FEATURE_SECURE_PROCESSING()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"FEATURE_SECURE_PROCESSING",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::NULL_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"NULL_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::RELAXNG_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"RELAXNG_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::USE_CATALOG()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"USE_CATALOG",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::W3C_XML_SCHEMA_INSTANCE_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XML_SCHEMA_INSTANCE_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::W3C_XML_SCHEMA_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XML_SCHEMA_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::W3C_XPATH_DATATYPE_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"W3C_XPATH_DATATYPE_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::XMLNS_ATTRIBUTE()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"XMLNS_ATTRIBUTE",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::XMLNS_ATTRIBUTE_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"XMLNS_ATTRIBUTE_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::XML_DTD_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_DTD_NS_URI",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::XML_NS_PREFIX()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_NS_PREFIX",
			"Ljava/lang/String;"
		);
	}
	JString XMLConstants::XML_NS_URI()
	{
		return getStaticObjectField(
			"javax.xml.XMLConstants",
			"XML_NS_URI",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	XMLConstants::XMLConstants(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace javax::xml

