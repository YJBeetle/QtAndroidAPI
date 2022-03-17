#pragma once

#include "../../JString.hpp"
#include "./Trace.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Trace::beginAsyncSection(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Trace::beginSection(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Trace::endAsyncSection(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"endAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Trace::endSection()
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"endSection",
			"()V"
		);
	}
	inline jboolean Trace::isEnabled()
	{
		return callStaticMethod<jboolean>(
			"android.os.Trace",
			"isEnabled",
			"()Z"
		);
	}
	inline void Trace::setCounter(JString arg0, jlong arg1)
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

// Base class headers

