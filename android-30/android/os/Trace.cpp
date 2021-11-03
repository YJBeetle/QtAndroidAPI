#include "../../JString.hpp"
#include "./Trace.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	Trace::Trace(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Trace::beginAsyncSection(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Trace::beginSection(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Trace::endAsyncSection(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"endAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
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
	void Trace::setCounter(JString arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"setCounter",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::os

