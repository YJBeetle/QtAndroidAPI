#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Xml_Encoding.hpp"

namespace android::util
{
	// Fields
	android::util::Xml_Encoding Xml_Encoding::ISO_8859_1()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"ISO_8859_1",
			"Landroid/util/Xml$Encoding;"
		);
	}
	android::util::Xml_Encoding Xml_Encoding::US_ASCII()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"US_ASCII",
			"Landroid/util/Xml$Encoding;"
		);
	}
	android::util::Xml_Encoding Xml_Encoding::UTF_16()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_16",
			"Landroid/util/Xml$Encoding;"
		);
	}
	android::util::Xml_Encoding Xml_Encoding::UTF_8()
	{
		return getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_8",
			"Landroid/util/Xml$Encoding;"
		);
	}
	
	// QJniObject forward
	Xml_Encoding::Xml_Encoding(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Xml_Encoding Xml_Encoding::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0.object<jstring>()
		);
	}
	JArray Xml_Encoding::values()
	{
		return callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"values",
			"()[Landroid/util/Xml$Encoding;"
		);
	}
} // namespace android::util

