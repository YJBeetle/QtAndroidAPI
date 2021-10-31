#include "./OutputKeys.hpp"

namespace javax::xml::transform
{
	// Fields
	jstring OutputKeys::CDATA_SECTION_ELEMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"CDATA_SECTION_ELEMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::DOCTYPE_PUBLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_PUBLIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::DOCTYPE_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_SYSTEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::INDENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"INDENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::MEDIA_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"MEDIA_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::OMIT_XML_DECLARATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"OMIT_XML_DECLARATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"STANDALONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	OutputKeys::OutputKeys(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace javax::xml::transform

