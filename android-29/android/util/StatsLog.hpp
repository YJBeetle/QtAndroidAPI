#pragma once

#ifndef ANDROID_UTIL_STATSLOG
#define ANDROID_UTIL_STATSLOG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class StatsLog : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean logStart(jint arg0);
		static jboolean logStop(jint arg0);
		static jboolean logEvent(jint arg0);
		static jboolean logBinaryPushStateChanged(jstring arg0, jlong arg1, jint arg2, jint arg3, jlongArray arg4);
		static jboolean logBinaryPushStateChanged(const QString &arg0, jlong arg1, jint arg2, jint arg3, jlongArray arg4);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void StatsLog::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.StatsLog",
			"(V)V");
	}
	
	// Methods
	jboolean StatsLog::logStart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStart",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logStop(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStop",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logEvent(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logEvent",
			"(I)Z",
			arg0
		);
	}
	jboolean StatsLog::logBinaryPushStateChanged(jstring arg0, jlong arg1, jint arg2, jint arg3, jlongArray arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logBinaryPushStateChanged",
			"(Ljava/lang/String;JII[J)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean StatsLog::logBinaryPushStateChanged(const QString &arg0, jlong arg1, jint arg2, jint arg3, jlongArray arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logBinaryPushStateChanged",
			"(Ljava/lang/String;JII[J)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class StatsLog : public __jni_impl::android::util::StatsLog
	{
	public:
		StatsLog(QAndroidJniObject obj) { __thiz = obj; }
		StatsLog()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_STATSLOG

