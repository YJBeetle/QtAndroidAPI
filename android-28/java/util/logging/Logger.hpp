#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
class JArray;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
class JThrowable;
namespace java::lang::ref
{
	class WeakReference;
}
namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class ResourceBundle;
}
namespace java::util::logging
{
	class Handler;
}
namespace java::util::logging
{
	class Level;
}
namespace java::util::logging
{
	class LogManager;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class Logger : public JObject
	{
	public:
		// Fields
		static JString GLOBAL_LOGGER_NAME();
		static java::util::logging::Logger global();
		
		// QJniObject forward
		template<typename ...Ts> explicit Logger(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Logger(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::logging::Logger getAnonymousLogger();
		static java::util::logging::Logger getAnonymousLogger(JString arg0);
		static java::util::logging::Logger getGlobal();
		static java::util::logging::Logger getLogger(JString arg0);
		static java::util::logging::Logger getLogger(JString arg0, JString arg1);
		void addHandler(java::util::logging::Handler arg0);
		void config(JString arg0);
		void config(JObject arg0);
		void entering(JString arg0, JString arg1);
		void entering(JString arg0, JString arg1, JObjectArray arg2);
		void entering(JString arg0, JString arg1, JObject arg2);
		void exiting(JString arg0, JString arg1);
		void exiting(JString arg0, JString arg1, JObject arg2);
		void fine(JString arg0);
		void fine(JObject arg0);
		void finer(JString arg0);
		void finer(JObject arg0);
		void finest(JString arg0);
		void finest(JObject arg0);
		JObject getFilter();
		JArray getHandlers();
		java::util::logging::Level getLevel();
		JString getName();
		java::util::logging::Logger getParent();
		java::util::ResourceBundle getResourceBundle();
		JString getResourceBundleName();
		jboolean getUseParentHandlers();
		void info(JString arg0);
		void info(JObject arg0);
		jboolean isLoggable(java::util::logging::Level arg0);
		void log(java::util::logging::LogRecord arg0);
		void log(java::util::logging::Level arg0, JString arg1);
		void log(java::util::logging::Level arg0, JObject arg1);
		void log(java::util::logging::Level arg0, JString arg1, JObjectArray arg2);
		void log(java::util::logging::Level arg0, JString arg1, JObject arg2);
		void log(java::util::logging::Level arg0, JString arg1, JThrowable arg2);
		void log(java::util::logging::Level arg0, JThrowable arg1, JObject arg2);
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3);
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JObject arg3);
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObjectArray arg4);
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObject arg4);
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JThrowable arg4);
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JThrowable arg3, JObject arg4);
		void logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JObjectArray arg3);
		void logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JThrowable arg3);
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObjectArray arg5);
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObject arg5);
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JThrowable arg5);
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JObjectArray arg5);
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JThrowable arg5);
		void removeHandler(java::util::logging::Handler arg0);
		void setFilter(JObject arg0);
		void setLevel(java::util::logging::Level arg0);
		void setParent(java::util::logging::Logger arg0);
		void setResourceBundle(java::util::ResourceBundle arg0);
		void setUseParentHandlers(jboolean arg0);
		void severe(JString arg0);
		void severe(JObject arg0);
		void throwing(JString arg0, JString arg1, JThrowable arg2);
		void warning(JString arg0);
		void warning(JObject arg0);
	};
} // namespace java::util::logging

