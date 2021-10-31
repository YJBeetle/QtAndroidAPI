#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		DrmInfo(QAndroidJniObject obj);
		// Constructors
		DrmInfo(jint arg0, jbyteArray arg1, jstring arg2);
		DrmInfo(jint arg0, jstring arg1, jstring arg2);
		DrmInfo() = default;
		
		// Methods
		jobject get(jstring arg0);
		jbyteArray getData();
		jint getInfoType();
		jstring getMimeType();
		QAndroidJniObject iterator();
		QAndroidJniObject keyIterator();
		void put(jstring arg0, jobject arg1);
	};
} // namespace android::drm

