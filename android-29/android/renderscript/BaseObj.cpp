#include "./RenderScript.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	BaseObj::BaseObj(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BaseObj::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean BaseObj::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString BaseObj::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint BaseObj::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void BaseObj::setName(JString arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::renderscript

