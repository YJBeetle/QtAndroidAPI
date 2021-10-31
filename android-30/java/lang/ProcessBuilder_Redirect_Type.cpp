#include "./ProcessBuilder_Redirect_Type.hpp"

namespace java::lang
{
	// Fields
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::APPEND()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"APPEND",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::INHERIT()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"INHERIT",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::PIPE()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"PIPE",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::READ()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"READ",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::WRITE()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"WRITE",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	
	// QAndroidJniObject forward
	ProcessBuilder_Redirect_Type::ProcessBuilder_Redirect_Type(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/ProcessBuilder$Redirect$Type;",
			arg0
		);
	}
	jarray ProcessBuilder_Redirect_Type::values()
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"values",
			"()[Ljava/lang/ProcessBuilder$Redirect$Type;"
		).object<jarray>();
	}
} // namespace java::lang

