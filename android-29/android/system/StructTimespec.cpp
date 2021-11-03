#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StructTimespec.hpp"

namespace android::system
{
	// Fields
	jlong StructTimespec::tv_nsec()
	{
		return getField<jlong>(
			"tv_nsec"
		);
	}
	jlong StructTimespec::tv_sec()
	{
		return getField<jlong>(
			"tv_sec"
		);
	}
	
	// QAndroidJniObject forward
	StructTimespec::StructTimespec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StructTimespec::StructTimespec(jlong arg0, jlong arg1)
		: JObject(
			"android.system.StructTimespec",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint StructTimespec::compareTo(android::system::StructTimespec arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/system/StructTimespec;)I",
			arg0.object()
		);
	}
	jint StructTimespec::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean StructTimespec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint StructTimespec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString StructTimespec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

