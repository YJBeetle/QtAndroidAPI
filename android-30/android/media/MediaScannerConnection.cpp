#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "./MediaScannerConnection.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaScannerConnection::MediaScannerConnection(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaScannerConnection::MediaScannerConnection(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.media.MediaScannerConnection",
			"(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void MediaScannerConnection::scanFile(android::content::Context arg0, jarray arg1, jarray arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"android.media.MediaScannerConnection",
			"scanFile",
			"(Landroid/content/Context;[Ljava/lang/String;[Ljava/lang/String;Landroid/media/MediaScannerConnection$OnScanCompletedListener;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void MediaScannerConnection::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MediaScannerConnection::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean MediaScannerConnection::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaScannerConnection::onServiceConnected(android::content::ComponentName arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onServiceConnected",
			"(Landroid/content/ComponentName;Landroid/os/IBinder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaScannerConnection::onServiceDisconnected(android::content::ComponentName arg0)
	{
		callMethod<void>(
			"onServiceDisconnected",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void MediaScannerConnection::scanFile(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"scanFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

