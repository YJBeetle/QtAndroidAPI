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
	void BlobStoreManager_Session::abandon()
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	void BlobStoreManager_Session::allowPackageAccess(JString arg0, JByteArray arg1)
	{
		callMethod<void>(
			"allowPackageAccess",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void BlobStoreManager_Session::allowPublicAccess()
	{
		callMethod<void>(
			"allowPublicAccess",
			"()V"
		);
	}
	void BlobStoreManager_Session::allowSameSignatureAccess()
	{
		callMethod<void>(
			"allowSameSignatureAccess",
			"()V"
		);
	}
	void BlobStoreManager_Session::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void BlobStoreManager_Session::commit(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"commit",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jlong BlobStoreManager_Session::getSize()
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jboolean BlobStoreManager_Session::isPackageAccessAllowed(JString arg0, JByteArray arg1)
	{
		return callMethod<jboolean>(
			"isPackageAccessAllowed",
			"(Ljava/lang/String;[B)Z",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	jboolean BlobStoreManager_Session::isPublicAccessAllowed()
	{
		return callMethod<jboolean>(
			"isPublicAccessAllowed",
			"()Z"
		);
	}
	jboolean BlobStoreManager_Session::isSameSignatureAccessAllowed()
	{
		return callMethod<jboolean>(
			"isSameSignatureAccessAllowed",
			"()Z"
		);
	}
	android::os::ParcelFileDescriptor BlobStoreManager_Session::openRead()
	{
		return callObjectMethod(
			"openRead",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	android::os::ParcelFileDescriptor BlobStoreManager_Session::openWrite(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"openWrite",
			"(JJ)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1
		);
	}
} // namespace android::app::blob

