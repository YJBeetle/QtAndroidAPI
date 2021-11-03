#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StructTimeval.hpp"

namespace android::system
{
	// Fields
	jlong StructTimeval::tv_sec()
	{
		return getField<jlong>(
			"tv_sec"
		);
	}
	jlong StructTimeval::tv_usec()
	{
		return getField<jlong>(
			"tv_usec"
		);
	}
	
	// QJniObject forward
	StructTimeval::StructTimeval(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::system::StructTimeval StructTimeval::fromMillis(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.system.StructTimeval",
			"fromMillis",
			"(J)Landroid/system/StructTimeval;",
			arg0
		);
	}
	jboolean StructTimeval::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint StructTimeval::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong StructTimeval::toMillis()
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	JString StructTimeval::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

