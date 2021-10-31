#include "./KeyRep_Type.hpp"

namespace java::security
{
	// Fields
	java::security::KeyRep_Type KeyRep_Type::PRIVATE()
	{
		return getStaticObjectField(
			"java.security.KeyRep$Type",
			"PRIVATE",
			"Ljava/security/KeyRep$Type;"
		);
	}
	java::security::KeyRep_Type KeyRep_Type::PUBLIC()
	{
		return getStaticObjectField(
			"java.security.KeyRep$Type",
			"PUBLIC",
			"Ljava/security/KeyRep$Type;"
		);
	}
	java::security::KeyRep_Type KeyRep_Type::SECRET()
	{
		return getStaticObjectField(
			"java.security.KeyRep$Type",
			"SECRET",
			"Ljava/security/KeyRep$Type;"
		);
	}
	
	// QAndroidJniObject forward
	KeyRep_Type::KeyRep_Type(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyRep_Type KeyRep_Type::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/KeyRep$Type;",
			arg0
		);
	}
	jarray KeyRep_Type::values()
	{
		return callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"values",
			"()[Ljava/security/KeyRep$Type;"
		).object<jarray>();
	}
} // namespace java::security

