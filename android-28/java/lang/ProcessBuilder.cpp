#include "../io/File.hpp"
#include "./Process.hpp"
#include "./ProcessBuilder_Redirect.hpp"
#include "./ProcessBuilder.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ProcessBuilder::ProcessBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProcessBuilder::ProcessBuilder(jarray arg0)
		: JObject(
			"java.lang.ProcessBuilder",
			"([Ljava/lang/String;)V",
			arg0
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
	java::lang::ProcessBuilder ProcessBuilder::command(jarray arg0)
	{
		return callObjectMethod(
			"command",
			"([Ljava/lang/String;)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::command(JObject arg0)
	{
		return callObjectMethod(
			"command",
			"(Ljava/util/List;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	JObject ProcessBuilder::command()
	{
		return callObjectMethod(
			"command",
			"()Ljava/util/List;"
		);
	}
	java::io::File ProcessBuilder::directory()
	{
		return callObjectMethod(
			"directory",
			"()Ljava/io/File;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::directory(java::io::File arg0)
	{
		return callObjectMethod(
			"directory",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	JObject ProcessBuilder::environment()
	{
		return callObjectMethod(
			"environment",
			"()Ljava/util/Map;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::inheritIO()
	{
		return callObjectMethod(
			"inheritIO",
			"()Ljava/lang/ProcessBuilder;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectError(java::io::File arg0)
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectError(java::lang::ProcessBuilder_Redirect arg0)
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectError()
	{
		return callObjectMethod(
			"redirectError",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	jboolean ProcessBuilder::redirectErrorStream()
	{
		return callMethod<jboolean>(
			"redirectErrorStream",
			"()Z"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectErrorStream(jboolean arg0)
	{
		return callObjectMethod(
			"redirectErrorStream",
			"(Z)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectInput(java::io::File arg0)
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectInput(java::lang::ProcessBuilder_Redirect arg0)
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectInput()
	{
		return callObjectMethod(
			"redirectInput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectOutput(java::io::File arg0)
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder ProcessBuilder::redirectOutput(java::lang::ProcessBuilder_Redirect arg0)
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder::redirectOutput()
	{
		return callObjectMethod(
			"redirectOutput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	java::lang::Process ProcessBuilder::start()
	{
		return callObjectMethod(
			"start",
			"()Ljava/lang/Process;"
		);
	}
} // namespace java::lang

