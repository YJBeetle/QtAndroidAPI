#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace java::sql
{
	class SQLPermission;
}
namespace java::util
{
	class Properties;
}
namespace java::util::concurrent
{
	class CopyOnWriteArrayList;
}

namespace java::sql
{
	class DriverManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DriverManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DriverManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void deregisterDriver(JObject arg0);
		static JObject drivers();
		static JObject getConnection(JString arg0);
		static JObject getConnection(JString arg0, java::util::Properties arg1);
		static JObject getConnection(JString arg0, JString arg1, JString arg2);
		static JObject getDriver(JString arg0);
		static JObject getDrivers();
		static java::io::PrintStream getLogStream();
		static java::io::PrintWriter getLogWriter();
		static jint getLoginTimeout();
		static void println(JString arg0);
		static void registerDriver(JObject arg0);
		static void registerDriver(JObject arg0, JObject arg1);
		static void setLogStream(java::io::PrintStream arg0);
		static void setLogWriter(java::io::PrintWriter arg0);
		static void setLoginTimeout(jint arg0);
	};
} // namespace java::sql

