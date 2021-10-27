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
		
		ProcessBuilder(QAndroidJniObject obj);
		// Constructors
		ProcessBuilder(jarray &arg0);
		ProcessBuilder(__JniBaseClass &arg0);
		ProcessBuilder() = default;
		
		// Methods
		static QAndroidJniObject startPipeline(__JniBaseClass arg0);
		QAndroidJniObject command(jarray arg0);
		QAndroidJniObject command(__JniBaseClass arg0);
		QAndroidJniObject command();
		QAndroidJniObject directory();
		QAndroidJniObject directory(java::io::File arg0);
		QAndroidJniObject environment();
		QAndroidJniObject inheritIO();
		QAndroidJniObject redirectError(java::io::File arg0);
		QAndroidJniObject redirectError(java::lang::ProcessBuilder_Redirect arg0);
		QAndroidJniObject redirectError();
		jboolean redirectErrorStream();
		QAndroidJniObject redirectErrorStream(jboolean arg0);
		QAndroidJniObject redirectInput(java::io::File arg0);
		QAndroidJniObject redirectInput(java::lang::ProcessBuilder_Redirect arg0);
		QAndroidJniObject redirectInput();
		QAndroidJniObject redirectOutput(java::io::File arg0);
		QAndroidJniObject redirectOutput(java::lang::ProcessBuilder_Redirect arg0);
		QAndroidJniObject redirectOutput();
		QAndroidJniObject start();
	};
} // namespace java::lang

