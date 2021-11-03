#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
namespace java::lang
{
	class Process;
}
namespace java::lang
{
	class ProcessBuilder_Redirect;
}

namespace java::lang
{
	class ProcessBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProcessBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder(QAndroidJniObject obj);
		
		// Constructors
		ProcessBuilder(jarray arg0);
		ProcessBuilder(JObject arg0);
		
		// Methods
		static JObject startPipeline(JObject arg0);
		java::lang::ProcessBuilder command(jarray arg0);
		java::lang::ProcessBuilder command(JObject arg0);
		JObject command();
		java::io::File directory();
		java::lang::ProcessBuilder directory(java::io::File arg0);
		JObject environment();
		java::lang::ProcessBuilder inheritIO();
		java::lang::ProcessBuilder redirectError(java::io::File arg0);
		java::lang::ProcessBuilder redirectError(java::lang::ProcessBuilder_Redirect arg0);
		java::lang::ProcessBuilder_Redirect redirectError();
		jboolean redirectErrorStream();
		java::lang::ProcessBuilder redirectErrorStream(jboolean arg0);
		java::lang::ProcessBuilder redirectInput(java::io::File arg0);
		java::lang::ProcessBuilder redirectInput(java::lang::ProcessBuilder_Redirect arg0);
		java::lang::ProcessBuilder_Redirect redirectInput();
		java::lang::ProcessBuilder redirectOutput(java::io::File arg0);
		java::lang::ProcessBuilder redirectOutput(java::lang::ProcessBuilder_Redirect arg0);
		java::lang::ProcessBuilder_Redirect redirectOutput();
		java::lang::Process start();
	};
} // namespace java::lang

