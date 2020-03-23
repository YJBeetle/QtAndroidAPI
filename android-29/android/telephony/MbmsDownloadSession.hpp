#pragma once

#ifndef ANDROID_TELEPHONY_MBMSDOWNLOADSESSION
#define ANDROID_TELEPHONY_MBMSDOWNLOADSESSION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::telephony::mbms
{
	class MbmsDownloadSessionCallback;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::telephony::mbms
{
	class DownloadRequest;
}
namespace __jni_impl::android::telephony::mbms
{
	class DownloadStatusListener;
}
namespace __jni_impl::android::telephony::mbms
{
	class DownloadProgressListener;
}
namespace __jni_impl::android::telephony::mbms
{
	class FileInfo;
}

namespace __jni_impl::android::telephony
{
	class MbmsDownloadSession : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT_TOP_LEVEL_TEMP_DIRECTORY();
		static QAndroidJniObject EXTRA_MBMS_COMPLETED_FILE_URI();
		static QAndroidJniObject EXTRA_MBMS_DOWNLOAD_REQUEST();
		static QAndroidJniObject EXTRA_MBMS_DOWNLOAD_RESULT();
		static QAndroidJniObject EXTRA_MBMS_FILE_INFO();
		static jint RESULT_CANCELLED();
		static jint RESULT_DOWNLOAD_FAILURE();
		static jint RESULT_EXPIRED();
		static jint RESULT_FILE_ROOT_UNREACHABLE();
		static jint RESULT_IO_ERROR();
		static jint RESULT_OUT_OF_STORAGE();
		static jint RESULT_SERVICE_ID_NOT_DEFINED();
		static jint RESULT_SUCCESSFUL();
		static jint STATUS_ACTIVELY_DOWNLOADING();
		static jint STATUS_PENDING_DOWNLOAD();
		static jint STATUS_PENDING_DOWNLOAD_WINDOW();
		static jint STATUS_PENDING_REPAIR();
		static jint STATUS_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::MbmsDownloadSessionCallback arg2);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::telephony::mbms::MbmsDownloadSessionCallback arg3);
		void requestUpdateFileServices(__jni_impl::__JniBaseClass arg0);
		void setTempFileRootDirectory(__jni_impl::java::io::File arg0);
		QAndroidJniObject getTempFileRootDirectory();
		QAndroidJniObject listPendingDownloads();
		void addStatusListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::DownloadStatusListener arg2);
		void removeStatusListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::DownloadStatusListener arg1);
		void addProgressListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::DownloadProgressListener arg2);
		void removeProgressListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::DownloadProgressListener arg1);
		void cancelDownload(__jni_impl::android::telephony::mbms::DownloadRequest arg0);
		void requestDownloadState(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::FileInfo arg1);
		void resetDownloadKnowledge(__jni_impl::android::telephony::mbms::DownloadRequest arg0);
		void download(__jni_impl::android::telephony::mbms::DownloadRequest arg0);
	};
} // namespace __jni_impl::android::telephony

#include "../content/Context.hpp"
#include "mbms/MbmsDownloadSessionCallback.hpp"
#include "../../java/io/File.hpp"
#include "mbms/DownloadRequest.hpp"
#include "mbms/DownloadStatusListener.hpp"
#include "mbms/DownloadProgressListener.hpp"
#include "mbms/FileInfo.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject MbmsDownloadSession::DEFAULT_TOP_LEVEL_TEMP_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"DEFAULT_TOP_LEVEL_TEMP_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MbmsDownloadSession::EXTRA_MBMS_COMPLETED_FILE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_COMPLETED_FILE_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MbmsDownloadSession::EXTRA_MBMS_DOWNLOAD_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_DOWNLOAD_REQUEST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MbmsDownloadSession::EXTRA_MBMS_DOWNLOAD_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_DOWNLOAD_RESULT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MbmsDownloadSession::EXTRA_MBMS_FILE_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.MbmsDownloadSession",
			"EXTRA_MBMS_FILE_INFO",
			"Ljava/lang/String;");
	}
	jint MbmsDownloadSession::RESULT_CANCELLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_CANCELLED");
	}
	jint MbmsDownloadSession::RESULT_DOWNLOAD_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_DOWNLOAD_FAILURE");
	}
	jint MbmsDownloadSession::RESULT_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_EXPIRED");
	}
	jint MbmsDownloadSession::RESULT_FILE_ROOT_UNREACHABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_FILE_ROOT_UNREACHABLE");
	}
	jint MbmsDownloadSession::RESULT_IO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_IO_ERROR");
	}
	jint MbmsDownloadSession::RESULT_OUT_OF_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_OUT_OF_STORAGE");
	}
	jint MbmsDownloadSession::RESULT_SERVICE_ID_NOT_DEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_SERVICE_ID_NOT_DEFINED");
	}
	jint MbmsDownloadSession::RESULT_SUCCESSFUL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"RESULT_SUCCESSFUL");
	}
	jint MbmsDownloadSession::STATUS_ACTIVELY_DOWNLOADING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_ACTIVELY_DOWNLOADING");
	}
	jint MbmsDownloadSession::STATUS_PENDING_DOWNLOAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_DOWNLOAD");
	}
	jint MbmsDownloadSession::STATUS_PENDING_DOWNLOAD_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_DOWNLOAD_WINDOW");
	}
	jint MbmsDownloadSession::STATUS_PENDING_REPAIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_PENDING_REPAIR");
	}
	jint MbmsDownloadSession::STATUS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.MbmsDownloadSession",
			"STATUS_UNKNOWN");
	}
	
	// Constructors
	void MbmsDownloadSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.MbmsDownloadSession",
			"(V)V");
	}
	
	// Methods
	void MbmsDownloadSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject MbmsDownloadSession::create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::MbmsDownloadSessionCallback arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsDownloadSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsDownloadSessionCallback;)Landroid/telephony/MbmsDownloadSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject MbmsDownloadSession::create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::telephony::mbms::MbmsDownloadSessionCallback arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsDownloadSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;ILandroid/telephony/mbms/MbmsDownloadSessionCallback;)Landroid/telephony/MbmsDownloadSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	void MbmsDownloadSession::requestUpdateFileServices(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateFileServices",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void MbmsDownloadSession::setTempFileRootDirectory(__jni_impl::java::io::File arg0)
	{
		__thiz.callMethod<void>(
			"setTempFileRootDirectory",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MbmsDownloadSession::getTempFileRootDirectory()
	{
		return __thiz.callObjectMethod(
			"getTempFileRootDirectory",
			"()Ljava/io/File;");
	}
	QAndroidJniObject MbmsDownloadSession::listPendingDownloads()
	{
		return __thiz.callObjectMethod(
			"listPendingDownloads",
			"()Ljava/util/List;");
	}
	void MbmsDownloadSession::addStatusListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::DownloadStatusListener arg2)
	{
		__thiz.callMethod<void>(
			"addStatusListener",
			"(Landroid/telephony/mbms/DownloadRequest;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/DownloadStatusListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void MbmsDownloadSession::removeStatusListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::DownloadStatusListener arg1)
	{
		__thiz.callMethod<void>(
			"removeStatusListener",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/DownloadStatusListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MbmsDownloadSession::addProgressListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::DownloadProgressListener arg2)
	{
		__thiz.callMethod<void>(
			"addProgressListener",
			"(Landroid/telephony/mbms/DownloadRequest;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/DownloadProgressListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void MbmsDownloadSession::removeProgressListener(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::DownloadProgressListener arg1)
	{
		__thiz.callMethod<void>(
			"removeProgressListener",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/DownloadProgressListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MbmsDownloadSession::cancelDownload(__jni_impl::android::telephony::mbms::DownloadRequest arg0)
	{
		__thiz.callMethod<void>(
			"cancelDownload",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.__jniObject().object());
	}
	void MbmsDownloadSession::requestDownloadState(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::FileInfo arg1)
	{
		__thiz.callMethod<void>(
			"requestDownloadState",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MbmsDownloadSession::resetDownloadKnowledge(__jni_impl::android::telephony::mbms::DownloadRequest arg0)
	{
		__thiz.callMethod<void>(
			"resetDownloadKnowledge",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.__jniObject().object());
	}
	void MbmsDownloadSession::download(__jni_impl::android::telephony::mbms::DownloadRequest arg0)
	{
		__thiz.callMethod<void>(
			"download",
			"(Landroid/telephony/mbms/DownloadRequest;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class MbmsDownloadSession : public __jni_impl::android::telephony::MbmsDownloadSession
	{
	public:
		MbmsDownloadSession(QAndroidJniObject obj) { __thiz = obj; }
		MbmsDownloadSession()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_MBMSDOWNLOADSESSION

