#include "../../../java/util/ArrayList.hpp"
#include "../../../java/util/HashMap.hpp"
#include "./XmlPullParserFactory.hpp"

namespace org::xmlpull::v1
{
	// Fields
	jstring XmlPullParserFactory::PROPERTY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xmlpull.v1.XmlPullParserFactory",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	XmlPullParserFactory::XmlPullParserFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject XmlPullParserFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xmlpull.v1.XmlPullParserFactory",
			"newInstance",
			"()Lorg/xmlpull/v1/XmlPullParserFactory;"
		);
	}
	QAndroidJniObject XmlPullParserFactory::newInstance(jstring arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.xmlpull.v1.XmlPullParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/Class;)Lorg/xmlpull/v1/XmlPullParserFactory;",
			arg0,
			arg1
		);
	}
	jboolean XmlPullParserFactory::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean XmlPullParserFactory::isNamespaceAware()
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean XmlPullParserFactory::isValidating()
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	QAndroidJniObject XmlPullParserFactory::newPullParser()
	{
		return callObjectMethod(
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	QAndroidJniObject XmlPullParserFactory::newSerializer()
	{
		return callObjectMethod(
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;"
		);
	}
	void XmlPullParserFactory::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void XmlPullParserFactory::setNamespaceAware(jboolean arg0)
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void XmlPullParserFactory::setValidating(jboolean arg0)
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
} // namespace org::xmlpull::v1

