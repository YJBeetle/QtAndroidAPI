#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./BlobStoreManager_Session.def.hpp"

namespace android::app::blob
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void BlobStoreManager_Session::abandon() const
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	inline void BlobStoreManager_Session::allowPackageAccess(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"allowPackageAccess",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void BlobStoreManager_Session::allowPublicAccess() const
	{
		callMethod<void>(
			"allowPublicAccess",
			"()V"
		);
	}
	inline void BlobStoreManager_Session::allowSameSignatureAccess() const
	{
		callMethod<void>(
			"allowSameSignatureAccess",
			"()V"
		);
	}
	inline void BlobStoreManager_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void BlobStoreManager_Session::commit(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"commit",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jlong BlobStoreManager_Session::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	inline jboolean BlobStoreManager_Session::isPackageAccessAllowed(JString arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"isPackageAccessAllowed",
			"(Ljava/lang/String;[B)Z",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean BlobStoreManager_Session::isPublicAccessAllowed() const
	{
		return callMethod<jboolean>(
			"isPublicAccessAllowed",
			"()Z"
		);
	}
	inline jboolean BlobStoreManager_Session::isSameSignatureAccessAllowed() const
	{
		return callMethod<jboolean>(
			"isSameSignatureAccessAllowed",
			"()Z"
		);
	}
	inline android::os::ParcelFileDescriptor BlobStoreManager_Session::openRead() const
	{
		return callObjectMethod(
			"openRead",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline android::os::ParcelFileDescriptor BlobStoreManager_Session::openWrite(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"openWrite",
			"(JJ)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1
		);
	}
} // namespace android::app::blob

// Base class headers

