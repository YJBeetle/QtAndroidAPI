#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::content
{
	class IntentSender;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JString;

namespace android::content::pm
{
	class PackageInstaller_Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageInstaller_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abandon();
		void addChildSessionId(jint arg0);
		void close();
		void commit(android::content::IntentSender arg0);
		void fsync(java::io::OutputStream arg0);
		JIntArray getChildSessionIds();
		JArray getNames();
		jint getParentSessionId();
		jboolean isMultiPackage();
		jboolean isStaged();
		java::io::InputStream openRead(JString arg0);
		java::io::OutputStream openWrite(JString arg0, jlong arg1, jlong arg2);
		void removeChildSessionId(jint arg0);
		void removeSplit(JString arg0);
		void setStagingProgress(jfloat arg0);
		void transfer(JString arg0);
	};
} // namespace android::content::pm

