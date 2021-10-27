#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCodecInfo_CodecCapabilities;
}

namespace android::media
{
	class MediaCodecInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCodecInfo(QAndroidJniObject obj);
		// Constructors
		MediaCodecInfo() = default;
		
		// Methods
		jstring getCanonicalName();
		QAndroidJniObject getCapabilitiesForType(jstring arg0);
		QAndroidJniObject getCapabilitiesForType(const QString &arg0);
		jstring getName();
		jarray getSupportedTypes();
		jboolean isAlias();
		jboolean isEncoder();
		jboolean isHardwareAccelerated();
		jboolean isSoftwareOnly();
		jboolean isVendor();
	};
} // namespace android::media

