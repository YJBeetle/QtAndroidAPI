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
		
		PackageInstaller_Session(QAndroidJniObject obj);
		// Constructors
		PackageInstaller_Session() = default;
		
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
		QAndroidJniObject openRead(jstring arg0);
		QAndroidJniObject openRead(const QString &arg0);
		QAndroidJniObject openWrite(jstring arg0, jlong arg1, jlong arg2);
		QAndroidJniObject openWrite(const QString &arg0, jlong arg1, jlong arg2);
		void removeChildSessionId(jint arg0);
		void removeSplit(jstring arg0);
		void removeSplit(const QString &arg0);
		void setStagingProgress(jfloat arg0);
		void transfer(jstring arg0);
		void transfer(const QString &arg0);
	};
} // namespace android::content::pm

