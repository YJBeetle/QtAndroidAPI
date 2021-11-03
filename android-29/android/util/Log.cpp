#include "./Log.hpp"

namespace android::util
{
	// Fields
	jint Log::ASSERT()
	{
		return getStaticField<jint>(
			"android.util.Log",
			"ASSERT"
		);
	}
	jint Log::DEBUG()
	{
		return getStaticField<jint>(
			"android.util.Log",
			"DEBUG"
		);
	}
	jint Log::ERROR()
	{
		return getStaticField<jint>(
			"android.util.Log",
			"ERROR"
		);
	}
	jint Log::INFO()
	{
		return getStaticField<jint>(
			"android.util.Log",
			"INFO"
		);
	}
	jint Log::VERBOSE()
	{
		return getStaticField<jint>(
			"android.util.Log",
			"VERBOSE"
		);
	}
	jint Log::WARN()
	{
		return getStaticField<jint>(
			"android.util.Log",
			"WARN"
		);
	}
	
	// QJniObject forward
	Log::Log(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Log::d(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::d(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::e(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::e(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring Log::getStackTraceString(jthrowable arg0)
	{
		return callStaticObjectMethod(
			"android.util.Log",
			"getStackTraceString",
			"(Ljava/lang/Throwable;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Log::i(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::i(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Log::isLoggable(jstring arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Log",
			"isLoggable",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1
		);
	}
	jint Log::println(jint arg0, jstring arg1, jstring arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"println",
			"(ILjava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::v(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::v(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::w(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::w(jstring arg0, jthrowable arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1
		);
	}
	jint Log::w(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::wtf(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::wtf(jstring arg0, jthrowable arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1
		);
	}
	jint Log::wtf(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::util

