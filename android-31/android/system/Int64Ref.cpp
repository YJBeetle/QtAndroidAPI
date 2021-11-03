#include "../../JString.hpp"
#include "./Int64Ref.hpp"

namespace android::system
{
	// Fields
	jlong Int64Ref::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	Int64Ref::Int64Ref(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Int64Ref::Int64Ref(jlong arg0)
		: JObject(
			"android.system.Int64Ref",
			"(J)V",
			arg0
		) {}
	
	// Methods
	JString Int64Ref::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

