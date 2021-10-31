#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::app
{
	class DownloadManager_Request : public __JniBaseClass
	{
	public:
		// Fields
		static jint NETWORK_MOBILE();
		static jint NETWORK_WIFI();
		static jint VISIBILITY_HIDDEN();
		static jint VISIBILITY_VISIBLE();
		static jint VISIBILITY_VISIBLE_NOTIFY_COMPLETED();
		static jint VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadManager_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadManager_Request(QAndroidJniObject obj);
		
		// Constructors
		DownloadManager_Request(android::net::Uri arg0);
		
		// Methods
		android::app::DownloadManager_Request addRequestHeader(jstring arg0, jstring arg1);
		void allowScanningByMediaScanner();
		android::app::DownloadManager_Request setAllowedNetworkTypes(jint arg0);
		android::app::DownloadManager_Request setAllowedOverMetered(jboolean arg0);
		android::app::DownloadManager_Request setAllowedOverRoaming(jboolean arg0);
		android::app::DownloadManager_Request setDescription(jstring arg0);
		android::app::DownloadManager_Request setDestinationInExternalFilesDir(android::content::Context arg0, jstring arg1, jstring arg2);
		android::app::DownloadManager_Request setDestinationInExternalPublicDir(jstring arg0, jstring arg1);
		android::app::DownloadManager_Request setDestinationUri(android::net::Uri arg0);
		android::app::DownloadManager_Request setMimeType(jstring arg0);
		android::app::DownloadManager_Request setNotificationVisibility(jint arg0);
		android::app::DownloadManager_Request setRequiresCharging(jboolean arg0);
		android::app::DownloadManager_Request setRequiresDeviceIdle(jboolean arg0);
		android::app::DownloadManager_Request setShowRunningNotification(jboolean arg0);
		android::app::DownloadManager_Request setTitle(jstring arg0);
		android::app::DownloadManager_Request setVisibleInDownloadsUi(jboolean arg0);
	};
} // namespace android::app

