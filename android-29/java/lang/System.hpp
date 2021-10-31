#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class Console;
}
namespace java::io
{
	class FileOutputStream;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::lang
{
	class SecurityManager;
}
namespace java::util
{
	class Properties;
}
namespace java::util
{
	class ResourceBundle;
}

namespace java::lang
{
	class System : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject err();
		static QAndroidJniObject in();
		static QAndroidJniObject out();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit System(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		System(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void arraycopy(jobject arg0, jint arg1, jobject arg2, jint arg3, jint arg4);
		static jstring clearProperty(jstring arg0);
		static QAndroidJniObject console();
		static jlong currentTimeMillis();
		static void exit(jint arg0);
		static void gc();
		static QAndroidJniObject getLogger(jstring arg0);
		static QAndroidJniObject getLogger(jstring arg0, java::util::ResourceBundle arg1);
		static QAndroidJniObject getProperties();
		static jstring getProperty(jstring arg0);
		static jstring getProperty(jstring arg0, jstring arg1);
		static QAndroidJniObject getSecurityManager();
		static jstring getenv(jstring arg0);
		static QAndroidJniObject getenv();
		static jint identityHashCode(jobject arg0);
		static QAndroidJniObject inheritedChannel();
		static jstring lineSeparator();
		static void load(jstring arg0);
		static void loadLibrary(jstring arg0);
		static jstring mapLibraryName(jstring arg0);
		static jlong nanoTime();
		static void runFinalization();
		static void setErr(java::io::PrintStream arg0);
		static void setIn(java::io::InputStream arg0);
		static void setOut(java::io::PrintStream arg0);
		static void setProperties(java::util::Properties arg0);
		static jstring setProperty(jstring arg0, jstring arg1);
		static void setSecurityManager(java::lang::SecurityManager arg0);
	};
} // namespace java::lang

