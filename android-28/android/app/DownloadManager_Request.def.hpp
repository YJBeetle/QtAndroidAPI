#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;
class JString;

namespace android::app
{
	class DownloadManager_Request : public JObject
	{
	public:
		// Fields
		static jint NETWORK_MOBILE();
		static jint NETWORK_WIFI();
		static jint VISIBILITY_HIDDEN();
		static jint VISIBILITY_VISIBLE();
		static jint VISIBILITY_VISIBLE_NOTIFY_COMPLETED();
		static jint VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION();
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadManager_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadManager_Request(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DownloadManager_Request(android::net::Uri arg0);
		
		// Methods
		android::app::DownloadManager_Request addRequestHeader(JString arg0, JString arg1) const;
		void allowScanningByMediaScanner() const;
		android::app::DownloadManager_Request setAllowedNetworkTypes(jint arg0) const;
		android::app::DownloadManager_Request setAllowedOverMetered(jboolean arg0) const;
		android::app::DownloadManager_Request setAllowedOverRoaming(jboolean arg0) const;
		android::app::DownloadManager_Request setDescription(JString arg0) const;
		android::app::DownloadManager_Request setDestinationInExternalFilesDir(android::content::Context arg0, JString arg1, JString arg2) const;
		android::app::DownloadManager_Request setDestinationInExternalPublicDir(JString arg0, JString arg1) const;
		android::app::DownloadManager_Request setDestinationUri(android::net::Uri arg0) const;
		android::app::DownloadManager_Request setMimeType(JString arg0) const;
		android::app::DownloadManager_Request setNotificationVisibility(jint arg0) const;
		android::app::DownloadManager_Request setRequiresCharging(jboolean arg0) const;
		android::app::DownloadManager_Request setRequiresDeviceIdle(jboolean arg0) const;
		android::app::DownloadManager_Request setShowRunningNotification(jboolean arg0) const;
		android::app::DownloadManager_Request setTitle(JString arg0) const;
		android::app::DownloadManager_Request setVisibleInDownloadsUi(jboolean arg0) const;
	};
} // namespace android::app

