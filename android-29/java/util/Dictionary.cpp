#include "./Dictionary.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Dictionary::Dictionary(QJniObject obj) : JObject(obj) {}
	
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
	JObject Dictionary::keys()
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

