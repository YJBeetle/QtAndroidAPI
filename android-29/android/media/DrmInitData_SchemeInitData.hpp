#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class DrmInitData_SchemeInitData : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray data();
		jstring mimeType();
		
		DrmInitData_SchemeInitData(QAndroidJniObject obj);
		// Constructors
		DrmInitData_SchemeInitData() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::media

