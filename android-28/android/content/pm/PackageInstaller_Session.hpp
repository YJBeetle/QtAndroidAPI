#pragma once

#include "../../../JObject.hpp"

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
		void abandon() const;
		void close() const;
		void commit(android::content::IntentSender arg0) const;
		void fsync(java::io::OutputStream arg0) const;
		JArray getNames() const;
		java::io::InputStream openRead(JString arg0) const;
		java::io::OutputStream openWrite(JString arg0, jlong arg1, jlong arg2) const;
		void removeSplit(JString arg0) const;
		void setStagingProgress(jfloat arg0) const;
		void transfer(JString arg0) const;
	};
} // namespace android::content::pm

