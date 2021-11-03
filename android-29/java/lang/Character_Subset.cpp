#include "./Character_Subset.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Character_Subset::Character_Subset(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Character_Subset::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Character_Subset::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Character_Subset::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

