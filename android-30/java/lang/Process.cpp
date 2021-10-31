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
	__JniBaseClass Process::children()
	{
		return callObjectMethod(
			"children",
			"()Ljava/util/stream/Stream;"
		);
	}
	__JniBaseClass Process::descendants()
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
	java::lang::Process Process::destroyForcibly()
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
	java::io::InputStream Process::getErrorStream()
	{
		return callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	java::io::InputStream Process::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	java::io::OutputStream Process::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	__JniBaseClass Process::info()
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
	java::util::concurrent::CompletableFuture Process::onExit()
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
	__JniBaseClass Process::toHandle()
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

