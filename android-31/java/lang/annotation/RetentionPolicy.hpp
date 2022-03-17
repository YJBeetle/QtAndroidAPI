#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RetentionPolicy.def.hpp"

namespace java::lang::annotation
{
	// Fields
	inline java::lang::annotation::RetentionPolicy RetentionPolicy::CLASS()
	{
		return getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"CLASS",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	inline java::lang::annotation::RetentionPolicy RetentionPolicy::RUNTIME()
	{
		return getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"RUNTIME",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	inline java::lang::annotation::RetentionPolicy RetentionPolicy::SOURCE()
	{
		return getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"SOURCE",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::annotation::RetentionPolicy RetentionPolicy::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;",
			arg0.object<jstring>()
		);
	}
	inline JArray RetentionPolicy::values()
	{
		return callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"values",
			"()[Ljava/lang/annotation/RetentionPolicy;"
		);
	}
} // namespace java::lang::annotation

// Base class headers
#include "../Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::annotation;
#endif
