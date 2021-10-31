#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "./DrmConvertedStatus.hpp"
#include "./DrmInfo.hpp"
#include "./DrmInfoRequest.hpp"
#include "./DrmRights.hpp"
#include "../net/Uri.hpp"
#include "./DrmManagerClient.hpp"

namespace android::drm
{
	// Fields
	jint DrmManagerClient::ERROR_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmManagerClient",
			"ERROR_NONE"
		);
	}
	jint DrmManagerClient::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmManagerClient",
			"ERROR_UNKNOWN"
		);
	}
	
	DrmManagerClient::DrmManagerClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmManagerClient::DrmManagerClient(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmManagerClient",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DrmManagerClient::acquireDrmInfo(android::drm::DrmInfoRequest arg0)
	{
		return __thiz.callObjectMethod(
			"acquireDrmInfo",
			"(Landroid/drm/DrmInfoRequest;)Landroid/drm/DrmInfo;",
			arg0.__jniObject().object()
		);
	}
	jint DrmManagerClient::acquireRights(android::drm::DrmInfoRequest arg0)
	{
		return __thiz.callMethod<jint>(
			"acquireRights",
			"(Landroid/drm/DrmInfoRequest;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean DrmManagerClient::canHandle(android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canHandle",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DrmManagerClient::canHandle(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canHandle",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	jint DrmManagerClient::checkRightsStatus(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DrmManagerClient::checkRightsStatus(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	void DrmManagerClient::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject DrmManagerClient::closeConvertSession(jint arg0)
	{
		return __thiz.callObjectMethod(
			"closeConvertSession",
			"(I)Landroid/drm/DrmConvertedStatus;",
			arg0
		);
	}
	QAndroidJniObject DrmManagerClient::convertData(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"convertData",
			"(I[B)Landroid/drm/DrmConvertedStatus;",
			arg0,
			arg1
		);
	}
	jarray DrmManagerClient::getAvailableDrmEngines()
	{
		return __thiz.callObjectMethod(
			"getAvailableDrmEngines",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject DrmManagerClient::getConstraints(android::net::Uri arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getConstraints",
			"(Landroid/net/Uri;I)Landroid/content/ContentValues;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DrmManagerClient::getConstraints(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getConstraints",
			"(Ljava/lang/String;I)Landroid/content/ContentValues;",
			arg0,
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getDrmObjectType",
			"(Landroid/net/Uri;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getDrmObjectType",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DrmManagerClient::getMetadata(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getMetadata",
			"(Landroid/net/Uri;)Landroid/content/ContentValues;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DrmManagerClient::getMetadata(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getMetadata",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0
		);
	}
	jstring DrmManagerClient::getOriginalMimeType(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getOriginalMimeType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DrmManagerClient::getOriginalMimeType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getOriginalMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint DrmManagerClient::openConvertSession(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"openConvertSession",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DrmManagerClient::processDrmInfo(android::drm::DrmInfo arg0)
	{
		return __thiz.callMethod<jint>(
			"processDrmInfo",
			"(Landroid/drm/DrmInfo;)I",
			arg0.__jniObject().object()
		);
	}
	void DrmManagerClient::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jint DrmManagerClient::removeAllRights()
	{
		return __thiz.callMethod<jint>(
			"removeAllRights",
			"()I"
		);
	}
	jint DrmManagerClient::removeRights(android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"removeRights",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	jint DrmManagerClient::removeRights(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"removeRights",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DrmManagerClient::saveRights(android::drm::DrmRights arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"saveRights",
			"(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void DrmManagerClient::setOnErrorListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/drm/DrmManagerClient$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void DrmManagerClient::setOnEventListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Landroid/drm/DrmManagerClient$OnEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void DrmManagerClient::setOnInfoListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/drm/DrmManagerClient$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::drm

