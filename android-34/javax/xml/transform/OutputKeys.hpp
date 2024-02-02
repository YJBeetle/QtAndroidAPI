#pragma once

#include "../../../JString.hpp"
#include "./OutputKeys.def.hpp"

namespace javax::xml::transform
{
	// Fields
	inline JString OutputKeys::CDATA_SECTION_ELEMENTS()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"CDATA_SECTION_ELEMENTS",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::DOCTYPE_PUBLIC()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_PUBLIC",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::DOCTYPE_SYSTEM()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_SYSTEM",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::ENCODING()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"ENCODING",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::INDENT()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"INDENT",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::MEDIA_TYPE()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"MEDIA_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::METHOD_()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"METHOD",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::OMIT_XML_DECLARATION()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"OMIT_XML_DECLARATION",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::STANDALONE()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"STANDALONE",
			"Ljava/lang/String;"
		);
	}
	inline JString OutputKeys::VERSION()
	{
		return getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"VERSION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace javax::xml::transform

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::transform;
#endif
