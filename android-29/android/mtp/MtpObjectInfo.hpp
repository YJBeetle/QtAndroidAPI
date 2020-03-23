#pragma once

#ifndef ANDROID_MTP_MTPOBJECTINFO
#define ANDROID_MTP_MTPOBJECTINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::mtp
{
	class MtpObjectInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jint getParent();
		jint getCompressedSize();
		jint getFormat();
		jint getSequenceNumber();
		jint getObjectHandle();
		jint getStorageId();
		jint getProtectionStatus();
		jlong getCompressedSizeLong();
		jint getThumbFormat();
		jint getThumbCompressedSize();
		jlong getThumbCompressedSizeLong();
		jint getThumbPixWidth();
		jlong getThumbPixWidthLong();
		jint getThumbPixHeight();
		jlong getThumbPixHeightLong();
		jint getImagePixWidth();
		jlong getImagePixWidthLong();
		jint getImagePixHeight();
		jlong getImagePixHeightLong();
		jint getImagePixDepth();
		jlong getImagePixDepthLong();
		jint getAssociationType();
		jint getAssociationDesc();
		jlong getSequenceNumberLong();
		jlong getDateCreated();
		jlong getDateModified();
		QAndroidJniObject getKeywords();
	};
} // namespace __jni_impl::android::mtp


namespace __jni_impl::android::mtp
{
	// Fields
	
	// Constructors
	void MtpObjectInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpObjectInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MtpObjectInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jint MtpObjectInfo::getParent()
	{
		return __thiz.callMethod<jint>(
			"getParent",
			"()I");
	}
	jint MtpObjectInfo::getCompressedSize()
	{
		return __thiz.callMethod<jint>(
			"getCompressedSize",
			"()I");
	}
	jint MtpObjectInfo::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I");
	}
	jint MtpObjectInfo::getSequenceNumber()
	{
		return __thiz.callMethod<jint>(
			"getSequenceNumber",
			"()I");
	}
	jint MtpObjectInfo::getObjectHandle()
	{
		return __thiz.callMethod<jint>(
			"getObjectHandle",
			"()I");
	}
	jint MtpObjectInfo::getStorageId()
	{
		return __thiz.callMethod<jint>(
			"getStorageId",
			"()I");
	}
	jint MtpObjectInfo::getProtectionStatus()
	{
		return __thiz.callMethod<jint>(
			"getProtectionStatus",
			"()I");
	}
	jlong MtpObjectInfo::getCompressedSizeLong()
	{
		return __thiz.callMethod<jlong>(
			"getCompressedSizeLong",
			"()J");
	}
	jint MtpObjectInfo::getThumbFormat()
	{
		return __thiz.callMethod<jint>(
			"getThumbFormat",
			"()I");
	}
	jint MtpObjectInfo::getThumbCompressedSize()
	{
		return __thiz.callMethod<jint>(
			"getThumbCompressedSize",
			"()I");
	}
	jlong MtpObjectInfo::getThumbCompressedSizeLong()
	{
		return __thiz.callMethod<jlong>(
			"getThumbCompressedSizeLong",
			"()J");
	}
	jint MtpObjectInfo::getThumbPixWidth()
	{
		return __thiz.callMethod<jint>(
			"getThumbPixWidth",
			"()I");
	}
	jlong MtpObjectInfo::getThumbPixWidthLong()
	{
		return __thiz.callMethod<jlong>(
			"getThumbPixWidthLong",
			"()J");
	}
	jint MtpObjectInfo::getThumbPixHeight()
	{
		return __thiz.callMethod<jint>(
			"getThumbPixHeight",
			"()I");
	}
	jlong MtpObjectInfo::getThumbPixHeightLong()
	{
		return __thiz.callMethod<jlong>(
			"getThumbPixHeightLong",
			"()J");
	}
	jint MtpObjectInfo::getImagePixWidth()
	{
		return __thiz.callMethod<jint>(
			"getImagePixWidth",
			"()I");
	}
	jlong MtpObjectInfo::getImagePixWidthLong()
	{
		return __thiz.callMethod<jlong>(
			"getImagePixWidthLong",
			"()J");
	}
	jint MtpObjectInfo::getImagePixHeight()
	{
		return __thiz.callMethod<jint>(
			"getImagePixHeight",
			"()I");
	}
	jlong MtpObjectInfo::getImagePixHeightLong()
	{
		return __thiz.callMethod<jlong>(
			"getImagePixHeightLong",
			"()J");
	}
	jint MtpObjectInfo::getImagePixDepth()
	{
		return __thiz.callMethod<jint>(
			"getImagePixDepth",
			"()I");
	}
	jlong MtpObjectInfo::getImagePixDepthLong()
	{
		return __thiz.callMethod<jlong>(
			"getImagePixDepthLong",
			"()J");
	}
	jint MtpObjectInfo::getAssociationType()
	{
		return __thiz.callMethod<jint>(
			"getAssociationType",
			"()I");
	}
	jint MtpObjectInfo::getAssociationDesc()
	{
		return __thiz.callMethod<jint>(
			"getAssociationDesc",
			"()I");
	}
	jlong MtpObjectInfo::getSequenceNumberLong()
	{
		return __thiz.callMethod<jlong>(
			"getSequenceNumberLong",
			"()J");
	}
	jlong MtpObjectInfo::getDateCreated()
	{
		return __thiz.callMethod<jlong>(
			"getDateCreated",
			"()J");
	}
	jlong MtpObjectInfo::getDateModified()
	{
		return __thiz.callMethod<jlong>(
			"getDateModified",
			"()J");
	}
	QAndroidJniObject MtpObjectInfo::getKeywords()
	{
		return __thiz.callObjectMethod(
			"getKeywords",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpObjectInfo : public __jni_impl::android::mtp::MtpObjectInfo
	{
	public:
		MtpObjectInfo(QAndroidJniObject obj) { __thiz = obj; }
		MtpObjectInfo()
		{
			__constructor();
		}
	};
} // namespace android::mtp

#endif // ANDROID_MTP_MTPOBJECTINFO

