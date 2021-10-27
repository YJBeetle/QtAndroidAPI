#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Log : public __JniBaseClass
	{
	public:
		// Fields
		static jint ASSERT();
		static jint DEBUG();
		static jint ERROR();
		static jint INFO();
		static jint VERBOSE();
		static jint WARN();
		
		Log(QAndroidJniObject obj);
		// Constructors
		Log() = default;
		
		// Methods
		static jint d(jstring arg0, jstring arg1);
		static jint d(const QString &arg0, const QString &arg1);
		static jint d(jstring arg0, jstring arg1, jthrowable arg2);
		static jint d(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint e(jstring arg0, jstring arg1);
		static jint e(const QString &arg0, const QString &arg1);
		static jint e(jstring arg0, jstring arg1, jthrowable arg2);
		static jint e(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jstring getStackTraceString(jthrowable arg0);
		static jint i(jstring arg0, jstring arg1);
		static jint i(const QString &arg0, const QString &arg1);
		static jint i(jstring arg0, jstring arg1, jthrowable arg2);
		static jint i(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jboolean isLoggable(jstring arg0, jint arg1);
		static jboolean isLoggable(const QString &arg0, jint arg1);
		static jint println(jint arg0, jstring arg1, jstring arg2);
		static jint println(jint arg0, const QString &arg1, const QString &arg2);
		static jint v(jstring arg0, jstring arg1);
		static jint v(const QString &arg0, const QString &arg1);
		static jint v(jstring arg0, jstring arg1, jthrowable arg2);
		static jint v(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint w(jstring arg0, jstring arg1);
		static jint w(const QString &arg0, const QString &arg1);
		static jint w(jstring arg0, jthrowable arg1);
		static jint w(const QString &arg0, jthrowable arg1);
		static jint w(jstring arg0, jstring arg1, jthrowable arg2);
		static jint w(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint wtf(jstring arg0, jstring arg1);
		static jint wtf(const QString &arg0, const QString &arg1);
		static jint wtf(jstring arg0, jthrowable arg1);
		static jint wtf(const QString &arg0, jthrowable arg1);
		static jint wtf(jstring arg0, jstring arg1, jthrowable arg2);
		static jint wtf(const QString &arg0, const QString &arg1, jthrowable arg2);
	};
} // namespace android::util

