#include "../../JString.hpp"
#include "./TimingLogger.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	TimingLogger::TimingLogger(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TimingLogger::TimingLogger(JString arg0, JString arg1)
		: JObject(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	void TimingLogger::addSplit(JString arg0) const
	{
		callMethod<void>(
			"addSplit",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TimingLogger::dumpToLog() const
	{
		callMethod<void>(
			"dumpToLog",
			"()V"
		);
	}
	void TimingLogger::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void TimingLogger::reset(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"reset",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::util

