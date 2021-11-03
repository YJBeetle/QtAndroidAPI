#include "./MtpObjectInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QJniObject forward
	MtpObjectInfo::MtpObjectInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MtpObjectInfo::getAssociationDesc()
	{
		return callMethod<jint>(
			"getAssociationDesc",
			"()I"
		);
	}
	jint MtpObjectInfo::getAssociationType()
	{
		return callMethod<jint>(
			"getAssociationType",
			"()I"
		);
	}
	jint MtpObjectInfo::getCompressedSize()
	{
		return callMethod<jint>(
			"getCompressedSize",
			"()I"
		);
	}
	jlong MtpObjectInfo::getCompressedSizeLong()
	{
		return callMethod<jlong>(
			"getCompressedSizeLong",
			"()J"
		);
	}
	jlong MtpObjectInfo::getDateCreated()
	{
		return callMethod<jlong>(
			"getDateCreated",
			"()J"
		);
	}
	jlong MtpObjectInfo::getDateModified()
	{
		return callMethod<jlong>(
			"getDateModified",
			"()J"
		);
	}
	jint MtpObjectInfo::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint MtpObjectInfo::getImagePixDepth()
	{
		return callMethod<jint>(
			"getImagePixDepth",
			"()I"
		);
	}
	jlong MtpObjectInfo::getImagePixDepthLong()
	{
		return callMethod<jlong>(
			"getImagePixDepthLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getImagePixHeight()
	{
		return callMethod<jint>(
			"getImagePixHeight",
			"()I"
		);
	}
	jlong MtpObjectInfo::getImagePixHeightLong()
	{
		return callMethod<jlong>(
			"getImagePixHeightLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getImagePixWidth()
	{
		return callMethod<jint>(
			"getImagePixWidth",
			"()I"
		);
	}
	jlong MtpObjectInfo::getImagePixWidthLong()
	{
		return callMethod<jlong>(
			"getImagePixWidthLong",
			"()J"
		);
	}
	jstring MtpObjectInfo::getKeywords()
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpObjectInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MtpObjectInfo::getObjectHandle()
	{
		return callMethod<jint>(
			"getObjectHandle",
			"()I"
		);
	}
	jint MtpObjectInfo::getParent()
	{
		return callMethod<jint>(
			"getParent",
			"()I"
		);
	}
	jint MtpObjectInfo::getProtectionStatus()
	{
		return callMethod<jint>(
			"getProtectionStatus",
			"()I"
		);
	}
	jint MtpObjectInfo::getSequenceNumber()
	{
		return callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	jlong MtpObjectInfo::getSequenceNumberLong()
	{
		return callMethod<jlong>(
			"getSequenceNumberLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getStorageId()
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	jint MtpObjectInfo::getThumbCompressedSize()
	{
		return callMethod<jint>(
			"getThumbCompressedSize",
			"()I"
		);
	}
	jlong MtpObjectInfo::getThumbCompressedSizeLong()
	{
		return callMethod<jlong>(
			"getThumbCompressedSizeLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getThumbFormat()
	{
		return callMethod<jint>(
			"getThumbFormat",
			"()I"
		);
	}
	jint MtpObjectInfo::getThumbPixHeight()
	{
		return callMethod<jint>(
			"getThumbPixHeight",
			"()I"
		);
	}
	jlong MtpObjectInfo::getThumbPixHeightLong()
	{
		return callMethod<jlong>(
			"getThumbPixHeightLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getThumbPixWidth()
	{
		return callMethod<jint>(
			"getThumbPixWidth",
			"()I"
		);
	}
	jlong MtpObjectInfo::getThumbPixWidthLong()
	{
		return callMethod<jlong>(
			"getThumbPixWidthLong",
			"()J"
		);
	}
} // namespace android::mtp

