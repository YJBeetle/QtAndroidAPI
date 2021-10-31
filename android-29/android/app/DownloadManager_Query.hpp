#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class DownloadManager_Query : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadManager_Query(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadManager_Query(QAndroidJniObject obj);
		
		// Constructors
		DownloadManager_Query();
		
		// Methods
		QAndroidJniObject setFilterById(jlongArray arg0);
		QAndroidJniObject setFilterByStatus(jint arg0);
	};
} // namespace android::app

