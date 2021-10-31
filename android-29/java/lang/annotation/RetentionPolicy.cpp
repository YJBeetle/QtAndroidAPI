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
	
	// QAndroidJniObject forward
	RetentionPolicy::RetentionPolicy(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::annotation::RetentionPolicy RetentionPolicy::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;",
			arg0
		);
	}
	jarray RetentionPolicy::values()
	{
		return callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"values",
			"()[Ljava/lang/annotation/RetentionPolicy;"
		).object<jarray>();
	}
} // namespace java::lang::annotation

