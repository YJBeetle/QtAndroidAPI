#include "./StructTimespec.hpp"

namespace android::system
{
	// Fields
	jlong StructTimespec::tv_nsec()
	{
		return __thiz.getField<jlong>(
			"tv_nsec"
		);
	}
	jlong StructTimespec::tv_sec()
	{
		return __thiz.getField<jlong>(
			"tv_sec"
		);
	}
	
	StructTimespec::StructTimespec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StructTimespec::StructTimespec(jlong &arg0, jlong &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructTimespec",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint StructTimespec::compareTo(android::system::StructTimespec arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/system/StructTimespec;)I",
			arg0.__jniObject().object()
		);
	}
	jint StructTimespec::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean StructTimespec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint StructTimespec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring StructTimespec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

