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
	jboolean StructTimeval::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint StructTimeval::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong StructTimeval::toMillis() const
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	JString StructTimeval::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

