#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::mtp
{
	class MtpObjectInfo;
}

namespace android::mtp
{
	class MtpObjectInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpObjectInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MtpObjectInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		MtpObjectInfo_Builder();
		MtpObjectInfo_Builder(android::mtp::MtpObjectInfo arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAssociationDesc(jint arg0);
		QAndroidJniObject setAssociationType(jint arg0);
		QAndroidJniObject setCompressedSize(jlong arg0);
		QAndroidJniObject setDateCreated(jlong arg0);
		QAndroidJniObject setDateModified(jlong arg0);
		QAndroidJniObject setFormat(jint arg0);
		QAndroidJniObject setImagePixDepth(jlong arg0);
		QAndroidJniObject setImagePixHeight(jlong arg0);
		QAndroidJniObject setImagePixWidth(jlong arg0);
		QAndroidJniObject setKeywords(jstring arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setObjectHandle(jint arg0);
		QAndroidJniObject setParent(jint arg0);
		QAndroidJniObject setProtectionStatus(jint arg0);
		QAndroidJniObject setSequenceNumber(jlong arg0);
		QAndroidJniObject setStorageId(jint arg0);
		QAndroidJniObject setThumbCompressedSize(jlong arg0);
		QAndroidJniObject setThumbFormat(jint arg0);
		QAndroidJniObject setThumbPixHeight(jlong arg0);
		QAndroidJniObject setThumbPixWidth(jlong arg0);
	};
} // namespace android::mtp

