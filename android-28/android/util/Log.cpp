#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	
	// QAndroidJniObject forward
	Log::Log(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Log::d(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Log::d(JString arg0, JString arg1, JThrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	jint Log::e(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Log::e(JString arg0, JString arg1, JThrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	JString Log::getStackTraceString(JThrowable arg0)
	{
		return callStaticObjectMethod(
			"android.util.Log",
			"getStackTraceString",
			"(Ljava/lang/Throwable;)Ljava/lang/String;",
			arg0.object<jthrowable>()
		);
	}
	jint Log::i(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Log::i(JString arg0, JString arg1, JThrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	jboolean Log::isLoggable(JString arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.Log",
			"isLoggable",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint Log::println(jint arg0, JString arg1, JString arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"println",
			"(ILjava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	jint Log::v(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Log::v(JString arg0, JString arg1, JThrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	jint Log::w(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Log::w(JString arg0, JThrowable arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		);
	}
	jint Log::w(JString arg0, JString arg1, JThrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	jint Log::wtf(JString arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Log::wtf(JString arg0, JThrowable arg1)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		);
	}
	jint Log::wtf(JString arg0, JString arg1, JThrowable arg2)
	{
		return callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
} // namespace android::util

