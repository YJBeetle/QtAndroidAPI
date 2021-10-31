#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ProcessBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProcessBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder(QAndroidJniObject obj);
		
		// Constructors
		ProcessBuilder(jarray arg0);
		ProcessBuilder(__JniBaseClass arg0);
		
		// Methods
		static __JniBaseClass startPipeline(__JniBaseClass arg0);
		java::lang::ProcessBuilder command(jarray arg0);
		java::lang::ProcessBuilder command(__JniBaseClass arg0);
		__JniBaseClass command();
		java::io::File directory();
		java::lang::ProcessBuilder directory(java::io::File arg0);
		__JniBaseClass environment();
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

