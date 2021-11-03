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
	class Thread;
}

namespace java::lang
{
	class Runtime : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Runtime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Runtime(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Runtime getRuntime();
		static JObject version();
		void addShutdownHook(java::lang::Thread arg0);
		jint availableProcessors();
		java::lang::Process exec(jarray arg0);
		java::lang::Process exec(jstring arg0);
		java::lang::Process exec(jarray arg0, jarray arg1);
		java::lang::Process exec(jstring arg0, jarray arg1);
		java::lang::Process exec(jarray arg0, jarray arg1, java::io::File arg2);
		java::lang::Process exec(jstring arg0, jarray arg1, java::io::File arg2);
		void exit(jint arg0);
		jlong freeMemory();
		void gc();
		void halt(jint arg0);
		void load(jstring arg0);
		void loadLibrary(jstring arg0);
		jlong maxMemory();
		jboolean removeShutdownHook(java::lang::Thread arg0);
		void runFinalization();
		jlong totalMemory();
	};
} // namespace java::lang

