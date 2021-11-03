#include "./OutputKeys.hpp"

namespace javax::xml::transform
{
	// Fields
	jstring OutputKeys::CDATA_SECTION_ELEMENTS()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"CDATA_SECTION_ELEMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::DOCTYPE_PUBLIC()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_PUBLIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::DOCTYPE_SYSTEM()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_SYSTEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::ENCODING()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::INDENT()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"INDENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::MEDIA_TYPE()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"MEDIA_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::_METHOD()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::OMIT_XML_DECLARATION()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"OMIT_XML_DECLARATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::STANDALONE()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"STANDALONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::VERSION()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	OutputKeys::OutputKeys(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace javax::xml::transform

