#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::app::blob
{
	class BlobStoreManager_Session : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BlobStoreManager_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobStoreManager_Session(QJniObject obj);
		
		// Constructors
		
		// Methods
		void abandon();
		void allowPackageAccess(JString arg0, JByteArray arg1);
		void allowPublicAccess();
		void allowSameSignatureAccess();
		void close();
		void commit(JObject arg0, JObject arg1);
		jlong getSize();
		jboolean isPackageAccessAllowed(JString arg0, JByteArray arg1);
		jboolean isPublicAccessAllowed();
		jboolean isSameSignatureAccessAllowed();
		android::os::ParcelFileDescriptor openRead();
		android::os::ParcelFileDescriptor openWrite(jlong arg0, jlong arg1);
	};
} // namespace android::app::blob

