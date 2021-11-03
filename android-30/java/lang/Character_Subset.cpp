#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Character_Subset.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Character_Subset::Character_Subset(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Character_Subset::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Character_Subset::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Character_Subset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

