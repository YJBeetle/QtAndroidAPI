#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::mtp
{
	class MtpStorageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpStorageInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MtpStorageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDescription();
		jlong getFreeSpace();
		jlong getMaxCapacity();
		jint getStorageId();
		jstring getVolumeIdentifier();
	};
} // namespace android::mtp

