#include "./JSONStringer.hpp"

namespace org::json
{
	// Fields
	
	// QAndroidJniObject forward
	JSONStringer::JSONStringer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	JSONStringer::JSONStringer()
		: __JniBaseClass(
			"org.json.JSONStringer",
			"()V"
		) {}
	
	// Methods
	org::json::JSONStringer JSONStringer::array()
	{
		return callObjectMethod(
			"array",
			"()Lorg/json/JSONStringer;"
		);
	}
	org::json::JSONStringer JSONStringer::endArray()
	{
		return callObjectMethod(
			"endArray",
			"()Lorg/json/JSONStringer;"
		);
	}
	org::json::JSONStringer JSONStringer::endObject()
	{
		return callObjectMethod(
			"endObject",
			"()Lorg/json/JSONStringer;"
		);
	}
	org::json::JSONStringer JSONStringer::key(jstring arg0)
	{
		return callObjectMethod(
			"key",
			"(Ljava/lang/String;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	org::json::JSONStringer JSONStringer::object()
	{
		return callObjectMethod(
			"object",
			"()Lorg/json/JSONStringer;"
		);
	}
	jstring JSONStringer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	org::json::JSONStringer JSONStringer::value(jboolean arg0)
	{
		return callObjectMethod(
			"value",
			"(Z)Lorg/json/JSONStringer;",
			arg0
		);
	}
	org::json::JSONStringer JSONStringer::value(jdouble arg0)
	{
		return callObjectMethod(
			"value",
			"(D)Lorg/json/JSONStringer;",
			arg0
		);
	}
	org::json::JSONStringer JSONStringer::value(jobject arg0)
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Object;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	org::json::JSONStringer JSONStringer::value(jlong arg0)
	{
		return callObjectMethod(
			"value",
			"(J)Lorg/json/JSONStringer;",
			arg0
		);
	}
} // namespace org::json

