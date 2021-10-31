#include "./Xml_Encoding.hpp"

namespace android::util
{
	// Fields
	QAndroidJniObject Xml_Encoding::ISO_8859_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"ISO_8859_1",
			"Landroid/util/Xml$Encoding;"
		);
	}
	QAndroidJniObject Xml_Encoding::US_ASCII()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"US_ASCII",
			"Landroid/util/Xml$Encoding;"
		);
	}
	QAndroidJniObject Xml_Encoding::UTF_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_16",
			"Landroid/util/Xml$Encoding;"
		);
	}
	QAndroidJniObject Xml_Encoding::UTF_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_8",
			"Landroid/util/Xml$Encoding;"
		);
	}
	
	Xml_Encoding::Xml_Encoding(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Xml_Encoding::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0
		);
	}
	jarray Xml_Encoding::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"values",
			"()[Landroid/util/Xml$Encoding;"
		).object<jarray>();
	}
} // namespace android::util

