#include "./JSONStringer.hpp"

namespace org::json
{
	// Fields
	
	JSONStringer::JSONStringer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JSONStringer::JSONStringer()
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONStringer",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject JSONStringer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::endArray()
	{
		return __thiz.callObjectMethod(
			"endArray",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::endObject()
	{
		return __thiz.callObjectMethod(
			"endObject",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::key(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"key",
			"(Ljava/lang/String;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::object()
	{
		return __thiz.callObjectMethod(
			"object",
			"()Lorg/json/JSONStringer;"
		);
	}
	jstring JSONStringer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JSONStringer::value(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Z)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(D)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/Object;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(J)Lorg/json/JSONStringer;",
			arg0
		);
	}
} // namespace org::json

