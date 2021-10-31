#include "./Dictionary.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Dictionary::Dictionary(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Dictionary::Dictionary()
		: __JniBaseClass(
			"java.util.Dictionary",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass Dictionary::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Dictionary::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Dictionary::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	__JniBaseClass Dictionary::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Dictionary::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Dictionary::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Dictionary::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace java::util

