#pragma once

#include "./Loader.hpp"

class JArray;
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
class JObject;
class JString;

namespace android::content
{
	class AsyncTaskLoader : public android::content::Loader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncTaskLoader(const char *className, const char *sig, Ts...agv) : android::content::Loader(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTaskLoader(QAndroidJniObject obj);
		
		// Constructors
		AsyncTaskLoader(android::content::Context arg0);
		
		// Methods
		void cancelLoadInBackground();
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3);
		jboolean isLoadInBackgroundCanceled();
		JObject loadInBackground();
		void onCanceled(JObject arg0);
		void setUpdateThrottle(jlong arg0);
	};
} // namespace android::content

