#include "../../../JByteArray.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../JString.hpp"
#include "./BlobStoreManager_Session.hpp"

namespace android::app::blob
{
	// Fields
	
	// QAndroidJniObject forward
	BlobStoreManager_Session::BlobStoreManager_Session(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BlobStoreManager_Session::abandon() const
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	void BlobStoreManager_Session::allowPackageAccess(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"allowPackageAccess",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void BlobStoreManager_Session::allowPublicAccess() const
	{
		callMethod<void>(
			"allowPublicAccess",
			"()V"
		);
	}
	void BlobStoreManager_Session::allowSameSignatureAccess() const
	{
		callMethod<void>(
			"allowSameSignatureAccess",
			"()V"
		);
	}
	void BlobStoreManager_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void BlobStoreManager_Session::commit(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"commit",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jlong BlobStoreManager_Session::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jboolean BlobStoreManager_Session::isPackageAccessAllowed(JString arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"isPackageAccessAllowed",
			"(Ljava/lang/String;[B)Z",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	jboolean BlobStoreManager_Session::isPublicAccessAllowed() const
	{
		return callMethod<jboolean>(
			"isPublicAccessAllowed",
			"()Z"
		);
	}
	jboolean BlobStoreManager_Session::isSameSignatureAccessAllowed() const
	{
		return callMethod<jboolean>(
			"isSameSignatureAccessAllowed",
			"()Z"
		);
	}
	android::os::ParcelFileDescriptor BlobStoreManager_Session::openRead() const
	{
		return callObjectMethod(
			"openRead",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	android::os::ParcelFileDescriptor BlobStoreManager_Session::openWrite(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"openWrite",
			"(JJ)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1
		);
	}
} // namespace android::app::blob

