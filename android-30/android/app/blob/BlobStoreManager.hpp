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

namespace android::app::blob
{
	class BlobStoreManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BlobStoreManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobStoreManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void abandonSession(jlong arg0);
		void acquireLease(android::app::blob::BlobHandle arg0, jint arg1);
		void acquireLease(android::app::blob::BlobHandle arg0, jstring arg1);
		void acquireLease(android::app::blob::BlobHandle arg0, jint arg1, jlong arg2);
		void acquireLease(android::app::blob::BlobHandle arg0, jstring arg1, jlong arg2);
		jlong createSession(android::app::blob::BlobHandle arg0);
		JObject getLeasedBlobs();
		jlong getRemainingLeaseQuotaBytes();
		android::os::ParcelFileDescriptor openBlob(android::app::blob::BlobHandle arg0);
		android::app::blob::BlobStoreManager_Session openSession(jlong arg0);
		void releaseLease(android::app::blob::BlobHandle arg0);
	};
} // namespace android::app::blob

