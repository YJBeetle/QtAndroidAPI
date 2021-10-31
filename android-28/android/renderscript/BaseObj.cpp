#include "./RenderScript.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	BaseObj::BaseObj(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void BaseObj::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean BaseObj::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring BaseObj::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BaseObj::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void BaseObj::setName(jstring arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::renderscript

