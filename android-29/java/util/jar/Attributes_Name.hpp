#pragma once

#ifndef JAVA_UTIL_JAR_ATTRIBUTES_NAME
#define JAVA_UTIL_JAR_ATTRIBUTES_NAME

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::jar
{
	class Attributes_Name : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject MANIFEST_VERSION();
		static QAndroidJniObject SIGNATURE_VERSION();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CLASS_PATH();
		static QAndroidJniObject MAIN_CLASS();
		static QAndroidJniObject SEALED();
		static QAndroidJniObject EXTENSION_LIST();
		static QAndroidJniObject EXTENSION_NAME();
		static QAndroidJniObject EXTENSION_INSTALLATION();
		static QAndroidJniObject IMPLEMENTATION_TITLE();
		static QAndroidJniObject IMPLEMENTATION_VERSION();
		static QAndroidJniObject IMPLEMENTATION_VENDOR();
		static QAndroidJniObject IMPLEMENTATION_VENDOR_ID();
		static QAndroidJniObject IMPLEMENTATION_URL();
		static QAndroidJniObject SPECIFICATION_TITLE();
		static QAndroidJniObject SPECIFICATION_VERSION();
		static QAndroidJniObject SPECIFICATION_VENDOR();
		static QAndroidJniObject MULTI_RELEASE();
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
	};
} // namespace __jni_impl::java::util::jar


namespace __jni_impl::java::util::jar
{
	// Fields
	QAndroidJniObject Attributes_Name::MANIFEST_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"MANIFEST_VERSION",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::SIGNATURE_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SIGNATURE_VERSION",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"CONTENT_TYPE",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::CLASS_PATH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"CLASS_PATH",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::MAIN_CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"MAIN_CLASS",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::SEALED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SEALED",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::EXTENSION_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"EXTENSION_LIST",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::EXTENSION_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"EXTENSION_NAME",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::EXTENSION_INSTALLATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"EXTENSION_INSTALLATION",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::IMPLEMENTATION_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_TITLE",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::IMPLEMENTATION_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_VERSION",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::IMPLEMENTATION_VENDOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_VENDOR",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::IMPLEMENTATION_VENDOR_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_VENDOR_ID",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::IMPLEMENTATION_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_URL",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::SPECIFICATION_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SPECIFICATION_TITLE",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::SPECIFICATION_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SPECIFICATION_VERSION",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::SPECIFICATION_VENDOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SPECIFICATION_VENDOR",
			"Ljava/util/jar/Attributes$Name;");
	}
	QAndroidJniObject Attributes_Name::MULTI_RELEASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"MULTI_RELEASE",
			"Ljava/util/jar/Attributes$Name;");
	}
	
	// Constructors
	void Attributes_Name::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Attributes$Name",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean Attributes_Name::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Attributes_Name::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Attributes_Name::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class Attributes_Name : public __jni_impl::java::util::jar::Attributes_Name
	{
	public:
		Attributes_Name(QAndroidJniObject obj) { __thiz = obj; }
		Attributes_Name(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::jar

#endif // JAVA_UTIL_JAR_ATTRIBUTES_NAME

