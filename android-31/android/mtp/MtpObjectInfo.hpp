#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::mtp
{
	class MtpObjectInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpObjectInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpObjectInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAssociationDesc() const;
		jint getAssociationType() const;
		jint getCompressedSize() const;
		jlong getCompressedSizeLong() const;
		jlong getDateCreated() const;
		jlong getDateModified() const;
		jint getFormat() const;
		jint getImagePixDepth() const;
		jlong getImagePixDepthLong() const;
		jint getImagePixHeight() const;
		jlong getImagePixHeightLong() const;
		jint getImagePixWidth() const;
		jlong getImagePixWidthLong() const;
		JString getKeywords() const;
		JString getName() const;
		jint getObjectHandle() const;
		jint getParent() const;
		jint getProtectionStatus() const;
		jint getSequenceNumber() const;
		jlong getSequenceNumberLong() const;
		jint getStorageId() const;
		jint getThumbCompressedSize() const;
		jlong getThumbCompressedSizeLong() const;
		jint getThumbFormat() const;
		jint getThumbPixHeight() const;
		jlong getThumbPixHeightLong() const;
		jint getThumbPixWidth() const;
		jlong getThumbPixWidthLong() const;
	};
} // namespace android::mtp

