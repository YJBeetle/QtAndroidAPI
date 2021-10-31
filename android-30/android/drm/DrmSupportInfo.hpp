#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmSupportInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmSupportInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmSupportInfo(QAndroidJniObject obj);
		
		// Constructors
		DrmSupportInfo();
		
		// Methods
		void addFileSuffix(jstring arg0);
		void addMimeType(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getDescriprition();
		jstring getDescription();
		__JniBaseClass getFileSuffixIterator();
		__JniBaseClass getMimeTypeIterator();
		jint hashCode();
		void setDescription(jstring arg0);
	};
} // namespace android::drm

