#include "./Trace.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	Trace::Trace(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Trace::beginSection(jstring arg0)
	{
		callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			arg0
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

