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
		JSONArray(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JSONArray();
		JSONArray(JObject arg0);
		JSONArray(JString arg0);
		JSONArray(org::json::JSONTokener arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject get(jint arg0) const;
		jboolean getBoolean(jint arg0) const;
		jdouble getDouble(jint arg0) const;
		jint getInt(jint arg0) const;
		org::json::JSONArray getJSONArray(jint arg0) const;
		org::json::JSONObject getJSONObject(jint arg0) const;
		jlong getLong(jint arg0) const;
		JString getString(jint arg0) const;
		jint hashCode() const;
		jboolean isNull(jint arg0) const;
		JString join(JString arg0) const;
		jint length() const;
		JObject opt(jint arg0) const;
		jboolean optBoolean(jint arg0) const;
		jboolean optBoolean(jint arg0, jboolean arg1) const;
		jdouble optDouble(jint arg0) const;
		jdouble optDouble(jint arg0, jdouble arg1) const;
		jint optInt(jint arg0) const;
		jint optInt(jint arg0, jint arg1) const;
		org::json::JSONArray optJSONArray(jint arg0) const;
		org::json::JSONObject optJSONObject(jint arg0) const;
		jlong optLong(jint arg0) const;
		jlong optLong(jint arg0, jlong arg1) const;
		JString optString(jint arg0) const;
		JString optString(jint arg0, JString arg1) const;
		org::json::JSONArray put(jboolean arg0) const;
		org::json::JSONArray put(jdouble arg0) const;
		org::json::JSONArray put(jint arg0) const;
		org::json::JSONArray put(JObject arg0) const;
		org::json::JSONArray put(jlong arg0) const;
		org::json::JSONArray put(jint arg0, jboolean arg1) const;
		org::json::JSONArray put(jint arg0, jdouble arg1) const;
		org::json::JSONArray put(jint arg0, jint arg1) const;
		org::json::JSONArray put(jint arg0, JObject arg1) const;
		org::json::JSONArray put(jint arg0, jlong arg1) const;
		JObject remove(jint arg0) const;
		org::json::JSONObject toJSONObject(org::json::JSONArray arg0) const;
		JString toString() const;
		JString toString(jint arg0) const;
	};
} // namespace org::json

