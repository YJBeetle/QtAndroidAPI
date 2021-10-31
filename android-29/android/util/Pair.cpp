#include "./Pair.hpp"

namespace android::util
{
	// Fields
	jobject Pair::first()
	{
		return __thiz.getObjectField(
			"first",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Pair::second()
	{
		return __thiz.getObjectField(
			"second",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	Pair::Pair(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Pair::Pair(jobject arg0, jobject arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Pair",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject Pair::create(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Pair",
			"create",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;",
			arg0,
			arg1
		);
	}
	jboolean Pair::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Pair::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Pair::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

