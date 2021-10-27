#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class TimingLogger : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		void addSplit(jstring arg0);
		void addSplit(const QString &arg0);
		void dumpToLog();
		void reset();
		void reset(jstring arg0, jstring arg1);
		void reset(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void TimingLogger::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.TimingLogger",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TimingLogger::__constructor(const QString &arg0, const QString &arg1)
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
} // namespace __jni_impl::android::util

namespace android::util
{
	class TimingLogger : public __jni_impl::android::util::TimingLogger
	{
	public:
		TimingLogger(QAndroidJniObject obj) { __thiz = obj; }
		TimingLogger(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

