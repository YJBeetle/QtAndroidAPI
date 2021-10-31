#include "./Xml_Encoding.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/Reader.hpp"
#include "./Xml.hpp"

namespace android::util
{
	// Fields
	jstring Xml::FEATURE_RELAXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml",
			"FEATURE_RELAXED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Xml::Xml(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Xml::asAttributeSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"asAttributeSet",
			"(Lorg/xmlpull/v1/XmlPullParser;)Landroid/util/AttributeSet;",
			arg0.object()
		);
	}
	android::util::Xml_Encoding Xml::findEncodingByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"findEncodingByName",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0
		);
	}
	__JniBaseClass Xml::newPullParser()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	__JniBaseClass Xml::newSerializer()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;"
		);
	}
	void Xml::parse(java::io::Reader arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/Reader;Lorg/xml/sax/ContentHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Xml::parse(jstring arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/ContentHandler;)V",
			arg0,
			arg1.object()
		);
	}
	void Xml::parse(java::io::InputStream arg0, android::util::Xml_Encoding arg1, __JniBaseClass arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/InputStream;Landroid/util/Xml$Encoding;Lorg/xml/sax/ContentHandler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::util

