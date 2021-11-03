#include "../../JArray.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./MediaScannerConnection.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaScannerConnection::MediaScannerConnection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaScannerConnection::MediaScannerConnection(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.media.MediaScannerConnection",
			"(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void MediaScannerConnection::scanFile(android::content::Context arg0, JArray arg1, JArray arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"android.media.MediaScannerConnection",
			"scanFile",
			"(Landroid/content/Context;[Ljava/lang/String;[Ljava/lang/String;Landroid/media/MediaScannerConnection$OnScanCompletedListener;)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jarray>(),
			arg3.object()
		);
	}
	void MediaScannerConnection::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MediaScannerConnection::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean MediaScannerConnection::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaScannerConnection::onServiceConnected(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"onServiceConnected",
			"(Landroid/content/ComponentName;Landroid/os/IBinder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaScannerConnection::onServiceDisconnected(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"onServiceDisconnected",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void MediaScannerConnection::scanFile(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"scanFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

