#include "./TimingLogger.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	TimingLogger::TimingLogger(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TimingLogger::TimingLogger(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void TimingLogger::addSplit(jstring arg0)
	{
		callMethod<void>(
			"addSplit",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TimingLogger::dumpToLog()
	{
		callMethod<void>(
			"dumpToLog",
			"()V"
		);
	}
	void TimingLogger::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void TimingLogger::reset(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"reset",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::util

