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
	class Thread;
}

namespace java::lang
{
	class Runtime : public __JniBaseClass
	{
	public:
		// Fields
		
		Runtime(QAndroidJniObject obj);
		// Constructors
		Runtime() = default;
		
		// Methods
		static QAndroidJniObject getRuntime();
		static QAndroidJniObject version();
		void addShutdownHook(java::lang::Thread arg0);
		jint availableProcessors();
		QAndroidJniObject exec(jarray arg0);
		QAndroidJniObject exec(jstring arg0);
		QAndroidJniObject exec(const QString &arg0);
		QAndroidJniObject exec(jarray arg0, jarray arg1);
		QAndroidJniObject exec(jstring arg0, jarray arg1);
		QAndroidJniObject exec(const QString &arg0, jarray arg1);
		QAndroidJniObject exec(jarray arg0, jarray arg1, java::io::File arg2);
		QAndroidJniObject exec(jstring arg0, jarray arg1, java::io::File arg2);
		QAndroidJniObject exec(const QString &arg0, jarray arg1, java::io::File arg2);
		void exit(jint arg0);
		jlong freeMemory();
		void gc();
		void halt(jint arg0);
		void load(jstring arg0);
		void load(const QString &arg0);
		void loadLibrary(jstring arg0);
		void loadLibrary(const QString &arg0);
		jlong maxMemory();
		jboolean removeShutdownHook(java::lang::Thread arg0);
		void runFinalization();
		jlong totalMemory();
	};
} // namespace java::lang

