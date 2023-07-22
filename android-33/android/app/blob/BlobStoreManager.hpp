#pragma once

#include "./BlobHandle.def.hpp"
#include "./BlobStoreManager_Session.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./BlobStoreManager.def.hpp"

namespace android::app::blob
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void BlobStoreManager::abandonSession(jlong arg0) const
	{
		callMethod<void>(
			"abandonSession",
			"(J)V",
			arg0
		);
	}
	inline void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, jint arg1) const
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, JString arg1) const
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, jint arg1, jlong arg2) const
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;IJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void BlobStoreManager::acquireLease(android::app::blob::BlobHandle arg0, JString arg1, jlong arg2) const
	{
		callMethod<void>(
			"acquireLease",
			"(Landroid/app/blob/BlobHandle;Ljava/lang/CharSequence;J)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jlong BlobStoreManager::createSession(android::app::blob::BlobHandle arg0) const
	{
		return callMethod<jlong>(
			"createSession",
			"(Landroid/app/blob/BlobHandle;)J",
			arg0.object()
		);
	}
	inline JObject BlobStoreManager::getLeasedBlobs() const
	{
		return callObjectMethod(
			"getLeasedBlobs",
			"()Ljava/util/List;"
		);
	}
	inline jlong BlobStoreManager::getRemainingLeaseQuotaBytes() const
	{
		return callMethod<jlong>(
			"getRemainingLeaseQuotaBytes",
			"()J"
		);
	}
	inline android::os::ParcelFileDescriptor BlobStoreManager::openBlob(android::app::blob::BlobHandle arg0) const
	{
		return callObjectMethod(
			"openBlob",
			"(Landroid/app/blob/BlobHandle;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	inline android::app::blob::BlobStoreManager_Session BlobStoreManager::openSession(jlong arg0) const
	{
		return callObjectMethod(
			"openSession",
			"(J)Landroid/app/blob/BlobStoreManager$Session;",
			arg0
		);
	}
	inline void BlobStoreManager::releaseLease(android::app::blob::BlobHandle arg0) const
	{
		callMethod<void>(
			"releaseLease",
			"(Landroid/app/blob/BlobHandle;)V",
			arg0.object()
		);
	}
} // namespace android::app::blob

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::blob;
#endif
