#pragma once

#include "../../__JniBaseClass.hpp"

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
	class JSONArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JSONArray(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JSONArray(QJniObject obj);
		
		// Constructors
		JSONArray();
		JSONArray(jobject arg0);
		JSONArray(jstring arg0);
		JSONArray(__JniBaseClass arg0);
		JSONArray(org::json::JSONTokener arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jobject get(jint arg0);
		jboolean getBoolean(jint arg0);
		jdouble getDouble(jint arg0);
		jint getInt(jint arg0);
		org::json::JSONArray getJSONArray(jint arg0);
		org::json::JSONObject getJSONObject(jint arg0);
		jlong getLong(jint arg0);
		jstring getString(jint arg0);
		jint hashCode();
		jboolean isNull(jint arg0);
		jstring join(jstring arg0);
		jint length();
		jobject opt(jint arg0);
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
		jstring optString(jint arg0);
		jstring optString(jint arg0, jstring arg1);
		org::json::JSONArray put(jboolean arg0);
		org::json::JSONArray put(jdouble arg0);
		org::json::JSONArray put(jint arg0);
		org::json::JSONArray put(jobject arg0);
		org::json::JSONArray put(jlong arg0);
		org::json::JSONArray put(jint arg0, jboolean arg1);
		org::json::JSONArray put(jint arg0, jdouble arg1);
		org::json::JSONArray put(jint arg0, jint arg1);
		org::json::JSONArray put(jint arg0, jobject arg1);
		org::json::JSONArray put(jint arg0, jlong arg1);
		jobject remove(jint arg0);
		org::json::JSONObject toJSONObject(org::json::JSONArray arg0);
		jstring toString();
		jstring toString(jint arg0);
	};
} // namespace org::json

