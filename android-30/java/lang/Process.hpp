#pragma once

#include "../io/BufferedReader.def.hpp"
#include "../io/BufferedWriter.def.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../util/concurrent/CompletableFuture.def.hpp"
#include "../util/concurrent/TimeUnit.def.hpp"
#include "./Process.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline Process::Process()
		: JObject(
			"java.lang.Process",
			"()V"
		) {}
	
	// Methods
	inline JObject Process::children() const
	{
		return callObjectMethod(
			"children",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline JObject Process::descendants() const
	{
		return callObjectMethod(
			"descendants",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline void Process::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline java::lang::Process Process::destroyForcibly() const
	{
		return callObjectMethod(
			"destroyForcibly",
			"()Ljava/lang/Process;"
		);
	}
	inline java::io::BufferedReader Process::errorReader() const
	{
		return callObjectMethod(
			"errorReader",
			"()Ljava/io/BufferedReader;"
		);
	}
	inline java::io::BufferedReader Process::errorReader(java::nio::charset::Charset arg0) const
	{
		return callObjectMethod(
			"errorReader",
			"(Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;",
			arg0.object()
		);
	}
	inline jint Process::exitValue() const
	{
		return callMethod<jint>(
			"exitValue",
			"()I"
		);
	}
	inline java::io::InputStream Process::getErrorStream() const
	{
		return callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline java::io::InputStream Process::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline java::io::OutputStream Process::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline JObject Process::info() const
	{
		return callObjectMethod(
			"info",
			"()Ljava/lang/ProcessHandle$Info;"
		);
	}
	inline java::io::BufferedReader Process::inputReader() const
	{
		return callObjectMethod(
			"inputReader",
			"()Ljava/io/BufferedReader;"
		);
	}
	inline java::io::BufferedReader Process::inputReader(java::nio::charset::Charset arg0) const
	{
		return callObjectMethod(
			"inputReader",
			"(Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;",
			arg0.object()
		);
	}
	inline jboolean Process::isAlive() const
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	inline java::util::concurrent::CompletableFuture Process::onExit() const
	{
		return callObjectMethod(
			"onExit",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	inline java::io::BufferedWriter Process::outputWriter() const
	{
		return callObjectMethod(
			"outputWriter",
			"()Ljava/io/BufferedWriter;"
		);
	}
	inline java::io::BufferedWriter Process::outputWriter(java::nio::charset::Charset arg0) const
	{
		return callObjectMethod(
			"outputWriter",
			"(Ljava/nio/charset/Charset;)Ljava/io/BufferedWriter;",
			arg0.object()
		);
	}
	inline jlong Process::pid() const
	{
		return callMethod<jlong>(
			"pid",
			"()J"
		);
	}
	inline jboolean Process::supportsNormalTermination() const
	{
		return callMethod<jboolean>(
			"supportsNormalTermination",
			"()Z"
		);
	}
	inline JObject Process::toHandle() const
	{
		return callObjectMethod(
			"toHandle",
			"()Ljava/lang/ProcessHandle;"
		);
	}
	inline jboolean Process::waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"waitFor",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jint Process::waitFor() const
	{
		return callMethod<jint>(
			"waitFor",
			"()I"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
