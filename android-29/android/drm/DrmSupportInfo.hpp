#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmSupportInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		DrmSupportInfo(QAndroidJniObject obj);
		// Constructors
		DrmSupportInfo();
		
		// Methods
		void addFileSuffix(jstring arg0);
		void addMimeType(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getDescriprition();
		jstring getDescription();
		QAndroidJniObject getFileSuffixIterator();
		QAndroidJniObject getMimeTypeIterator();
		jint hashCode();
		void setDescription(jstring arg0);
	};
} // namespace android::drm

