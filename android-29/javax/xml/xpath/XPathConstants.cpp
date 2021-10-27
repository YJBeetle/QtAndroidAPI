#include "../namespace/QName.hpp"
#include "./XPathConstants.hpp"

namespace javax::xml::xpath
{
	// Fields
	QAndroidJniObject XPathConstants::BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"BOOLEAN",
			"Ljavax/xml/namespace/QName;"
		);
	}
	jstring XPathConstants::DOM_OBJECT_MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"DOM_OBJECT_MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject XPathConstants::NODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODE",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject XPathConstants::NODESET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODESET",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject XPathConstants::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NUMBER",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject XPathConstants::STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"STRING",
			"Ljavax/xml/namespace/QName;"
		);
	}
	
	XPathConstants::XPathConstants(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace javax::xml::xpath

