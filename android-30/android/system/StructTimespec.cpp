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
	
	// QJniObject forward
	StructTimespec::StructTimespec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StructTimespec::StructTimespec(jlong arg0, jlong arg1)
		: __JniBaseClass(
			"android.system.StructTimespec",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint StructTimespec::compareTo(android::system::StructTimespec arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/system/StructTimespec;)I",
			arg0.object()
		);
	}
	jint StructTimespec::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean StructTimespec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint StructTimespec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring StructTimespec::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

