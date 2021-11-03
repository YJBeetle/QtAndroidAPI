#include "../../JLongArray.hpp"
#include "./DownloadManager_Query.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	DownloadManager_Query::DownloadManager_Query(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DownloadManager_Query::DownloadManager_Query()
		: JObject(
			"android.app.DownloadManager$Query",
			"()V"
		) {}
	
	// Methods
	android::app::DownloadManager_Query DownloadManager_Query::setFilterById(JLongArray arg0)
	{
		return callObjectMethod(
			"setFilterById",
			"([J)Landroid/app/DownloadManager$Query;",
			arg0.object<jlongArray>()
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

