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
	
	// QAndroidJniObject forward
	StructTimeval::StructTimeval(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean StructTimeval::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring StructTimeval::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

