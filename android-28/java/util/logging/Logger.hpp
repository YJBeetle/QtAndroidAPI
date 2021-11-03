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
		void addHandler(java::util::logging::Handler arg0) const;
		void config(JString arg0) const;
		void config(JObject arg0) const;
		void entering(JString arg0, JString arg1) const;
		void entering(JString arg0, JString arg1, JObjectArray arg2) const;
		void entering(JString arg0, JString arg1, JObject arg2) const;
		void exiting(JString arg0, JString arg1) const;
		void exiting(JString arg0, JString arg1, JObject arg2) const;
		void fine(JString arg0) const;
		void fine(JObject arg0) const;
		void finer(JString arg0) const;
		void finer(JObject arg0) const;
		void finest(JString arg0) const;
		void finest(JObject arg0) const;
		JObject getFilter() const;
		JArray getHandlers() const;
		java::util::logging::Level getLevel() const;
		JString getName() const;
		java::util::logging::Logger getParent() const;
		java::util::ResourceBundle getResourceBundle() const;
		JString getResourceBundleName() const;
		jboolean getUseParentHandlers() const;
		void info(JString arg0) const;
		void info(JObject arg0) const;
		jboolean isLoggable(java::util::logging::Level arg0) const;
		void log(java::util::logging::LogRecord arg0) const;
		void log(java::util::logging::Level arg0, JString arg1) const;
		void log(java::util::logging::Level arg0, JObject arg1) const;
		void log(java::util::logging::Level arg0, JString arg1, JObjectArray arg2) const;
		void log(java::util::logging::Level arg0, JString arg1, JObject arg2) const;
		void log(java::util::logging::Level arg0, JString arg1, JThrowable arg2) const;
		void log(java::util::logging::Level arg0, JThrowable arg1, JObject arg2) const;
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3) const;
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JObject arg3) const;
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObjectArray arg4) const;
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObject arg4) const;
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JThrowable arg4) const;
		void logp(java::util::logging::Level arg0, JString arg1, JString arg2, JThrowable arg3, JObject arg4) const;
		void logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JObjectArray arg3) const;
		void logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JThrowable arg3) const;
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4) const;
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObjectArray arg5) const;
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObject arg5) const;
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JThrowable arg5) const;
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JObjectArray arg5) const;
		void logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JThrowable arg5) const;
		void removeHandler(java::util::logging::Handler arg0) const;
		void setFilter(JObject arg0) const;
		void setLevel(java::util::logging::Level arg0) const;
		void setParent(java::util::logging::Logger arg0) const;
		void setResourceBundle(java::util::ResourceBundle arg0) const;
		void setUseParentHandlers(jboolean arg0) const;
		void severe(JString arg0) const;
		void severe(JObject arg0) const;
		void throwing(JString arg0, JString arg1, JThrowable arg2) const;
		void warning(JString arg0) const;
		void warning(JObject arg0) const;
	};
} // namespace java::util::logging

