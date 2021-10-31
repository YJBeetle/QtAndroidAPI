#include "./DownloadManager_Query.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	DownloadManager_Query::DownloadManager_Query(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DownloadManager_Query::DownloadManager_Query()
		: __JniBaseClass(
			"android.app.DownloadManager$Query",
			"()V"
		) {}
	
	// Methods
	android::app::DownloadManager_Query DownloadManager_Query::setFilterById(jlongArray arg0)
	{
		return callObjectMethod(
			"setFilterById",
			"([J)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
	android::app::DownloadManager_Query DownloadManager_Query::setFilterByStatus(jint arg0)
	{
		return callObjectMethod(
			"setFilterByStatus",
			"(I)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
} // namespace android::app

