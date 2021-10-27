#pragma once

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
	jstring MediaCodecInfo::getCanonicalName()
	{
		return __thiz.callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaCodecInfo::getCapabilitiesForType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0
		);
	}
	QAndroidJniObject MediaCodecInfo::getCapabilitiesForType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCapabilitiesForType",
			"(Ljava/lang/String;)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MediaCodecInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray MediaCodecInfo::getSupportedTypes()
	{
		return __thiz.callObjectMethod(
			"getSupportedTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean MediaCodecInfo::isAlias()
	{
		return __thiz.callMethod<jboolean>(
			"isAlias",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isEncoder()
	{
		return __thiz.callMethod<jboolean>(
			"isEncoder",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isSoftwareOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isSoftwareOnly",
			"()Z"
		);
	}
	jboolean MediaCodecInfo::isVendor()
	{
		return __thiz.callMethod<jboolean>(
			"isVendor",
			"()Z"
		);
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

