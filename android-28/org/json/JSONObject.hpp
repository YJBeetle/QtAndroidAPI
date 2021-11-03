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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JSONObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JSONObject(QAndroidJniObject obj);
		
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
		org::json::JSONObject accumulate(JString arg0, JObject arg1) const;
		JObject get(JString arg0) const;
		jboolean getBoolean(JString arg0) const;
		jdouble getDouble(JString arg0) const;
		jint getInt(JString arg0) const;
		org::json::JSONArray getJSONArray(JString arg0) const;
		org::json::JSONObject getJSONObject(JString arg0) const;
		jlong getLong(JString arg0) const;
		JString getString(JString arg0) const;
		jboolean has(JString arg0) const;
		jboolean isNull(JString arg0) const;
		JObject keys() const;
		jint length() const;
		org::json::JSONArray names() const;
		JObject opt(JString arg0) const;
		jboolean optBoolean(JString arg0) const;
		jboolean optBoolean(JString arg0, jboolean arg1) const;
		jdouble optDouble(JString arg0) const;
		jdouble optDouble(JString arg0, jdouble arg1) const;
		jint optInt(JString arg0) const;
		jint optInt(JString arg0, jint arg1) const;
		org::json::JSONArray optJSONArray(JString arg0) const;
		org::json::JSONObject optJSONObject(JString arg0) const;
		jlong optLong(JString arg0) const;
		jlong optLong(JString arg0, jlong arg1) const;
		JString optString(JString arg0) const;
		JString optString(JString arg0, JString arg1) const;
		org::json::JSONObject put(JString arg0, jboolean arg1) const;
		org::json::JSONObject put(JString arg0, jdouble arg1) const;
		org::json::JSONObject put(JString arg0, jint arg1) const;
		org::json::JSONObject put(JString arg0, JObject arg1) const;
		org::json::JSONObject put(JString arg0, jlong arg1) const;
		org::json::JSONObject putOpt(JString arg0, JObject arg1) const;
		JObject remove(JString arg0) const;
		org::json::JSONArray toJSONArray(org::json::JSONArray arg0) const;
		JString toString() const;
		JString toString(jint arg0) const;
	};
} // namespace org::json

