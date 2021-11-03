#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JSONObject.hpp"
#include "./JSONTokener.hpp"
#include "./JSONArray.hpp"

namespace org::json
{
	// Fields
	
	// QJniObject forward
	JSONArray::JSONArray(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JSONArray::JSONArray()
		: JObject(
			"org.json.JSONArray",
			"()V"
		) {}
	JSONArray::JSONArray(JObject arg0)
		: JObject(
			"org.json.JSONArray",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	JSONArray::JSONArray(JString arg0)
		: JObject(
			"org.json.JSONArray",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	JSONArray::JSONArray(org::json::JSONTokener arg0)
		: JObject(
			"org.json.JSONArray",
			"(Lorg/json/JSONTokener;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean JSONArray::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject JSONArray::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean JSONArray::getBoolean(jint arg0) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	jdouble JSONArray::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jint JSONArray::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	org::json::JSONArray JSONArray::getJSONArray(jint arg0) const
	{
		return callObjectMethod(
			"getJSONArray",
			"(I)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONObject JSONArray::getJSONObject(jint arg0) const
	{
		return callObjectMethod(
			"getJSONObject",
			"(I)Lorg/json/JSONObject;",
			arg0
		);
	}
	jlong JSONArray::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	JString JSONArray::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint JSONArray::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JSONArray::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	JString JSONArray::join(JString arg0) const
	{
		return callObjectMethod(
			"join",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint JSONArray::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	JObject JSONArray::opt(jint arg0) const
	{
		return callObjectMethod(
			"opt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean JSONArray::optBoolean(jint arg0) const
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(I)Z",
			arg0
		);
	}
	jboolean JSONArray::optBoolean(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jdouble JSONArray::optDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"optDouble",
			"(I)D",
			arg0
		);
	}
	jdouble JSONArray::optDouble(jint arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"optDouble",
			"(ID)D",
			arg0,
			arg1
		);
	}
	jint JSONArray::optInt(jint arg0) const
	{
		return callMethod<jint>(
			"optInt",
			"(I)I",
			arg0
		);
	}
	jint JSONArray::optInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"optInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	org::json::JSONArray JSONArray::optJSONArray(jint arg0) const
	{
		return callObjectMethod(
			"optJSONArray",
			"(I)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONObject JSONArray::optJSONObject(jint arg0) const
	{
		return callObjectMethod(
			"optJSONObject",
			"(I)Lorg/json/JSONObject;",
			arg0
		);
	}
	jlong JSONArray::optLong(jint arg0) const
	{
		return callMethod<jlong>(
			"optLong",
			"(I)J",
			arg0
		);
	}
	jlong JSONArray::optLong(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"optLong",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	JString JSONArray::optString(jint arg0) const
	{
		return callObjectMethod(
			"optString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString JSONArray::optString(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"optString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1.object<jstring>()
		);
	}
	org::json::JSONArray JSONArray::put(jboolean arg0) const
	{
		return callObjectMethod(
			"put",
			"(Z)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONArray JSONArray::put(jdouble arg0) const
	{
		return callObjectMethod(
			"put",
			"(D)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONArray JSONArray::put(jint arg0) const
	{
		return callObjectMethod(
			"put",
			"(I)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONArray JSONArray::put(JObject arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;)Lorg/json/JSONArray;",
			arg0.object<jobject>()
		);
	}
	org::json::JSONArray JSONArray::put(jlong arg0) const
	{
		return callObjectMethod(
			"put",
			"(J)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONArray JSONArray::put(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"put",
			"(IZ)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	org::json::JSONArray JSONArray::put(jint arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"put",
			"(ID)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	org::json::JSONArray JSONArray::put(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"put",
			"(II)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	org::json::JSONArray JSONArray::put(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(ILjava/lang/Object;)Lorg/json/JSONArray;",
			arg0,
			arg1.object<jobject>()
		);
	}
	org::json::JSONArray JSONArray::put(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"put",
			"(IJ)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	JObject JSONArray::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	org::json::JSONObject JSONArray::toJSONObject(org::json::JSONArray arg0) const
	{
		return callObjectMethod(
			"toJSONObject",
			"(Lorg/json/JSONArray;)Lorg/json/JSONObject;",
			arg0.object()
		);
	}
	JString JSONArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString JSONArray::toString(jint arg0) const
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace org::json

