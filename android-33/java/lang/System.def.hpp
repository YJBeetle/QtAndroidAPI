#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class Console;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class PrintStream;
}
class JClass;
class JObject;
namespace java::lang
{
	class SecurityManager;
}
class JString;
class JThrowable;
namespace java::net
{
	class URL;
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
	class System : public JObject
	{
	public:
		// Fields
		static java::io::PrintStream err();
		static java::io::InputStream in();
		static java::io::PrintStream out();
		
		// QJniObject forward
		template<typename ...Ts> explicit System(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		System(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static void arraycopy(JObject arg0, jint arg1, JObject arg2, jint arg3, jint arg4);
		static JString clearProperty(JString arg0);
		static java::io::Console console();
		static jlong currentTimeMillis();
		static void exit(jint arg0);
		static void gc();
		static JObject getLogger(JString arg0);
		static JObject getLogger(JString arg0, java::util::ResourceBundle arg1);
		static java::util::Properties getProperties();
		static JString getProperty(JString arg0);
		static JString getProperty(JString arg0, JString arg1);
		static java::lang::SecurityManager getSecurityManager();
		static JString getenv(JString arg0);
		static JObject getenv();
		static jint identityHashCode(JObject arg0);
		static JObject inheritedChannel();
		static JString lineSeparator();
		static void load(JString arg0);
		static void loadLibrary(JString arg0);
		static JString mapLibraryName(JString arg0);
		static jlong nanoTime();
		static void runFinalization();
		static void setErr(java::io::PrintStream arg0);
		static void setIn(java::io::InputStream arg0);
		static void setOut(java::io::PrintStream arg0);
		static void setProperties(java::util::Properties arg0);
		static JString setProperty(JString arg0, JString arg1);
		static void setSecurityManager(java::lang::SecurityManager arg0);
	};
} // namespace java::lang

