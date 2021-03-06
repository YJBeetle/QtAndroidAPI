#pragma once

#ifndef ORG_XMLPULL_V1_XMLPULLPARSERFACTORY
#define ORG_XMLPULL_V1_XMLPULLPARSERFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::org::xmlpull::v1
{
	class XmlPullParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PROPERTY_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, jclass arg1);
		QAndroidJniObject newPullParser();
		QAndroidJniObject newSerializer();
		void setFeature(jstring arg0, jboolean arg1);
		jboolean getFeature(jstring arg0);
		void setNamespaceAware(jboolean arg0);
		void setValidating(jboolean arg0);
		jboolean isNamespaceAware();
		jboolean isValidating();
	};
} // namespace __jni_impl::org::xmlpull::v1

#include "../../../java/util/HashMap.hpp"
#include "../../../java/util/ArrayList.hpp"

namespace __jni_impl::org::xmlpull::v1
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
	
	// Constructors
	void XmlPullParserFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xmlpull.v1.XmlPullParserFactory",
			"(V)V");
	}
	
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
	QAndroidJniObject XmlPullParserFactory::newPullParser()
	{
		return __thiz.callObjectMethod(
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	QAndroidJniObject XmlPullParserFactory::newSerializer()
	{
		return __thiz.callObjectMethod(
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;"
		);
	}
	void XmlPullParserFactory::setFeature(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	jboolean XmlPullParserFactory::getFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void XmlPullParserFactory::setNamespaceAware(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void XmlPullParserFactory::setValidating(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
	jboolean XmlPullParserFactory::isNamespaceAware()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean XmlPullParserFactory::isValidating()
	{
		return __thiz.callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
} // namespace __jni_impl::org::xmlpull::v1

namespace org::xmlpull::v1
{
	class XmlPullParserFactory : public __jni_impl::org::xmlpull::v1::XmlPullParserFactory
	{
	public:
		XmlPullParserFactory(QAndroidJniObject obj) { __thiz = obj; }
		XmlPullParserFactory()
		{
			__constructor();
		}
	};
} // namespace org::xmlpull::v1

#endif // ORG_XMLPULL_V1_XMLPULLPARSERFACTORY

