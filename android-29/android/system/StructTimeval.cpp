#include "./StructTimeval.hpp"

namespace android::system
{
	// Fields
	jlong StructTimeval::tv_sec()
	{
		return __thiz.getField<jlong>(
			"tv_sec"
		);
	}
	jlong StructTimeval::tv_usec()
	{
		return __thiz.getField<jlong>(
			"tv_usec"
		);
	}
	
	StructTimeval::StructTimeval(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject StructTimeval::fromMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.StructTimeval",
			"fromMillis",
			"(J)Landroid/system/StructTimeval;",
			arg0
		);
	}
	jboolean StructTimeval::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint StructTimeval::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong StructTimeval::toMillis()
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jstring StructTimeval::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

