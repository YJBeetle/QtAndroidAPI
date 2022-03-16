#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::app
{
	class LoaderManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoaderManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LoaderManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LoaderManager();
		
		// Methods
		static void enableDebugLogging(jboolean arg0);
		void destroyLoader(jint arg0) const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		android::content::Loader getLoader(jint arg0) const;
		android::content::Loader initLoader(jint arg0, android::os::Bundle arg1, JObject arg2) const;
		android::content::Loader restartLoader(jint arg0, android::os::Bundle arg1, JObject arg2) const;
	};
} // namespace android::app

