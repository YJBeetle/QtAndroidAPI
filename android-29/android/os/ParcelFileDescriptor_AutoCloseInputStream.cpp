#include "./ParcelFileDescriptor.hpp"
#include "./ParcelFileDescriptor_AutoCloseInputStream.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	ParcelFileDescriptor_AutoCloseInputStream::ParcelFileDescriptor_AutoCloseInputStream(QJniObject obj) : java::io::FileInputStream(obj) {}
	
	// Constructors
	ParcelFileDescriptor_AutoCloseInputStream::ParcelFileDescriptor_AutoCloseInputStream(android::os::ParcelFileDescriptor arg0)
		: java::io::FileInputStream(
			"android.os.ParcelFileDescriptor$AutoCloseInputStream",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void ParcelFileDescriptor_AutoCloseInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint ParcelFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::os

