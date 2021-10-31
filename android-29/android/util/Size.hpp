#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Size : public __JniBaseClass
	{
	public:
		// Fields
		
		Size(QAndroidJniObject obj);
		// Constructors
		Size(jint arg0, jint arg1);
		Size() = default;
		
		// Methods
		static QAndroidJniObject parseSize(jstring arg0);
		jboolean equals(jobject arg0);
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

