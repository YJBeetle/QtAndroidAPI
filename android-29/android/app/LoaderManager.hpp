#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Loader;
}
namespace android::os
{
	class Bundle;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class LoaderManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoaderManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LoaderManager(QAndroidJniObject obj);
		
		// Constructors
		LoaderManager();
		
		// Methods
		static void enableDebugLogging(jboolean arg0);
		void destroyLoader(jint arg0);
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject getLoader(jint arg0);
		QAndroidJniObject initLoader(jint arg0, android::os::Bundle arg1, __JniBaseClass arg2);
		QAndroidJniObject restartLoader(jint arg0, android::os::Bundle arg1, __JniBaseClass arg2);
	};
} // namespace android::app

