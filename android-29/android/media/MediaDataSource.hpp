#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDataSource : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaDataSource(QAndroidJniObject obj);
		// Constructors
		MediaDataSource();
		
		// Methods
		jlong getSize();
		jint readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3);
	};
} // namespace android::media

