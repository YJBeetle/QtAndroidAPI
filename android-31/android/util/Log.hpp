#pragma once

#include "../../JObject.hpp"

class JString;
class JThrowable;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Log(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Log(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint d(JString arg0, JString arg1);
		static jint d(JString arg0, JString arg1, JThrowable arg2);
		static jint e(JString arg0, JString arg1);
		static jint e(JString arg0, JString arg1, JThrowable arg2);
		static JString getStackTraceString(JThrowable arg0);
		static jint i(JString arg0, JString arg1);
		static jint i(JString arg0, JString arg1, JThrowable arg2);
		static jboolean isLoggable(JString arg0, jint arg1);
		static jint println(jint arg0, JString arg1, JString arg2);
		static jint v(JString arg0, JString arg1);
		static jint v(JString arg0, JString arg1, JThrowable arg2);
		static jint w(JString arg0, JString arg1);
		static jint w(JString arg0, JThrowable arg1);
		static jint w(JString arg0, JString arg1, JThrowable arg2);
		static jint wtf(JString arg0, JString arg1);
		static jint wtf(JString arg0, JThrowable arg1);
		static jint wtf(JString arg0, JString arg1, JThrowable arg2);
	};
} // namespace android::util

