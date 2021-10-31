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
		QAndroidJniObject addRequestHeader(jstring arg0, jstring arg1);
		void allowScanningByMediaScanner();
		QAndroidJniObject setAllowedNetworkTypes(jint arg0);
		QAndroidJniObject setAllowedOverMetered(jboolean arg0);
		QAndroidJniObject setAllowedOverRoaming(jboolean arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDestinationInExternalFilesDir(android::content::Context arg0, jstring arg1, jstring arg2);
		QAndroidJniObject setDestinationInExternalPublicDir(jstring arg0, jstring arg1);
		QAndroidJniObject setDestinationUri(android::net::Uri arg0);
		QAndroidJniObject setMimeType(jstring arg0);
		QAndroidJniObject setNotificationVisibility(jint arg0);
		QAndroidJniObject setRequiresCharging(jboolean arg0);
		QAndroidJniObject setRequiresDeviceIdle(jboolean arg0);
		QAndroidJniObject setShowRunningNotification(jboolean arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setVisibleInDownloadsUi(jboolean arg0);
	};
} // namespace android::app

