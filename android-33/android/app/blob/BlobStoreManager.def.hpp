#pragma once

#include "../../../JObject.hpp"

namespace android::app::blob
{
	class BlobHandle;
}
namespace android::app::blob
{
	class BlobStoreManager_Session;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::app::blob
{
	class BlobStoreManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlobStoreManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobStoreManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void abandonSession(jlong arg0) const;
		void acquireLease(android::app::blob::BlobHandle arg0, jint arg1) const;
		void acquireLease(android::app::blob::BlobHandle arg0, JString arg1) const;
		void acquireLease(android::app::blob::BlobHandle arg0, jint arg1, jlong arg2) const;
		void acquireLease(android::app::blob::BlobHandle arg0, JString arg1, jlong arg2) const;
		jlong createSession(android::app::blob::BlobHandle arg0) const;
		JObject getLeasedBlobs() const;
		jlong getRemainingLeaseQuotaBytes() const;
		android::os::ParcelFileDescriptor openBlob(android::app::blob::BlobHandle arg0) const;
		android::app::blob::BlobStoreManager_Session openSession(jlong arg0) const;
		void releaseLease(android::app::blob::BlobHandle arg0) const;
	};
} // namespace android::app::blob

