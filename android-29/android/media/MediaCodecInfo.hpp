#pragma once

#ifndef ANDROID_MEDIA_MEDIACODECINFO
#define ANDROID_MEDIA_MEDIACODECINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCodecInfo_CodecCapabilities;
}

namespace __jni_impl::android::media
{
	class MediaCodecInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject getCanonicalName();
		jboolean isAlias();
		jboolean isEncoder();
		jboolean isVendor();
		jboolean isSoftwareOnly();
		QAndroidJniObject getCapabilitiesForType(jstring arg0);
		QAndroidJniObject getSupportedTypes();
		jboolean isHardwareAccelerated();
	};
} // namespace __jni_impl::android::media

#include "MediaCodecInfo_CodecCapabilities.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCodecInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodecInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaCodecInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo::getCanonicalName()
	{
		return __thiz.callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;");
	}
	jboolean MediaCodecInfo::isAlias()
	{
		return __thiz.callMethod<jboolean>(
			"isAlias",
			"()Z");
	}
	jboolean MediaCodecInfo::isEncoder()
	{
		return __thiz.callMethod<jboolean>(
			"isEncoder",
			"()Z");
	}
	jboolean MediaCodecInfo::isVendor()
	{
		return __thiz.callMethod<jboolean>(
			"isVendor",
			"()Z");
	}
	jboolean MediaCodecInfo::isSoftwareOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isSoftwareOnly",
			"()Z");
	}
	QAndroidJniObject MediaCodecInfo::getCapabilitiesForType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0);
	}
	QAndroidJniObject MediaCodecInfo::getSupportedTypes()
	{
		return __thiz.callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;");
	}
	jboolean MediaCodecInfo::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodecInfo : public __jni_impl::android::media::MediaCodecInfo
	{
	public:
		MediaCodecInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodecInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODECINFO

