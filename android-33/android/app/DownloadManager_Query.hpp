#pragma once

#include "../../JLongArray.hpp"
#include "./DownloadManager_Query.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline DownloadManager_Query::DownloadManager_Query()
		: JObject(
			"android.app.DownloadManager$Query",
			"()V"
		) {}
	
	// Methods
	inline android::app::DownloadManager_Query DownloadManager_Query::setFilterById(JLongArray arg0) const
	{
		return callObjectMethod(
			"setFilterById",
			"([J)Landroid/app/DownloadManager$Query;",
			arg0.object<jlongArray>()
		);
	}
	inline android::app::DownloadManager_Query DownloadManager_Query::setFilterByStatus(jint arg0) const
	{
		return callObjectMethod(
			"setFilterByStatus",
			"(I)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
