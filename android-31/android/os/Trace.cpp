#include "./Trace.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	Trace::Trace(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Trace::beginAsyncSection(jstring arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Trace::beginSection(jstring arg0)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Trace::endAsyncSection(jstring arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"endAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Trace::endSection()
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"endSection",
			"()V"
		);
	}
	jboolean Trace::isEnabled()
	{
		return callStaticMethod<jboolean>(
			"android.os.Trace",
			"isEnabled",
			"()Z"
		);
	}
	void Trace::setCounter(jstring arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"setCounter",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
} // namespace android::os

