#include "../../JArray.hpp"
#include "../../java/lang/Number.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JSONArray.hpp"
#include "./JSONTokener.hpp"
#include "./JSONObject.hpp"

namespace org::json
{
	// Fields
	JObject JSONObject::_NULL()
	{
		return getStaticObjectField(
			"org.json.JSONObject",
			"NULL",
			"Ljava/lang/Object;"
		);
	}
	
	// QJniObject forward
	JSONObject::JSONObject(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JSONObject::JSONObject()
		: JObject(
			"org.json.JSONObject",
			"()V"
		) {}
	JSONObject::JSONObject(JString arg0)
		: JObject(
			"org.json.JSONObject",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	JSONObject::JSONObject(JObject arg0)
		: JObject(
			"org.json.JSONObject",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	JSONObject::JSONObject(org::json::JSONTokener arg0)
		: JObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONTokener;)V",
			arg0.object()
		) {}
	JSONObject::JSONObject(org::json::JSONObject &arg0, JArray arg1)
		: JObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONObject;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	JString JSONObject::numberToString(java::lang::Number arg0)
	{
		return callStaticObjectMethod(
			"org.json.JSONObject",
			"numberToString",
			"(Ljava/lang/Number;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString JSONObject::quote(JString arg0)
	{
		return callStaticObjectMethod(
			"org.json.JSONObject",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject JSONObject::wrap(JObject arg0)
	{
		return callStaticObjectMethod(
			"org.json.JSONObject",
			"wrap",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	org::json::JSONObject JSONObject::accumulate(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"accumulate",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	JObject JSONObject::get(JString arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jboolean JSONObject::getBoolean(JString arg0)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jdouble JSONObject::getDouble(JString arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	jint JSONObject::getInt(JString arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	org::json::JSONArray JSONObject::getJSONArray(JString arg0)
	{
		return callObjectMethod(
			"getJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0.object<jstring>()
		);
	}
	org::json::JSONObject JSONObject::getJSONObject(JString arg0)
	{
		return callObjectMethod(
			"getJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0.object<jstring>()
		);
	}
	jlong JSONObject::getLong(JString arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	JString JSONObject::getString(JString arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jboolean JSONObject::has(JString arg0)
	{
		return callMethod<jboolean>(
			"has",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean JSONObject::isNull(JString arg0)
	{
		return callMethod<jboolean>(
			"isNull",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject JSONObject::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Iterator;"
		);
	}
	jint JSONObject::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	org::json::JSONArray JSONObject::names()
	{
		return callObjectMethod(
			"names",
			"()Lorg/json/JSONArray;"
		);
	}
	JObject JSONObject::opt(JString arg0)
	{
		return callObjectMethod(
			"opt",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jboolean JSONObject::optBoolean(JString arg0)
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean JSONObject::optBoolean(JString arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	jdouble JSONObject::optDouble(JString arg0)
	{
		return callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	jdouble JSONObject::optDouble(JString arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint JSONObject::optInt(JString arg0)
	{
		return callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint JSONObject::optInt(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	org::json::JSONArray JSONObject::optJSONArray(JString arg0)
	{
		return callObjectMethod(
			"optJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0.object<jstring>()
		);
	}
	org::json::JSONObject JSONObject::optJSONObject(JString arg0)
	{
		return callObjectMethod(
			"optJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0.object<jstring>()
		);
	}
	jlong JSONObject::optLong(JString arg0)
	{
		return callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	jlong JSONObject::optLong(JString arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString JSONObject::optString(JString arg0)
	{
		return callObjectMethod(
			"optString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString JSONObject::optString(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"optString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	org::json::JSONObject JSONObject::put(JString arg0, jboolean arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;Z)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(JString arg0, jdouble arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;D)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;I)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	org::json::JSONObject JSONObject::put(JString arg0, jlong arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;J)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	org::json::JSONObject JSONObject::putOpt(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"putOpt",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	JObject JSONObject::remove(JString arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	org::json::JSONArray JSONObject::toJSONArray(org::json::JSONArray arg0)
	{
		return callObjectMethod(
			"toJSONArray",
			"(Lorg/json/JSONArray;)Lorg/json/JSONArray;",
			arg0.object()
		);
	}
	JString JSONObject::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString JSONObject::toString(jint arg0)
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace org::json

