#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Xml_Encoding.def.hpp"

namespace android::util
{
	// Fields
	inline android::util::Xml_Encoding Xml_Encoding::ISO_8859_1()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"ISO_8859_1",
			"Landroid/util/Xml$Encoding;"
		);
	}
	inline android::util::Xml_Encoding Xml_Encoding::US_ASCII()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"US_ASCII",
			"Landroid/util/Xml$Encoding;"
		);
	}
	inline android::util::Xml_Encoding Xml_Encoding::UTF_16()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_16",
			"Landroid/util/Xml$Encoding;"
		);
	}
	inline android::util::Xml_Encoding Xml_Encoding::UTF_8()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_8",
			"Landroid/util/Xml$Encoding;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::util::Xml_Encoding Xml_Encoding::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0.object<jstring>()
		);
	}
	inline JArray Xml_Encoding::values()
	{
		return callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"values",
			"()[Landroid/util/Xml$Encoding;"
		);
	}
} // namespace android::util

// Base class headers
#include "../../java/lang/Enum.hpp"

