#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::app::blob
{
	class BlobStoreManager_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlobStoreManager_Session(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BlobStoreManager_Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abandon();
		void allowPackageAccess(jstring arg0, jbyteArray arg1);
		void allowPublicAccess();
		void allowSameSignatureAccess();
		void close();
		void commit(__JniBaseClass arg0, __JniBaseClass arg1);
		jlong getSize();
		jboolean isPackageAccessAllowed(jstring arg0, jbyteArray arg1);
		jboolean isPublicAccessAllowed();
		jboolean isSameSignatureAccessAllowed();
		android::os::ParcelFileDescriptor openRead();
		android::os::ParcelFileDescriptor openWrite(jlong arg0, jlong arg1);
	};
} // namespace android::app::blob

