#include "../content/Context.hpp"
#include "./mbms/DownloadProgressListener.hpp"
#include "./mbms/DownloadRequest.hpp"
#include "./mbms/DownloadStatusListener.hpp"
#include "./mbms/FileInfo.hpp"
#include "./mbms/MbmsDownloadSessionCallback.hpp"
#include "../../java/io/File.hpp"
#include "../../JString.hpp"
#include "./MbmsDownloadSession.hpp"

namespace android::telephony
{
	// Fields
	JString MbmsDownloadSession::DEFAULT_TOP_LEVEL_TEMP_DIRECTORY()
	{
		return getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"DEFAULT_TOP_LEVEL_TEMP_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString MbmsDownloadSession::EXTRA_MBMS_COMPLETED_FILE_URI()
	{
		return getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_COMPLETED_FILE_URI",
			"Ljava/lang/String;"
		);
	}
	JString MbmsDownloadSession::EXTRA_MBMS_DOWNLOAD_REQUEST()
	{
		return getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_DOWNLOAD_REQUEST",
			"Ljava/lang/String;"
		);
	}
	JString MbmsDownloadSession::EXTRA_MBMS_DOWNLOAD_RESULT()
	{
		return getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_DOWNLOAD_RESULT",
			"Ljava/lang/String;"
		);
	}
	JString MbmsDownloadSession::EXTRA_MBMS_FILE_INFO()
	{
		return getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_FILE_INFO",
			"Ljava/lang/String;"
		);
	}
	jint MbmsDownloadSession::RESULT_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_CANCELLED"
		);
	}
	jint MbmsDownloadSession::RESULT_DOWNLOAD_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_DOWNLOAD_FAILURE"
		);
	}
	jint MbmsDownloadSession::RESULT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_EXPIRED"
		);
	}
	jint MbmsDownloadSession::RESULT_FILE_ROOT_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_FILE_ROOT_UNREACHABLE"
		);
	}
	jint MbmsDownloadSession::RESULT_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_IO_ERROR"
		);
	}
	jint MbmsDownloadSession::RESULT_OUT_OF_STORAGE()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_OUT_OF_STORAGE"
		);
	}
	jint MbmsDownloadSession::RESULT_SERVICE_ID_NOT_DEFINED()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_SERVICE_ID_NOT_DEFINED"
		);
	}
	jint MbmsDownloadSession::RESULT_SUCCESSFUL()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_SUCCESSFUL"
		);
	}
	jint MbmsDownloadSession::STATUS_ACTIVELY_DOWNLOADING()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_ACTIVELY_DOWNLOADING"
		);
	}
	jint MbmsDownloadSession::STATUS_PENDING_DOWNLOAD()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_DOWNLOAD"
		);
	}
	jint MbmsDownloadSession::STATUS_PENDING_DOWNLOAD_WINDOW()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_DOWNLOAD_WINDOW"
		);
	}
	jint MbmsDownloadSession::STATUS_PENDING_REPAIR()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_REPAIR"
		);
	}
	jint MbmsDownloadSession::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	android::telephony::MbmsDownloadSession MbmsDownloadSession::create(android::content::Context arg0, JObject arg1, android::telephony::mbms::MbmsDownloadSessionCallback arg2)
	{
		return callStaticObjectMethod(
			"android.telephony.MbmsDownloadSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsDownloadSessionCallback;)Landroid/telephony/MbmsDownloadSession;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::telephony::MbmsDownloadSession MbmsDownloadSession::create(android::content::Context arg0, JObject arg1, jint arg2, android::telephony::mbms::MbmsDownloadSessionCallback arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.MbmsDownloadSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;ILandroid/telephony/mbms/MbmsDownloadSessionCallback;)Landroid/telephony/MbmsDownloadSession;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void MbmsDownloadSession::addProgressListener(android::telephony::mbms::DownloadRequest arg0, JObject arg1, android::telephony::mbms::DownloadProgressListener arg2) const
	{
		callMethod<void>(
			"addProgressListener",
			"(Landroid/telephony/mbms/DownloadRequest;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/DownloadProgressListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MbmsDownloadSession::addStatusListener(android::telephony::mbms::DownloadRequest arg0, JObject arg1, android::telephony::mbms::DownloadStatusListener arg2) const
	{
		callMethod<void>(
			"addStatusListener",
			"(Landroid/telephony/mbms/DownloadRequest;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/DownloadStatusListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MbmsDownloadSession::cancelDownload(android::telephony::mbms::DownloadRequest arg0) const
	{
		callMethod<void>(
			"cancelDownload",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.object()
		);
	}
	void MbmsDownloadSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MbmsDownloadSession::download(android::telephony::mbms::DownloadRequest arg0) const
	{
		callMethod<void>(
			"download",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.object()
		);
	}
	java::io::File MbmsDownloadSession::getTempFileRootDirectory() const
	{
		return callObjectMethod(
			"getTempFileRootDirectory",
			"()Ljava/io/File;"
		);
	}
	JObject MbmsDownloadSession::listPendingDownloads() const
	{
		return callObjectMethod(
			"listPendingDownloads",
			"()Ljava/util/List;"
		);
	}
	void MbmsDownloadSession::removeProgressListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadProgressListener arg1) const
	{
		callMethod<void>(
			"removeProgressListener",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/DownloadProgressListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MbmsDownloadSession::removeStatusListener(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::DownloadStatusListener arg1) const
	{
		callMethod<void>(
			"removeStatusListener",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/DownloadStatusListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MbmsDownloadSession::requestDownloadState(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1) const
	{
		callMethod<void>(
			"requestDownloadState",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MbmsDownloadSession::requestUpdateFileServices(JObject arg0) const
	{
		callMethod<void>(
			"requestUpdateFileServices",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MbmsDownloadSession::resetDownloadKnowledge(android::telephony::mbms::DownloadRequest arg0) const
	{
		callMethod<void>(
			"resetDownloadKnowledge",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.object()
		);
	}
	void MbmsDownloadSession::setTempFileRootDirectory(java::io::File arg0) const
	{
		callMethod<void>(
			"setTempFileRootDirectory",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

