#pragma once

#ifndef ANDROID_UTIL_TIMINGLOGGER
#define ANDROID_UTIL_TIMINGLOGGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class TimingLogger : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		void reset();
		void reset(jstring arg0, jstring arg1);
		void addSplit(jstring arg0);
		void dumpToLog();
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
			arg1);
	}
	
	// Methods
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

#endif // ANDROID_UTIL_TIMINGLOGGER

