#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class Log : public JObject
	{
	public:
		// Fields
		static jint ASSERT();
		static jint DEBUG();
		static jint ERROR();
		static jint INFO();
		static jint VERBOSE();
		static jint WARN();
		
		// QJniObject forward
		template<typename ...Ts> explicit Log(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Log(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint d(jstring arg0, jstring arg1);
		static jint d(jstring arg0, jstring arg1, jthrowable arg2);
		static jint e(jstring arg0, jstring arg1);
		static jint e(jstring arg0, jstring arg1, jthrowable arg2);
		static jstring getStackTraceString(jthrowable arg0);
		static jint i(jstring arg0, jstring arg1);
		static jint i(jstring arg0, jstring arg1, jthrowable arg2);
		static jboolean isLoggable(jstring arg0, jint arg1);
		static jint println(jint arg0, jstring arg1, jstring arg2);
		static jint v(jstring arg0, jstring arg1);
		static jint v(jstring arg0, jstring arg1, jthrowable arg2);
		static jint w(jstring arg0, jstring arg1);
		static jint w(jstring arg0, jthrowable arg1);
		static jint w(jstring arg0, jstring arg1, jthrowable arg2);
		static jint wtf(jstring arg0, jstring arg1);
		static jint wtf(jstring arg0, jthrowable arg1);
		static jint wtf(jstring arg0, jstring arg1, jthrowable arg2);
	};
} // namespace android::util

