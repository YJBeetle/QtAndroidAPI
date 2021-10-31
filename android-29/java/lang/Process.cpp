#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../util/concurrent/CompletableFuture.hpp"
#include "../util/concurrent/TimeUnit.hpp"
#include "./Process.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Process::Process(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Process::Process()
		: __JniBaseClass(
			"java.lang.Process",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject Process::children()
	{
		return callObjectMethod(
			"children",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject Process::descendants()
	{
		return callObjectMethod(
			"descendants",
			"()Ljava/util/stream/Stream;"
		);
	}
	void Process::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject Process::destroyForcibly()
	{
		return callObjectMethod(
			"destroyForcibly",
			"()Ljava/lang/Process;"
		);
	}
	jint Process::exitValue()
	{
		return callMethod<jint>(
			"exitValue",
			"()I"
		);
	}
	QAndroidJniObject Process::getErrorStream()
	{
		return callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject Process::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject Process::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	QAndroidJniObject Process::info()
	{
		return callObjectMethod(
			"info",
			"()Ljava/lang/ProcessHandle$Info;"
		);
	}
	jboolean Process::isAlive()
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	QAndroidJniObject Process::onExit()
	{
		return callObjectMethod(
			"onExit",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	jlong Process::pid()
	{
		return callMethod<jlong>(
			"pid",
			"()J"
		);
	}
	jboolean Process::supportsNormalTermination()
	{
		return callMethod<jboolean>(
			"supportsNormalTermination",
			"()Z"
		);
	}
	QAndroidJniObject Process::toHandle()
	{
		return callObjectMethod(
			"toHandle",
			"()Ljava/lang/ProcessHandle;"
		);
	}
	jboolean Process::waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"waitFor",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	jint Process::waitFor()
	{
		return callMethod<jint>(
			"waitFor",
			"()I"
		);
	}
} // namespace java::lang

