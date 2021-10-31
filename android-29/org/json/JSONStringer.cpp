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
	QAndroidJniObject JSONStringer::array()
	{
		return callObjectMethod(
			"array",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::endArray()
	{
		return callObjectMethod(
			"endArray",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::endObject()
	{
		return callObjectMethod(
			"endObject",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::key(jstring arg0)
	{
		return callObjectMethod(
			"key",
			"(Ljava/lang/String;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::object()
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
	QAndroidJniObject JSONStringer::value(jboolean arg0)
	{
		return callObjectMethod(
			"value",
			"(Z)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jdouble arg0)
	{
		return callObjectMethod(
			"value",
			"(D)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jobject arg0)
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Object;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jlong arg0)
	{
		return callObjectMethod(
			"value",
			"(J)Lorg/json/JSONStringer;",
			arg0
		);
	}
} // namespace org::json

