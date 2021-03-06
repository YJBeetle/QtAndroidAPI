#pragma once

#ifndef JAVA_LANG_PROCESS
#define JAVA_LANG_PROCESS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent
{
	class CompletableFuture;
}

namespace __jni_impl::java::lang
{
	class Process : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject info();
		jboolean isAlive();
		void destroy();
		QAndroidJniObject getInputStream();
		QAndroidJniObject children();
		jlong pid();
		QAndroidJniObject toHandle();
		QAndroidJniObject getOutputStream();
		jint waitFor();
		jboolean waitFor(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject destroyForcibly();
		jint exitValue();
		QAndroidJniObject descendants();
		QAndroidJniObject getErrorStream();
		jboolean supportsNormalTermination();
		QAndroidJniObject onExit();
	};
} // namespace __jni_impl::java::lang

#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../util/concurrent/TimeUnit.hpp"
#include "../util/concurrent/CompletableFuture.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Process::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Process",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Process::info()
	{
		return __thiz.callObjectMethod(
			"info",
			"()Ljava/lang/ProcessHandle$Info;"
		);
	}
	jboolean Process::isAlive()
	{
		return __thiz.callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	void Process::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject Process::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject Process::children()
	{
		return __thiz.callObjectMethod(
			"children",
			"()Ljava/util/stream/Stream;"
		);
	}
	jlong Process::pid()
	{
		return __thiz.callMethod<jlong>(
			"pid",
			"()J"
		);
	}
	QAndroidJniObject Process::toHandle()
	{
		return __thiz.callObjectMethod(
			"toHandle",
			"()Ljava/lang/ProcessHandle;"
		);
	}
	QAndroidJniObject Process::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jint Process::waitFor()
	{
		return __thiz.callMethod<jint>(
			"waitFor",
			"()I"
		);
	}
	jboolean Process::waitFor(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"waitFor",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Process::destroyForcibly()
	{
		return __thiz.callObjectMethod(
			"destroyForcibly",
			"()Ljava/lang/Process;"
		);
	}
	jint Process::exitValue()
	{
		return __thiz.callMethod<jint>(
			"exitValue",
			"()I"
		);
	}
	QAndroidJniObject Process::descendants()
	{
		return __thiz.callObjectMethod(
			"descendants",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject Process::getErrorStream()
	{
		return __thiz.callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean Process::supportsNormalTermination()
	{
		return __thiz.callMethod<jboolean>(
			"supportsNormalTermination",
			"()Z"
		);
	}
	QAndroidJniObject Process::onExit()
	{
		return __thiz.callObjectMethod(
			"onExit",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Process : public __jni_impl::java::lang::Process
	{
	public:
		Process(QAndroidJniObject obj) { __thiz = obj; }
		Process()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_PROCESS

