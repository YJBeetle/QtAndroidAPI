#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::content::pm
{
	class PackageInstaller_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageInstaller_Session(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abandon();
		void addChildSessionId(jint arg0);
		void close();
		void commit(android::content::IntentSender arg0);
		void fsync(java::io::OutputStream arg0);
		jintArray getChildSessionIds();
		jarray getNames();
		jint getParentSessionId();
		jboolean isMultiPackage();
		jboolean isStaged();
		java::io::InputStream openRead(jstring arg0);
		java::io::OutputStream openWrite(jstring arg0, jlong arg1, jlong arg2);
		void removeChildSessionId(jint arg0);
		void removeSplit(jstring arg0);
		void setChecksums(jstring arg0, __JniBaseClass arg1, jbyteArray arg2);
		void setStagingProgress(jfloat arg0);
		void transfer(jstring arg0);
	};
} // namespace android::content::pm

