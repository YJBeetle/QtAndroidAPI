#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RetentionPolicy.hpp"

namespace java::lang::annotation
{
	// Fields
	java::lang::annotation::RetentionPolicy RetentionPolicy::CLASS()
	{
		return getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"CLASS",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	java::lang::annotation::RetentionPolicy RetentionPolicy::RUNTIME()
	{
		return getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"RUNTIME",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	java::lang::annotation::RetentionPolicy RetentionPolicy::SOURCE()
	{
		return getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"SOURCE",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	
	// Constructors
	
	// Methods
	java::lang::annotation::RetentionPolicy RetentionPolicy::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;",
			arg0.object<jstring>()
		);
	}
	JArray RetentionPolicy::values()
	{
		return callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"values",
			"()[Ljava/lang/annotation/RetentionPolicy;"
		);
	}
} // namespace java::lang::annotation

