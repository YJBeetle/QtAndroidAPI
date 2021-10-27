#include "../content/Context.hpp"
#include "./mbms/DownloadProgressListener.hpp"
#include "./mbms/DownloadRequest.hpp"
#include "./mbms/DownloadStatusListener.hpp"
#include "./mbms/FileInfo.hpp"
#include "./mbms/MbmsDownloadSessionCallback.hpp"
#include "../../java/io/File.hpp"
#include "./MbmsDownloadSession.hpp"

namespace android::telephony
{
	// Fields
	jstring MbmsDownloadSession::DEFAULT_TOP_LEVEL_TEMP_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"DEFAULT_TOP_LEVEL_TEMP_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MbmsDownloadSession::EXTRA_MBMS_COMPLETED_FILE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_COMPLETED_FILE_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MbmsDownloadSession::EXTRA_MBMS_DOWNLOAD_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_DOWNLOAD_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MbmsDownloadSession::EXTRA_MBMS_DOWNLOAD_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_DOWNLOAD_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MbmsDownloadSession::EXTRA_MBMS_FILE_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_FILE_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MbmsDownloadSession::RESULT_CANCELLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_CANCELLED"
		);
	}
	jint MbmsDownloadSession::RESULT_DOWNLOAD_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_DOWNLOAD_FAILURE"
		);
	}
	jint MbmsDownloadSession::RESULT_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_EXPIRED"
		);
	}
	jint MbmsDownloadSession::RESULT_FILE_ROOT_UNREACHABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_FILE_ROOT_UNREACHABLE"
		);
	}
	jint MbmsDownloadSession::RESULT_IO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_IO_ERROR"
		);
	}
	jint MbmsDownloadSession::RESULT_OUT_OF_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_OUT_OF_STORAGE"
		);
	}
	jint MbmsDownloadSession::RESULT_SERVICE_ID_NOT_DEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_SERVICE_ID_NOT_DEFINED"
		);
	}
	jint MbmsDownloadSession::RESULT_SUCCESSFUL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_SUCCESSFUL"
		);
	}
	jint MbmsDownloadSession::STATUS_ACTIVELY_DOWNLOADING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_ACTIVELY_DOWNLOADING"
		);
	}
	jint MbmsDownloadSession::STATUS_PENDING_DOWNLOAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_DOWNLOAD"
		);
	}
	jint MbmsDownloadSession::STATUS_PENDING_DOWNLOAD_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_DOWNLOAD_WINDOW"
		);
	}
	jint MbmsDownloadSession::STATUS_PENDING_REPAIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_REPAIR"
		);
	}
	jint MbmsDownloadSession::STATUS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_UNKNOWN"
		);
	}
	
	MbmsDownloadSession::MbmsDownloadSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MbmsDownloadSession::create(android::content::Context arg0, __JniBaseClass arg1, android::telephony::mbms::MbmsDownloadSessionCallback arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsDownloadSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsDownloadSessionCallback;)Landroid/telephony/MbmsDownloadSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MbmsDownloadSession::create(android::content::Context arg0, __JniBaseClass arg1, jint arg2, android::telephony::mbms::MbmsDownloadSessionCallback arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsDownloadSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;ILandroid/telephony/mbms/MbmsDownloadSessionCallback;)Landroid/telephony/MbmsDownloadSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void MbmsDownloadSession::addProgressListener(android::telephony::mbms::DownloadRequest arg0, __JniBaseClass arg1, android::telephony::mbms::DownloadProgressListener arg2)
	{
		__thiz.callMethod<void>(
			"addProgressListener",
			"(Landroid/telephony/mbms/DownloadRequest;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/DownloadProgressListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MbmsDownloadSession::addStatusListener(android::telephony::mbms::DownloadRequest arg0, __JniBaseClass arg1, android::telephony::mbms::DownloadStatusListener arg2)
	{
		__thiz.callMethod<void>(
			"addStatusListener",
			"(Landroid/telephony/mbms/DownloadRequest;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/DownloadStatusListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MbmsDownloadSession::cancelDownload(android::telephony::mbms::DownloadRequest arg0)
	{
		__thiz.callMethod<void>(
			"cancelDownload",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void MbmsDownloadSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MbmsDownloadSession::download(android::telephony::mbms::DownloadRequest arg0)
	{
		__thiz.callMethod<void>(
			"download",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MbmsDownloadSession::getTempFileRootDirectory()
	{
		return __thiz.callObjectMethod(
			"getTempFileRootDirectory",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject MbmsDownloadSession::listPendingDownloads()
	{
		return __thiz.callObjectMethod(
			"listPendingDownloads",
			"()Ljava/util/List;"
		);
	}
	void MbmsDownloadSession::removeProgressListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadProgressListener arg1)
	{
		__thiz.callMethod<void>(
			"removeProgressListener",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/DownloadProgressListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MbmsDownloadSession::removeStatusListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadStatusListener arg1)
	{
		__thiz.callMethod<void>(
			"removeStatusListener",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/DownloadStatusListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MbmsDownloadSession::requestDownloadState(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1)
	{
		__thiz.callMethod<void>(
			"requestDownloadState",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MbmsDownloadSession::requestUpdateFileServices(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateFileServices",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void MbmsDownloadSession::resetDownloadKnowledge(android::telephony::mbms::DownloadRequest arg0)
	{
		__thiz.callMethod<void>(
			"resetDownloadKnowledge",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void MbmsDownloadSession::setTempFileRootDirectory(java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setTempFileRootDirectory",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telephony

