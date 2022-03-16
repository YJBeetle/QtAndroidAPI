#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	void BaseObj::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean BaseObj::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString BaseObj::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint BaseObj::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void BaseObj::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::renderscript

