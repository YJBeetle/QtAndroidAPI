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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlobStoreManager_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobStoreManager_Session(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void abandon() const;
		void allowPackageAccess(JString arg0, JByteArray arg1) const;
		void allowPublicAccess() const;
		void allowSameSignatureAccess() const;
		void close() const;
		void commit(JObject arg0, JObject arg1) const;
		jlong getSize() const;
		jboolean isPackageAccessAllowed(JString arg0, JByteArray arg1) const;
		jboolean isPublicAccessAllowed() const;
		jboolean isSameSignatureAccessAllowed() const;
		android::os::ParcelFileDescriptor openRead() const;
		android::os::ParcelFileDescriptor openWrite(jlong arg0, jlong arg1) const;
	};
} // namespace android::app::blob

