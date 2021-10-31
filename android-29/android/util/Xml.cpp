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
	
	Xml::Xml(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Xml::asAttributeSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"asAttributeSet",
			"(Lorg/xmlpull/v1/XmlPullParser;)Landroid/util/AttributeSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Xml::findEncodingByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"findEncodingByName",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0
		);
	}
	QAndroidJniObject Xml::newPullParser()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	QAndroidJniObject Xml::newSerializer()
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
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Xml::parse(jstring arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/ContentHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Xml::parse(java::io::InputStream arg0, android::util::Xml_Encoding arg1, __JniBaseClass arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/InputStream;Landroid/util/Xml$Encoding;Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::util

