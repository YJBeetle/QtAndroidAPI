#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
	class Logger : public __JniBaseClass
	{
	public:
		// Fields
		static jstring GLOBAL_LOGGER_NAME();
		static QAndroidJniObject global();
		
		Logger(QAndroidJniObject obj);
		// Constructors
		Logger() = default;
		
		// Methods
		static QAndroidJniObject getAnonymousLogger();
		static QAndroidJniObject getAnonymousLogger(jstring arg0);
		static QAndroidJniObject getGlobal();
		static QAndroidJniObject getLogger(jstring arg0);
		static QAndroidJniObject getLogger(jstring arg0, jstring arg1);
		void addHandler(java::util::logging::Handler arg0);
		void config(jstring arg0);
		void config(__JniBaseClass arg0);
		void entering(jstring arg0, jstring arg1);
		void entering(jstring arg0, jstring arg1, jobjectArray arg2);
		void entering(jstring arg0, jstring arg1, jobject arg2);
		void exiting(jstring arg0, jstring arg1);
		void exiting(jstring arg0, jstring arg1, jobject arg2);
		void fine(jstring arg0);
		void fine(__JniBaseClass arg0);
		void finer(jstring arg0);
		void finer(__JniBaseClass arg0);
		void finest(jstring arg0);
		void finest(__JniBaseClass arg0);
		QAndroidJniObject getFilter();
		jarray getHandlers();
		QAndroidJniObject getLevel();
		jstring getName();
		QAndroidJniObject getParent();
		QAndroidJniObject getResourceBundle();
		jstring getResourceBundleName();
		jboolean getUseParentHandlers();
		void info(jstring arg0);
		void info(__JniBaseClass arg0);
		jboolean isLoggable(java::util::logging::Level arg0);
		void log(java::util::logging::LogRecord arg0);
		void log(java::util::logging::Level arg0, jstring arg1);
		void log(java::util::logging::Level arg0, __JniBaseClass arg1);
		void log(java::util::logging::Level arg0, jstring arg1, jobjectArray arg2);
		void log(java::util::logging::Level arg0, jstring arg1, jobject arg2);
		void log(java::util::logging::Level arg0, jstring arg1, jthrowable arg2);
		void log(java::util::logging::Level arg0, jthrowable arg1, __JniBaseClass arg2);
		void logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3);
		void logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		void logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobjectArray arg4);
		void logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobject arg4);
		void logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jthrowable arg4);
		void logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jthrowable arg3, __JniBaseClass arg4);
		void logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, jstring arg2, jobjectArray arg3);
		void logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, jstring arg2, jthrowable arg3);
		void logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobjectArray arg5);
		void logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobject arg5);
		void logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jthrowable arg5);
		void logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, java::util::ResourceBundle arg3, jstring arg4, jobjectArray arg5);
		void logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, java::util::ResourceBundle arg3, jstring arg4, jthrowable arg5);
		void removeHandler(java::util::logging::Handler arg0);
		void setFilter(__JniBaseClass arg0);
		void setLevel(java::util::logging::Level arg0);
		void setParent(java::util::logging::Logger arg0);
		void setResourceBundle(java::util::ResourceBundle arg0);
		void setUseParentHandlers(jboolean arg0);
		void severe(jstring arg0);
		void severe(__JniBaseClass arg0);
		void throwing(jstring arg0, jstring arg1, jthrowable arg2);
		void warning(jstring arg0);
		void warning(__JniBaseClass arg0);
	};
} // namespace java::util::logging

