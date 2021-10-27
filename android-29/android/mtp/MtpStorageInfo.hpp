#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::mtp
{
	class MtpStorageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MtpStorageInfo(QAndroidJniObject obj);
		// Constructors
		MtpStorageInfo() = default;
		
		// Methods
		jstring getDescription();
		jlong getFreeSpace();
		jlong getMaxCapacity();
		jint getStorageId();
		jstring getVolumeIdentifier();
	};
} // namespace android::mtp

