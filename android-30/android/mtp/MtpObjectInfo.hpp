#pragma once

#include "../../JString.hpp"
#include "./MtpObjectInfo.def.hpp"

namespace android::mtp
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint MtpObjectInfo::getAssociationDesc() const
	{
		return callMethod<jint>(
			"getAssociationDesc",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getAssociationType() const
	{
		return callMethod<jint>(
			"getAssociationType",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getCompressedSize() const
	{
		return callMethod<jint>(
			"getCompressedSize",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getCompressedSizeLong() const
	{
		return callMethod<jlong>(
			"getCompressedSizeLong",
			"()J"
		);
	}
	inline jlong MtpObjectInfo::getDateCreated() const
	{
		return callMethod<jlong>(
			"getDateCreated",
			"()J"
		);
	}
	inline jlong MtpObjectInfo::getDateModified() const
	{
		return callMethod<jlong>(
			"getDateModified",
			"()J"
		);
	}
	inline jint MtpObjectInfo::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getImagePixDepth() const
	{
		return callMethod<jint>(
			"getImagePixDepth",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getImagePixDepthLong() const
	{
		return callMethod<jlong>(
			"getImagePixDepthLong",
			"()J"
		);
	}
	inline jint MtpObjectInfo::getImagePixHeight() const
	{
		return callMethod<jint>(
			"getImagePixHeight",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getImagePixHeightLong() const
	{
		return callMethod<jlong>(
			"getImagePixHeightLong",
			"()J"
		);
	}
	inline jint MtpObjectInfo::getImagePixWidth() const
	{
		return callMethod<jint>(
			"getImagePixWidth",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getImagePixWidthLong() const
	{
		return callMethod<jlong>(
			"getImagePixWidthLong",
			"()J"
		);
	}
	inline JString MtpObjectInfo::getKeywords() const
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/lang/String;"
		);
	}
	inline JString MtpObjectInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MtpObjectInfo::getObjectHandle() const
	{
		return callMethod<jint>(
			"getObjectHandle",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getParent() const
	{
		return callMethod<jint>(
			"getParent",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getProtectionStatus() const
	{
		return callMethod<jint>(
			"getProtectionStatus",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getSequenceNumber() const
	{
		return callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getSequenceNumberLong() const
	{
		return callMethod<jlong>(
			"getSequenceNumberLong",
			"()J"
		);
	}
	inline jint MtpObjectInfo::getStorageId() const
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getThumbCompressedSize() const
	{
		return callMethod<jint>(
			"getThumbCompressedSize",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getThumbCompressedSizeLong() const
	{
		return callMethod<jlong>(
			"getThumbCompressedSizeLong",
			"()J"
		);
	}
	inline jint MtpObjectInfo::getThumbFormat() const
	{
		return callMethod<jint>(
			"getThumbFormat",
			"()I"
		);
	}
	inline jint MtpObjectInfo::getThumbPixHeight() const
	{
		return callMethod<jint>(
			"getThumbPixHeight",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getThumbPixHeightLong() const
	{
		return callMethod<jlong>(
			"getThumbPixHeightLong",
			"()J"
		);
	}
	inline jint MtpObjectInfo::getThumbPixWidth() const
	{
		return callMethod<jint>(
			"getThumbPixWidth",
			"()I"
		);
	}
	inline jlong MtpObjectInfo::getThumbPixWidthLong() const
	{
		return callMethod<jlong>(
			"getThumbPixWidthLong",
			"()J"
		);
	}
} // namespace android::mtp

// Base class headers

