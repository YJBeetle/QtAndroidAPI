#include "./MtpObjectInfo.hpp"
#include "./MtpObjectInfo_Builder.hpp"

namespace android::mtp
{
	// Fields
	
	// QAndroidJniObject forward
	MtpObjectInfo_Builder::MtpObjectInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MtpObjectInfo_Builder::MtpObjectInfo_Builder()
		: __JniBaseClass(
			"android.mtp.MtpObjectInfo$Builder",
			"()V"
		) {}
	MtpObjectInfo_Builder::MtpObjectInfo_Builder(android::mtp::MtpObjectInfo arg0)
		: __JniBaseClass(
			"android.mtp.MtpObjectInfo$Builder",
			"(Landroid/mtp/MtpObjectInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	android::mtp::MtpObjectInfo MtpObjectInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/mtp/MtpObjectInfo;"
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setAssociationDesc(jint arg0)
	{
		return callObjectMethod(
			"setAssociationDesc",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setAssociationType(jint arg0)
	{
		return callObjectMethod(
			"setAssociationType",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setCompressedSize(jlong arg0)
	{
		return callObjectMethod(
			"setCompressedSize",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setDateCreated(jlong arg0)
	{
		return callObjectMethod(
			"setDateCreated",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setDateModified(jlong arg0)
	{
		return callObjectMethod(
			"setDateModified",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setFormat(jint arg0)
	{
		return callObjectMethod(
			"setFormat",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setImagePixDepth(jlong arg0)
	{
		return callObjectMethod(
			"setImagePixDepth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setImagePixHeight(jlong arg0)
	{
		return callObjectMethod(
			"setImagePixHeight",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setImagePixWidth(jlong arg0)
	{
		return callObjectMethod(
			"setImagePixWidth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setKeywords(jstring arg0)
	{
		return callObjectMethod(
			"setKeywords",
			"(Ljava/lang/String;)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setName(jstring arg0)
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setObjectHandle(jint arg0)
	{
		return callObjectMethod(
			"setObjectHandle",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setParent(jint arg0)
	{
		return callObjectMethod(
			"setParent",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setProtectionStatus(jint arg0)
	{
		return callObjectMethod(
			"setProtectionStatus",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setSequenceNumber(jlong arg0)
	{
		return callObjectMethod(
			"setSequenceNumber",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setStorageId(jint arg0)
	{
		return callObjectMethod(
			"setStorageId",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbCompressedSize(jlong arg0)
	{
		return callObjectMethod(
			"setThumbCompressedSize",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbFormat(jint arg0)
	{
		return callObjectMethod(
			"setThumbFormat",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbPixHeight(jlong arg0)
	{
		return callObjectMethod(
			"setThumbPixHeight",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbPixWidth(jlong arg0)
	{
		return callObjectMethod(
			"setThumbPixWidth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
} // namespace android::mtp

