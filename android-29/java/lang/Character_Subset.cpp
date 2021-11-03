#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Character_Subset.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Character_Subset::Character_Subset(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Character_Subset::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Character_Subset::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Character_Subset::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

