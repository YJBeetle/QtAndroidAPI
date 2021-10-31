#include "./RetentionPolicy.hpp"

namespace java::lang::annotation
{
	// Fields
	QAndroidJniObject RetentionPolicy::CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"CLASS",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	QAndroidJniObject RetentionPolicy::RUNTIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"RUNTIME",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	QAndroidJniObject RetentionPolicy::SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.annotation.RetentionPolicy",
			"SOURCE",
			"Ljava/lang/annotation/RetentionPolicy;"
		);
	}
	
	// QAndroidJniObject forward
	RetentionPolicy::RetentionPolicy(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject RetentionPolicy::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;",
			arg0
		);
	}
	jarray RetentionPolicy::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.annotation.RetentionPolicy",
			"values",
			"()[Ljava/lang/annotation/RetentionPolicy;"
		).object<jarray>();
	}
} // namespace java::lang::annotation
