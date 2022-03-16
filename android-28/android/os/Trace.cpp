#include "../../JString.hpp"
#include "./Trace.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	void Trace::beginSection(JString arg0)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
} // namespace android::os

