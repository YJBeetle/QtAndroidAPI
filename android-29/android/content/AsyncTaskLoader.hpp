#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Loader.hpp"

namespace android::content
{
	class Context;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::content
{
	class AsyncTaskLoader : public android::content::Loader
	{
	public:
		// Fields
		
		AsyncTaskLoader(QAndroidJniObject obj);
		// Constructors
		AsyncTaskLoader(android::content::Context arg0);
		AsyncTaskLoader() = default;
		
		// Methods
		void cancelLoadInBackground();
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		jboolean isLoadInBackgroundCanceled();
		jobject loadInBackground();
		void onCanceled(jobject arg0);
		void setUpdateThrottle(jlong arg0);
	};
} // namespace android::content

