#include "./BlobHandle.hpp"
#include "./BlobStoreManager_Session.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./BlobStoreManager.hpp"

namespace android::app::blob
{
	// Fields
	
	// QAndroidJniObject forward
	BlobStoreManager::BlobStoreManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BlobStoreManager::abandonSession(jlong arg0)
	{
		callMethod<void>(
			"abandonSession",
			"(J)V",
			arg0
		);
	}
	void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, jint arg1)
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;I)V",
			arg0.object(),
			arg1
		);
	}
	void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, jstring arg1)
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1
		);
	}
	void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, jint arg1, jlong arg2)
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;IJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, jstring arg1, jlong arg2)
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;Ljava/lang/CharSequence;J)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jlong BlobStoreManager::createSession(android::app::blob::BlobHandle arg0)
	{
		return callMethod<jlong>(
			"createSession",
			"(Landroid/app/blob/BlobHandle;)J",
			arg0.object()
		);
	}
	JObject BlobStoreManager::getLeasedBlobs()
	{
		return callObjectMethod(
			"getLeasedBlobs",
			"()Ljava/util/List;"
		);
	}
	jlong BlobStoreManager::getRemainingLeaseQuotaBytes()
	{
		return callMethod<jlong>(
			"getRemainingLeaseQuotaBytes",
			"()J"
		);
	}
	android::os::ParcelFileDescriptor BlobStoreManager::openBlob(android::app::blob::BlobHandle arg0)
	{
		return callObjectMethod(
			"openBlob",
			"(Landroid/app/blob/BlobHandle;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::app::blob::BlobStoreManager_Session BlobStoreManager::openSession(jlong arg0)
	{
		return callObjectMethod(
			"openSession",
			"(J)Landroid/app/blob/BlobStoreManager$Session;",
			arg0
		);
	}
	void BlobStoreManager::releaseLease(android::app::blob::BlobHandle arg0)
	{
		callMethod<void>(
			"releaseLease",
			"(Landroid/app/blob/BlobHandle;)V",
			arg0.object()
		);
	}
} // namespace android::app::blob

