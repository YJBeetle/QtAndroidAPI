#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ProcessBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder(QJniObject obj);
		
		// Constructors
		ProcessBuilder(JArray arg0);
		ProcessBuilder(JObject arg0);
		
		// Methods
		static JObject startPipeline(JObject arg0);
		java::lang::ProcessBuilder command(JArray arg0) const;
		java::lang::ProcessBuilder command(JObject arg0) const;
		JObject command() const;
		java::io::File directory() const;
		java::lang::ProcessBuilder directory(java::io::File arg0) const;
		JObject environment() const;
		java::lang::ProcessBuilder inheritIO() const;
		java::lang::ProcessBuilder redirectError(java::io::File arg0) const;
		java::lang::ProcessBuilder redirectError(java::lang::ProcessBuilder_Redirect arg0) const;
		java::lang::ProcessBuilder_Redirect redirectError() const;
		jboolean redirectErrorStream() const;
		java::lang::ProcessBuilder redirectErrorStream(jboolean arg0) const;
		java::lang::ProcessBuilder redirectInput(java::io::File arg0) const;
		java::lang::ProcessBuilder redirectInput(java::lang::ProcessBuilder_Redirect arg0) const;
		java::lang::ProcessBuilder_Redirect redirectInput() const;
		java::lang::ProcessBuilder redirectOutput(java::io::File arg0) const;
		java::lang::ProcessBuilder redirectOutput(java::lang::ProcessBuilder_Redirect arg0) const;
		java::lang::ProcessBuilder_Redirect redirectOutput() const;
		java::lang::Process start() const;
	};
} // namespace java::lang

