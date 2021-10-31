#include "./KeyRep_Type.hpp"

namespace java::security
{
	// Fields
	QAndroidJniObject KeyRep_Type::PRIVATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.KeyRep$Type",
			"PRIVATE",
			"Ljava/security/KeyRep$Type;"
		);
	}
	QAndroidJniObject KeyRep_Type::PUBLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.KeyRep$Type",
			"PUBLIC",
			"Ljava/security/KeyRep$Type;"
		);
	}
	QAndroidJniObject KeyRep_Type::SECRET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.KeyRep$Type",
			"SECRET",
			"Ljava/security/KeyRep$Type;"
		);
	}
	
	KeyRep_Type::KeyRep_Type(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject KeyRep_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/KeyRep$Type;",
			arg0
		);
	}
	jarray KeyRep_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"values",
			"()[Ljava/security/KeyRep$Type;"
		).object<jarray>();
	}
} // namespace java::security

