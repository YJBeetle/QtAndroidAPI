#include "./DownloadManager_Query.hpp"

namespace android::app
{
	// Fields
	
	DownloadManager_Query::DownloadManager_Query(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DownloadManager_Query::DownloadManager_Query()
	{
		__thiz = QAndroidJniObject(
			"android.app.DownloadManager$Query",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DownloadManager_Query::setFilterById(jlongArray arg0)
	{
		return __thiz.callObjectMethod(
			"setFilterById",
			"([J)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Query::setFilterByStatus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFilterByStatus",
			"(I)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
} // namespace android::app

