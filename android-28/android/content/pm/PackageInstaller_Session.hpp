#pragma once

#include "../../../JObject.hpp"

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
		void close();
		void commit(android::content::IntentSender arg0);
		void fsync(java::io::OutputStream arg0);
		jarray getNames();
		java::io::InputStream openRead(jstring arg0);
		java::io::OutputStream openWrite(jstring arg0, jlong arg1, jlong arg2);
		void removeSplit(jstring arg0);
		void setStagingProgress(jfloat arg0);
		void transfer(jstring arg0);
	};
} // namespace android::content::pm

