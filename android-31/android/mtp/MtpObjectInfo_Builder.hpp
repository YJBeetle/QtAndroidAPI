#pragma once

#include "../../JObject.hpp"

namespace android::mtp
{
	class MtpObjectInfo;
}
class JString;

namespace android::mtp
{
	class MtpObjectInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpObjectInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpObjectInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MtpObjectInfo_Builder();
		MtpObjectInfo_Builder(android::mtp::MtpObjectInfo arg0);
		
		// Methods
		android::mtp::MtpObjectInfo build() const;
		android::mtp::MtpObjectInfo_Builder setAssociationDesc(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setAssociationType(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setCompressedSize(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setDateCreated(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setDateModified(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setFormat(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setImagePixDepth(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setImagePixHeight(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setImagePixWidth(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setKeywords(JString arg0) const;
		android::mtp::MtpObjectInfo_Builder setName(JString arg0) const;
		android::mtp::MtpObjectInfo_Builder setObjectHandle(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setParent(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setProtectionStatus(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setSequenceNumber(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setStorageId(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setThumbCompressedSize(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setThumbFormat(jint arg0) const;
		android::mtp::MtpObjectInfo_Builder setThumbPixHeight(jlong arg0) const;
		android::mtp::MtpObjectInfo_Builder setThumbPixWidth(jlong arg0) const;
	};
} // namespace android::mtp

