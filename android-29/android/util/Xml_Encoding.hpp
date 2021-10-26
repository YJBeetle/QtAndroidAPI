#pragma once

#ifndef ANDROID_UTIL_XML_ENCODING
#define ANDROID_UTIL_XML_ENCODING

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::util
{
	class Xml_Encoding : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject US_ASCII();
		static QAndroidJniObject UTF_8();
		static QAndroidJniObject UTF_16();
		static QAndroidJniObject ISO_8859_1();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	QAndroidJniObject Xml_Encoding::US_ASCII()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"US_ASCII",
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
	QAndroidJniObject Xml_Encoding::UTF_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"UTF_16",
			"Landroid/util/Xml$Encoding;"
		);
	}
	QAndroidJniObject Xml_Encoding::ISO_8859_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Xml$Encoding",
			"ISO_8859_1",
			"Landroid/util/Xml$Encoding;"
		);
	}
	
	// Constructors
	void Xml_Encoding::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.Xml$Encoding",
			"(V)V");
	}
	
	// Methods
	jarray Xml_Encoding::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"values",
			"()[Landroid/util/Xml$Encoding;"
		).object<jarray>();
	}
	QAndroidJniObject Xml_Encoding::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0
		);
	}
	QAndroidJniObject Xml_Encoding::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Xml$Encoding",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Xml_Encoding : public __jni_impl::android::util::Xml_Encoding
	{
	public:
		Xml_Encoding(QAndroidJniObject obj) { __thiz = obj; }
		Xml_Encoding()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_XML_ENCODING

