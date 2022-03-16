#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.def.hpp"
#include "./Process.def.hpp"
#include "./ProcessBuilder_Redirect.def.hpp"
#include "./ProcessBuilder.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ProcessBuilder::ProcessBuilder(JArray arg0)
		: JObject(
			"java.lang.ProcessBuilder",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	inline ProcessBuilder::ProcessBuilder(JObject arg0)
		: JObject(
			"java.lang.ProcessBuilder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject ProcessBuilder::startPipeline(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder",
			"startPipeline",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::command(JArray arg0) const
	{
		return callObjectMethod(
			"command",
			"([Ljava/lang/String;)Ljava/lang/ProcessBuilder;",
			arg0.object<jarray>()
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::command(JObject arg0) const
	{
		return callObjectMethod(
			"command",
			"(Ljava/util/List;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline JObject ProcessBuilder::command() const
	{
		return callObjectMethod(
			"command",
			"()Ljava/util/List;"
		);
	}
	inline java::io::File ProcessBuilder::directory() const
	{
		return callObjectMethod(
			"directory",
			"()Ljava/io/File;"
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::directory(java::io::File arg0) const
	{
		return callObjectMethod(
			"directory",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline JObject ProcessBuilder::environment() const
	{
		return callObjectMethod(
			"environment",
			"()Ljava/util/Map;"
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::inheritIO() const
	{
		return callObjectMethod(
			"inheritIO",
			"()Ljava/lang/ProcessBuilder;"
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectError(java::io::File arg0) const
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectError(java::lang::ProcessBuilder_Redirect arg0) const
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectError() const
	{
		return callObjectMethod(
			"redirectError",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	inline jboolean ProcessBuilder::redirectErrorStream() const
	{
		return callMethod<jboolean>(
			"redirectErrorStream",
			"()Z"
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectErrorStream(jboolean arg0) const
	{
		return callObjectMethod(
			"redirectErrorStream",
			"(Z)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectInput(java::io::File arg0) const
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectInput(java::lang::ProcessBuilder_Redirect arg0) const
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectInput() const
	{
		return callObjectMethod(
			"redirectInput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectOutput(java::io::File arg0) const
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder ProcessBuilder::redirectOutput(java::lang::ProcessBuilder_Redirect arg0) const
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectOutput() const
	{
		return callObjectMethod(
			"redirectOutput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	inline java::lang::Process ProcessBuilder::start() const
	{
		return callObjectMethod(
			"start",
			"()Ljava/lang/Process;"
		);
	}
} // namespace java::lang

// Base class headers

