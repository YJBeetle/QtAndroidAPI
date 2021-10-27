#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../util/concurrent/CompletableFuture.hpp"
#include "../util/concurrent/TimeUnit.hpp"
#include "./Process.hpp"

namespace java::lang
{
	// Fields
	
	Process::Process(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Process::Process()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Process",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Process::children()
	{
		return __thiz.callObjectMethod(
			"children",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject Process::descendants()
	{
		return __thiz.callObjectMethod(
			"descendants",
			"()Ljava/util/stream/Stream;"
		);
	}
	void Process::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
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
	QAndroidJniObject Process::getErrorStream()
	{
		return __thiz.callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject Process::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject Process::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
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
	QAndroidJniObject Process::onExit()
	{
		return __thiz.callObjectMethod(
			"onExit",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	jlong Process::pid()
	{
		return __thiz.callMethod<jlong>(
			"pid",
			"()J"
		);
	}
	jboolean Process::supportsNormalTermination()
	{
		return __thiz.callMethod<jboolean>(
			"supportsNormalTermination",
			"()Z"
		);
	}
	QAndroidJniObject Process::toHandle()
	{
		return __thiz.callObjectMethod(
			"toHandle",
			"()Ljava/lang/ProcessHandle;"
		);
	}
	jboolean Process::waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"waitFor",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint Process::waitFor()
	{
		return __thiz.callMethod<jint>(
			"waitFor",
			"()I"
		);
	}
} // namespace java::lang

