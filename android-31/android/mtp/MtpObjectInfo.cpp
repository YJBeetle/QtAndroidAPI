#include "../../JString.hpp"
#include "./MtpObjectInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QJniObject forward
	MtpObjectInfo::MtpObjectInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MtpObjectInfo::getAssociationDesc() const
	{
		return callMethod<jint>(
			"getAssociationDesc",
			"()I"
		);
	}
	jint MtpObjectInfo::getAssociationType() const
	{
		return callMethod<jint>(
			"getAssociationType",
			"()I"
		);
	}
	jint MtpObjectInfo::getCompressedSize() const
	{
		return callMethod<jint>(
			"getCompressedSize",
			"()I"
		);
	}
	jlong MtpObjectInfo::getCompressedSizeLong() const
	{
		return callMethod<jlong>(
			"getCompressedSizeLong",
			"()J"
		);
	}
	jlong MtpObjectInfo::getDateCreated() const
	{
		return callMethod<jlong>(
			"getDateCreated",
			"()J"
		);
	}
	jlong MtpObjectInfo::getDateModified() const
	{
		return callMethod<jlong>(
			"getDateModified",
			"()J"
		);
	}
	jint MtpObjectInfo::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint MtpObjectInfo::getImagePixDepth() const
	{
		return callMethod<jint>(
			"getImagePixDepth",
			"()I"
		);
	}
	jlong MtpObjectInfo::getImagePixDepthLong() const
	{
		return callMethod<jlong>(
			"getImagePixDepthLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getImagePixHeight() const
	{
		return callMethod<jint>(
			"getImagePixHeight",
			"()I"
		);
	}
	jlong MtpObjectInfo::getImagePixHeightLong() const
	{
		return callMethod<jlong>(
			"getImagePixHeightLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getImagePixWidth() const
	{
		return callMethod<jint>(
			"getImagePixWidth",
			"()I"
		);
	}
	jlong MtpObjectInfo::getImagePixWidthLong() const
	{
		return callMethod<jlong>(
			"getImagePixWidthLong",
			"()J"
		);
	}
	JString MtpObjectInfo::getKeywords() const
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/lang/String;"
		);
	}
	JString MtpObjectInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint MtpObjectInfo::getObjectHandle() const
	{
		return callMethod<jint>(
			"getObjectHandle",
			"()I"
		);
	}
	jint MtpObjectInfo::getParent() const
	{
		return callMethod<jint>(
			"getParent",
			"()I"
		);
	}
	jint MtpObjectInfo::getProtectionStatus() const
	{
		return callMethod<jint>(
			"getProtectionStatus",
			"()I"
		);
	}
	jint MtpObjectInfo::getSequenceNumber() const
	{
		return callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	jlong MtpObjectInfo::getSequenceNumberLong() const
	{
		return callMethod<jlong>(
			"getSequenceNumberLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getStorageId() const
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	jint MtpObjectInfo::getThumbCompressedSize() const
	{
		return callMethod<jint>(
			"getThumbCompressedSize",
			"()I"
		);
	}
	jlong MtpObjectInfo::getThumbCompressedSizeLong() const
	{
		return callMethod<jlong>(
			"getThumbCompressedSizeLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getThumbFormat() const
	{
		return callMethod<jint>(
			"getThumbFormat",
			"()I"
		);
	}
	jint MtpObjectInfo::getThumbPixHeight() const
	{
		return callMethod<jint>(
			"getThumbPixHeight",
			"()I"
		);
	}
	jlong MtpObjectInfo::getThumbPixHeightLong() const
	{
		return callMethod<jlong>(
			"getThumbPixHeightLong",
			"()J"
		);
	}
	jint MtpObjectInfo::getThumbPixWidth() const
	{
		return callMethod<jint>(
			"getThumbPixWidth",
			"()I"
		);
	}
	jlong MtpObjectInfo::getThumbPixWidthLong() const
	{
		return callMethod<jlong>(
			"getThumbPixWidthLong",
			"()J"
		);
	}
} // namespace android::mtp

