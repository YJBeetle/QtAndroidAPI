#pragma once

#ifndef ANDROID_UTIL_XML
#define ANDROID_UTIL_XML

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::util
{
	class Xml_Encoding;
}
namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::android::util
{
	class Xml : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FEATURE_RELAXED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void parse(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static void parse(__jni_impl::java::io::InputStream arg0, __jni_impl::android::util::Xml_Encoding arg1, __jni_impl::__JniBaseClass arg2);
		static void parse(__jni_impl::java::io::Reader arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newPullParser();
		static QAndroidJniObject newSerializer();
		static QAndroidJniObject findEncodingByName(jstring arg0);
		static QAndroidJniObject asAttributeSet(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::util

#include "../../java/io/InputStream.hpp"
#include "Xml_Encoding.hpp"
#include "../../java/io/Reader.hpp"

namespace __jni_impl::android::util
{
	// Fields
	QAndroidJniObject Xml::FEATURE_RELAXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml",
			"FEATURE_RELAXED",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Xml::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.Xml",
			"(V)V");
	}
	
	// Methods
	void Xml::parse(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/ContentHandler;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Xml::parse(__jni_impl::java::io::InputStream arg0, __jni_impl::android::util::Xml_Encoding arg1, __jni_impl::__JniBaseClass arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/InputStream;Landroid/util/Xml$Encoding;Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Xml::parse(__jni_impl::java::io::Reader arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/Reader;Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Xml::newPullParser()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;");
	}
	QAndroidJniObject Xml::newSerializer()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;");
	}
	QAndroidJniObject Xml::findEncodingByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"findEncodingByName",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0);
	}
	QAndroidJniObject Xml::asAttributeSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml",
			"asAttributeSet",
			"(Lorg/xmlpull/v1/XmlPullParser;)Landroid/util/AttributeSet;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Xml : public __jni_impl::android::util::Xml
	{
	public:
		Xml(QAndroidJniObject obj) { __thiz = obj; }
		Xml()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_XML

