#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class DownloadManager_Query : public __JniBaseClass
	{
	public:
		// Fields
		
		DownloadManager_Query(QAndroidJniObject obj);
		// Constructors
		DownloadManager_Query();
		
		// Methods
		QAndroidJniObject setFilterById(jlongArray arg0);
		QAndroidJniObject setFilterByStatus(jint arg0);
	};
} // namespace android::app

