#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.hpp"
#include "./Process.hpp"
#include "./ProcessBuilder_Redirect.hpp"
#include "./ProcessBuilder.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ProcessBuilder::ProcessBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProcessBuilder::ProcessBuilder(JArray arg0)
		: JObject(
			"java.lang.ProcessBuilder",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	ProcessBuilder::ProcessBuilder(JObject arg0)
		: JObject(
			"java.lang.ProcessBuilder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject ProcessBuilder::startPipeline(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder",
			"startPipeline",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::command(JArray arg0) const
	{
		return callObjectMethod(
			"command",
			"([Ljava/lang/String;)Ljava/lang/ProcessBuilder;",
			arg0.object<jarray>()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::command(JObject arg0) const
	{
		return callObjectMethod(
			"command",
			"(Ljava/util/List;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	JObject ProcessBuilder::command() const
	{
		return callObjectMethod(
			"command",
			"()Ljava/util/List;"
		);
	}
	java::io::File ProcessBuilder::directory() const
	{
		return callObjectMethod(
			"directory",
			"()Ljava/io/File;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::directory(java::io::File arg0) const
	{
		return callObjectMethod(
			"directory",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	JObject ProcessBuilder::environment() const
	{
		return callObjectMethod(
			"environment",
			"()Ljava/util/Map;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::inheritIO() const
	{
		return callObjectMethod(
			"inheritIO",
			"()Ljava/lang/ProcessBuilder;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectError(java::io::File arg0) const
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectError(java::lang::ProcessBuilder_Redirect arg0) const
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectError() const
	{
		return callObjectMethod(
			"redirectError",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	jboolean ProcessBuilder::redirectErrorStream() const
	{
		return callMethod<jboolean>(
			"redirectErrorStream",
			"()Z"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectErrorStream(jboolean arg0) const
	{
		return callObjectMethod(
			"redirectErrorStream",
			"(Z)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectInput(java::io::File arg0) const
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectInput(java::lang::ProcessBuilder_Redirect arg0) const
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectInput() const
	{
		return callObjectMethod(
			"redirectInput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectOutput(java::io::File arg0) const
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectOutput(java::lang::ProcessBuilder_Redirect arg0) const
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectOutput() const
	{
		return callObjectMethod(
			"redirectOutput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	java::lang::Process ProcessBuilder::start() const
	{
		return callObjectMethod(
			"start",
			"()Ljava/lang/Process;"
		);
	}
} // namespace java::lang

