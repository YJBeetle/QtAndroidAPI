#include "./ElementType.hpp"

namespace java::lang::annotation
{
	// Fields
	java::lang::annotation::ElementType ElementType::ANNOTATION_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"ANNOTATION_TYPE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::CONSTRUCTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"CONSTRUCTOR",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::FIELD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"FIELD",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::LOCAL_VARIABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"LOCAL_VARIABLE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"METHOD",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::MODULE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"MODULE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"PACKAGE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::PARAMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"PARAMETER",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::RECORD_COMPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"RECORD_COMPONENT",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::TYPE_PARAMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE_PARAMETER",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	java::lang::annotation::ElementType ElementType::TYPE_USE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE_USE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	
	// QAndroidJniObject forward
	ElementType::ElementType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::annotation::ElementType ElementType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.ElementType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/ElementType;",
			arg0
		);
	}
	jarray ElementType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.ElementType",
			"values",
			"()[Ljava/lang/annotation/ElementType;"
		).object<jarray>();
	}
} // namespace java::lang::annotation

