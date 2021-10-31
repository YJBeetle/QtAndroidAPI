#include "./Pair.hpp"

namespace android::util
{
	// Fields
	jobject Pair::first()
	{
		return getObjectField(
			"first",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Pair::second()
	{
		return getObjectField(
			"second",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QAndroidJniObject forward
	Pair::Pair(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Pair::Pair(jobject arg0, jobject arg1)
		: __JniBaseClass(
			"android.util.Pair",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::Pair Pair::create(jobject arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"android.util.Pair",
			"create",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;",
			arg0,
			arg1
		);
	}
	jboolean Pair::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Pair::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Pair::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

