#include "./TimingLogger.hpp"

namespace android::util
{
	// Fields
	
	TimingLogger::TimingLogger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimingLogger::TimingLogger(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	TimingLogger::TimingLogger(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void TimingLogger::addSplit(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addSplit",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void TimingLogger::reset(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"reset",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::util

