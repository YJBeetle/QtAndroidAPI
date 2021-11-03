#pragma once

#include "../../JObject.hpp"

class JArray;
namespace java::lang
{
	class Number;
}
class JObject;
class JString;
namespace org::json
{
	class JSONArray;
}
namespace org::json
{
	class JSONTokener;
}

namespace org::json
{
	class JSONObject : public JObject
	{
	public:
		// Fields
		static JObject _NULL();
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONObject(QJniObject obj);
		
		// Constructors
		JSONObject();
		JSONObject(JString arg0);
		JSONObject(JObject arg0);
		JSONObject(org::json::JSONTokener arg0);
		JSONObject(org::json::JSONObject &arg0, JArray arg1);
		
		// Methods
		static JString numberToString(java::lang::Number arg0);
		static JString quote(JString arg0);
		static JObject wrap(JObject arg0);
		org::json::JSONObject accumulate(JString arg0, JObject arg1);
		JObject get(JString arg0);
		jboolean getBoolean(JString arg0);
		jdouble getDouble(JString arg0);
		jint getInt(JString arg0);
		org::json::JSONArray getJSONArray(JString arg0);
		org::json::JSONObject getJSONObject(JString arg0);
		jlong getLong(JString arg0);
		JString getString(JString arg0);
		jboolean has(JString arg0);
		jboolean isNull(JString arg0);
		JObject keys();
		jint length();
		org::json::JSONArray names();
		JObject opt(JString arg0);
		jboolean optBoolean(JString arg0);
		jboolean optBoolean(JString arg0, jboolean arg1);
		jdouble optDouble(JString arg0);
		jdouble optDouble(JString arg0, jdouble arg1);
		jint optInt(JString arg0);
		jint optInt(JString arg0, jint arg1);
		org::json::JSONArray optJSONArray(JString arg0);
		org::json::JSONObject optJSONObject(JString arg0);
		jlong optLong(JString arg0);
		jlong optLong(JString arg0, jlong arg1);
		JString optString(JString arg0);
		JString optString(JString arg0, JString arg1);
		org::json::JSONObject put(JString arg0, jboolean arg1);
		org::json::JSONObject put(JString arg0, jdouble arg1);
		org::json::JSONObject put(JString arg0, jint arg1);
		org::json::JSONObject put(JString arg0, JObject arg1);
		org::json::JSONObject put(JString arg0, jlong arg1);
		org::json::JSONObject putOpt(JString arg0, JObject arg1);
		JObject remove(JString arg0);
		org::json::JSONArray toJSONArray(org::json::JSONArray arg0);
		JString toString();
		JString toString(jint arg0);
	};
} // namespace org::json

