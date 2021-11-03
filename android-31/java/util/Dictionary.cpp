#include "../../JObject.hpp"
#include "./Dictionary.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Dictionary::Dictionary(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Dictionary::Dictionary()
		: JObject(
			"java.util.Dictionary",
			"()V"
		) {}
	
	// Methods
	JObject Dictionary::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Dictionary::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean Dictionary::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject Dictionary::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Dictionary::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject Dictionary::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint Dictionary::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace java::util

