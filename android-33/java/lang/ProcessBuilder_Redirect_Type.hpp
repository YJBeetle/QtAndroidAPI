#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ProcessBuilder_Redirect_Type.def.hpp"

namespace java::lang
{
	// Fields
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::APPEND()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"APPEND",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::INHERIT()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"INHERIT",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::PIPE()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"PIPE",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::READ()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"READ",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::WRITE()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"WRITE",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/ProcessBuilder$Redirect$Type;",
			arg0.object<jstring>()
		);
	}
	inline JArray ProcessBuilder_Redirect_Type::values()
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"values",
			"()[Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
