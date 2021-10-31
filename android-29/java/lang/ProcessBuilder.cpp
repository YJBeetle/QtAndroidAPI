#include "../io/File.hpp"
#include "./Process.hpp"
#include "./ProcessBuilder_Redirect.hpp"
#include "./ProcessBuilder.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ProcessBuilder::ProcessBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ProcessBuilder::ProcessBuilder(jarray arg0)
		: __JniBaseClass(
			"java.lang.ProcessBuilder",
			"([Ljava/lang/String;)V",
			arg0
		) {}
	ProcessBuilder::ProcessBuilder(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.lang.ProcessBuilder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject ProcessBuilder::startPipeline(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder",
			"startPipeline",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::command(jarray arg0)
	{
		return callObjectMethod(
			"command",
			"([Ljava/lang/String;)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	QAndroidJniObject ProcessBuilder::command(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"command",
			"(Ljava/util/List;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::command()
	{
		return callObjectMethod(
			"command",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ProcessBuilder::directory()
	{
		return callObjectMethod(
			"directory",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ProcessBuilder::directory(java::io::File arg0)
	{
		return callObjectMethod(
			"directory",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::environment()
	{
		return callObjectMethod(
			"environment",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject ProcessBuilder::inheritIO()
	{
		return callObjectMethod(
			"inheritIO",
			"()Ljava/lang/ProcessBuilder;"
		);
	}
	QAndroidJniObject ProcessBuilder::redirectError(java::io::File arg0)
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectError(java::lang::ProcessBuilder_Redirect arg0)
	{
		return callObjectMethod(
			"redirectError",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectError()
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
	QAndroidJniObject ProcessBuilder::redirectErrorStream(jboolean arg0)
	{
		return callObjectMethod(
			"redirectErrorStream",
			"(Z)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	QAndroidJniObject ProcessBuilder::redirectInput(java::io::File arg0)
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectInput(java::lang::ProcessBuilder_Redirect arg0)
	{
		return callObjectMethod(
			"redirectInput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectInput()
	{
		return callObjectMethod(
			"redirectInput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder::redirectOutput(java::io::File arg0)
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectOutput(java::lang::ProcessBuilder_Redirect arg0)
	{
		return callObjectMethod(
			"redirectOutput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectOutput()
	{
		return callObjectMethod(
			"redirectOutput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder::start()
	{
		return callObjectMethod(
			"start",
			"()Ljava/lang/Process;"
		);
	}
} // namespace java::lang

