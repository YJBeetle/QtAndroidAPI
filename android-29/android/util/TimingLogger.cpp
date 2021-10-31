#include "./TimingLogger.hpp"

namespace android::util
{
	// Fields
	
	TimingLogger::TimingLogger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimingLogger::TimingLogger(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void TimingLogger::addSplit(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addSplit",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TimingLogger::dumpToLog()
	{
		__thiz.callMethod<void>(
			"dumpToLog",
			"()V"
		);
	}
	void TimingLogger::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void TimingLogger::reset(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"reset",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::util

