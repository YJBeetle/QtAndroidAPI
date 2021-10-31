#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "./MediaScannerConnection.hpp"

namespace android::media
{
	// Fields
	
	MediaScannerConnection::MediaScannerConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaScannerConnection::MediaScannerConnection(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaScannerConnection",
			"(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void MediaScannerConnection::scanFile(android::content::Context arg0, jarray arg1, jarray arg2, __JniBaseClass arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.MediaScannerConnection",
			"scanFile",
			"(Landroid/content/Context;[Ljava/lang/String;[Ljava/lang/String;Landroid/media/MediaScannerConnection$OnScanCompletedListener;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void MediaScannerConnection::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MediaScannerConnection::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean MediaScannerConnection::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaScannerConnection::onServiceConnected(android::content::ComponentName arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onServiceConnected",
			"(Landroid/content/ComponentName;Landroid/os/IBinder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaScannerConnection::onServiceDisconnected(android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"onServiceDisconnected",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaScannerConnection::scanFile(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"scanFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

