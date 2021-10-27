#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Number;
}
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
	class JSONObject : public __JniBaseClass
	{
	public:
		// Fields
		static jobject _NULL();
		
		JSONObject(QAndroidJniObject obj);
		// Constructors
		JSONObject();
		JSONObject(jstring &arg0);
		JSONObject(const QString &arg0);
		JSONObject(__JniBaseClass &arg0);
		JSONObject(org::json::JSONTokener &arg0);
		JSONObject(org::json::JSONObject &arg0, jarray &arg1);
		
		// Methods
		static jstring numberToString(java::lang::Number arg0);
		static jstring quote(jstring arg0);
		static jstring quote(const QString &arg0);
		static jobject wrap(jobject arg0);
		QAndroidJniObject accumulate(jstring arg0, jobject arg1);
		QAndroidJniObject accumulate(const QString &arg0, jobject arg1);
		jobject get(jstring arg0);
		jobject get(const QString &arg0);
		jboolean getBoolean(jstring arg0);
		jboolean getBoolean(const QString &arg0);
		jdouble getDouble(jstring arg0);
		jdouble getDouble(const QString &arg0);
		jint getInt(jstring arg0);
		jint getInt(const QString &arg0);
		QAndroidJniObject getJSONArray(jstring arg0);
		QAndroidJniObject getJSONArray(const QString &arg0);
		QAndroidJniObject getJSONObject(jstring arg0);
		QAndroidJniObject getJSONObject(const QString &arg0);
		jlong getLong(jstring arg0);
		jlong getLong(const QString &arg0);
		jstring getString(jstring arg0);
		jstring getString(const QString &arg0);
		jboolean has(jstring arg0);
		jboolean has(const QString &arg0);
		jboolean isNull(jstring arg0);
		jboolean isNull(const QString &arg0);
		QAndroidJniObject keys();
		jint length();
		QAndroidJniObject names();
		jobject opt(jstring arg0);
		jobject opt(const QString &arg0);
		jboolean optBoolean(jstring arg0);
		jboolean optBoolean(const QString &arg0);
		jboolean optBoolean(jstring arg0, jboolean arg1);
		jboolean optBoolean(const QString &arg0, jboolean arg1);
		jdouble optDouble(jstring arg0);
		jdouble optDouble(const QString &arg0);
		jdouble optDouble(jstring arg0, jdouble arg1);
		jdouble optDouble(const QString &arg0, jdouble arg1);
		jint optInt(jstring arg0);
		jint optInt(const QString &arg0);
		jint optInt(jstring arg0, jint arg1);
		jint optInt(const QString &arg0, jint arg1);
		QAndroidJniObject optJSONArray(jstring arg0);
		QAndroidJniObject optJSONArray(const QString &arg0);
		QAndroidJniObject optJSONObject(jstring arg0);
		QAndroidJniObject optJSONObject(const QString &arg0);
		jlong optLong(jstring arg0);
		jlong optLong(const QString &arg0);
		jlong optLong(jstring arg0, jlong arg1);
		jlong optLong(const QString &arg0, jlong arg1);
		jstring optString(jstring arg0);
		jstring optString(const QString &arg0);
		jstring optString(jstring arg0, jstring arg1);
		jstring optString(const QString &arg0, const QString &arg1);
		QAndroidJniObject put(jstring arg0, jboolean arg1);
		QAndroidJniObject put(const QString &arg0, jboolean arg1);
		QAndroidJniObject put(jstring arg0, jdouble arg1);
		QAndroidJniObject put(const QString &arg0, jdouble arg1);
		QAndroidJniObject put(jstring arg0, jint arg1);
		QAndroidJniObject put(const QString &arg0, jint arg1);
		QAndroidJniObject put(jstring arg0, jobject arg1);
		QAndroidJniObject put(const QString &arg0, jobject arg1);
		QAndroidJniObject put(jstring arg0, jlong arg1);
		QAndroidJniObject put(const QString &arg0, jlong arg1);
		QAndroidJniObject putOpt(jstring arg0, jobject arg1);
		QAndroidJniObject putOpt(const QString &arg0, jobject arg1);
		jobject remove(jstring arg0);
		jobject remove(const QString &arg0);
		QAndroidJniObject toJSONArray(org::json::JSONArray arg0);
		jstring toString();
		jstring toString(jint arg0);
	};
} // namespace org::json

