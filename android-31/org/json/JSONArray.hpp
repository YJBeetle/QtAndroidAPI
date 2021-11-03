#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace org::json
{
	class JSONObject;
}
namespace org::json
{
	class JSONTokener;
}

namespace org::json
{
	class JSONArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONArray(QJniObject obj);
		
		// Constructors
		JSONArray();
		JSONArray(JObject arg0);
		JSONArray(JString arg0);
		JSONArray(org::json::JSONTokener arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		JObject get(jint arg0);
		jboolean getBoolean(jint arg0);
		jdouble getDouble(jint arg0);
		jint getInt(jint arg0);
		org::json::JSONArray getJSONArray(jint arg0);
		org::json::JSONObject getJSONObject(jint arg0);
		jlong getLong(jint arg0);
		JString getString(jint arg0);
		jint hashCode();
		jboolean isNull(jint arg0);
		JString join(JString arg0);
		jint length();
		JObject opt(jint arg0);
		jboolean optBoolean(jint arg0);
		jboolean optBoolean(jint arg0, jboolean arg1);
		jdouble optDouble(jint arg0);
		jdouble optDouble(jint arg0, jdouble arg1);
		jint optInt(jint arg0);
		jint optInt(jint arg0, jint arg1);
		org::json::JSONArray optJSONArray(jint arg0);
		org::json::JSONObject optJSONObject(jint arg0);
		jlong optLong(jint arg0);
		jlong optLong(jint arg0, jlong arg1);
		JString optString(jint arg0);
		JString optString(jint arg0, JString arg1);
		org::json::JSONArray put(jboolean arg0);
		org::json::JSONArray put(jdouble arg0);
		org::json::JSONArray put(jint arg0);
		org::json::JSONArray put(JObject arg0);
		org::json::JSONArray put(jlong arg0);
		org::json::JSONArray put(jint arg0, jboolean arg1);
		org::json::JSONArray put(jint arg0, jdouble arg1);
		org::json::JSONArray put(jint arg0, jint arg1);
		org::json::JSONArray put(jint arg0, JObject arg1);
		org::json::JSONArray put(jint arg0, jlong arg1);
		JObject remove(jint arg0);
		org::json::JSONObject toJSONObject(org::json::JSONArray arg0);
		JString toString();
		JString toString(jint arg0);
	};
} // namespace org::json

