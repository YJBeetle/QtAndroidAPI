#include "./MtpObjectInfo.hpp"
#include "./MtpObjectInfo_Builder.hpp"

namespace android::mtp
{
	// Fields
	
	MtpObjectInfo_Builder::MtpObjectInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MtpObjectInfo_Builder::MtpObjectInfo_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpObjectInfo$Builder",
			"()V"
		);
	}
	MtpObjectInfo_Builder::MtpObjectInfo_Builder(android::mtp::MtpObjectInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpObjectInfo$Builder",
			"(Landroid/mtp/MtpObjectInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MtpObjectInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/mtp/MtpObjectInfo;"
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setAssociationDesc(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAssociationDesc",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setAssociationType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAssociationType",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setCompressedSize(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setCompressedSize",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setDateCreated(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDateCreated",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setDateModified(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDateModified",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFormat",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setImagePixDepth(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setImagePixDepth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setImagePixHeight(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setImagePixHeight",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setImagePixWidth(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setImagePixWidth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setKeywords(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setKeywords",
			"(Ljava/lang/String;)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setObjectHandle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setObjectHandle",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setParent(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setParent",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setProtectionStatus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setProtectionStatus",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setSequenceNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setSequenceNumber",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setStorageId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setStorageId",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setThumbCompressedSize(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbCompressedSize",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setThumbFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbFormat",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setThumbPixHeight(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbPixHeight",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject MtpObjectInfo_Builder::setThumbPixWidth(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbPixWidth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
} // namespace android::mtp

