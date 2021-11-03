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
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_Session(QJniObject obj);
		
		// Constructors
		
		// Methods
		void abandon();
		void close();
		void commit(android::content::IntentSender arg0);
		void fsync(java::io::OutputStream arg0);
		JArray getNames();
		java::io::InputStream openRead(JString arg0);
		java::io::OutputStream openWrite(JString arg0, jlong arg1, jlong arg2);
		void removeSplit(JString arg0);
		void setStagingProgress(jfloat arg0);
		void transfer(JString arg0);
	};
} // namespace android::content::pm

