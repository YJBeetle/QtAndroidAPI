#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Pair.hpp"

namespace android::util
{
	// Fields
	JObject Pair::first()
	{
		return getObjectField(
			"first",
			"Ljava/lang/Object;"
		);
	}
	JObject Pair::second()
	{
		return getObjectField(
			"second",
			"Ljava/lang/Object;"
		);
	}
	
	// QAndroidJniObject forward
	Pair::Pair(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Pair::Pair(JObject arg0, JObject arg1)
		: JObject(
			"android.util.Pair",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		) {}
	
	// Methods
	android::util::Pair Pair::create(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.util.Pair",
			"create",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean Pair::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Pair::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Pair::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

