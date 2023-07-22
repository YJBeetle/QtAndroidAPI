#pragma once

#include "../../../JObject.hpp"

class JByteArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_Session(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void abandon() const;
		void addChildSessionId(jint arg0) const;
		void close() const;
		void commit(android::content::IntentSender arg0) const;
		void fsync(java::io::OutputStream arg0) const;
		JIntArray getChildSessionIds() const;
		JArray getNames() const;
		jint getParentSessionId() const;
		jboolean isMultiPackage() const;
		jboolean isStaged() const;
		java::io::InputStream openRead(JString arg0) const;
		java::io::OutputStream openWrite(JString arg0, jlong arg1, jlong arg2) const;
		void removeChildSessionId(jint arg0) const;
		void removeSplit(JString arg0) const;
		void requestChecksums(JString arg0, jint arg1, JObject arg2, JObject arg3, JObject arg4) const;
		void setChecksums(JString arg0, JObject arg1, JByteArray arg2) const;
		void setStagingProgress(jfloat arg0) const;
		void transfer(JString arg0) const;
	};
} // namespace android::content::pm

