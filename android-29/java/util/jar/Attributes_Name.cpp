#include "./Attributes_Name.hpp"

namespace java::util::jar
{
	// Fields
	java::util::jar::Attributes_Name Attributes_Name::CLASS_PATH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"CLASS_PATH",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"CONTENT_TYPE",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::EXTENSION_INSTALLATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"EXTENSION_INSTALLATION",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::EXTENSION_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"EXTENSION_LIST",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::EXTENSION_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"EXTENSION_NAME",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::IMPLEMENTATION_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_TITLE",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::IMPLEMENTATION_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_URL",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::IMPLEMENTATION_VENDOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_VENDOR",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::IMPLEMENTATION_VENDOR_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_VENDOR_ID",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::IMPLEMENTATION_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"IMPLEMENTATION_VERSION",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::MAIN_CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"MAIN_CLASS",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::MANIFEST_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"MANIFEST_VERSION",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::MULTI_RELEASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"MULTI_RELEASE",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::SEALED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SEALED",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::SIGNATURE_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SIGNATURE_VERSION",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::SPECIFICATION_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SPECIFICATION_TITLE",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::SPECIFICATION_VENDOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SPECIFICATION_VENDOR",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	java::util::jar::Attributes_Name Attributes_Name::SPECIFICATION_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.Attributes$Name",
			"SPECIFICATION_VERSION",
			"Ljava/util/jar/Attributes$Name;"
		);
	}
	
	// QAndroidJniObject forward
	Attributes_Name::Attributes_Name(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Attributes_Name::Attributes_Name(jstring arg0)
		: __JniBaseClass(
			"java.util.jar.Attributes$Name",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jboolean Attributes_Name::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Attributes_Name::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Attributes_Name::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::jar

