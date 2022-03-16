#pragma once

#include "../../JObject.hpp"

class JArray;
namespace java::io
{
	class File;
}
class JClass;
namespace java::lang
{
	class Process;
}
class JString;
namespace java::lang
{
	class Thread;
}

namespace java::lang
{
	class Runtime : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Runtime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Runtime(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::Runtime getRuntime();
		static JObject version();
		void addShutdownHook(java::lang::Thread arg0) const;
		jint availableProcessors() const;
		java::lang::Process exec(JArray arg0) const;
		java::lang::Process exec(JString arg0) const;
		java::lang::Process exec(JArray arg0, JArray arg1) const;
		java::lang::Process exec(JString arg0, JArray arg1) const;
		java::lang::Process exec(JArray arg0, JArray arg1, java::io::File arg2) const;
		java::lang::Process exec(JString arg0, JArray arg1, java::io::File arg2) const;
		void exit(jint arg0) const;
		jlong freeMemory() const;
		void gc() const;
		void halt(jint arg0) const;
		void load(JString arg0) const;
		void loadLibrary(JString arg0) const;
		jlong maxMemory() const;
		jboolean removeShutdownHook(java::lang::Thread arg0) const;
		void runFinalization() const;
		jlong totalMemory() const;
	};
} // namespace java::lang

