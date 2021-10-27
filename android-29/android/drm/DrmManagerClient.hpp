#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::drm
{
	class DrmConvertedStatus;
}
namespace __jni_impl::android::drm
{
	class DrmInfo;
}
namespace __jni_impl::android::drm
{
	class DrmInfoRequest;
}
namespace __jni_impl::android::drm
{
	class DrmRights;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::drm
{
	class DrmManagerClient : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_NONE();
		static jint ERROR_UNKNOWN();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject acquireDrmInfo(__jni_impl::android::drm::DrmInfoRequest arg0);
		jint acquireRights(__jni_impl::android::drm::DrmInfoRequest arg0);
		jboolean canHandle(__jni_impl::android::net::Uri arg0, jstring arg1);
		jboolean canHandle(__jni_impl::android::net::Uri arg0, const QString &arg1);
		jboolean canHandle(jstring arg0, jstring arg1);
		jboolean canHandle(const QString &arg0, const QString &arg1);
		jint checkRightsStatus(__jni_impl::android::net::Uri arg0);
		jint checkRightsStatus(jstring arg0);
		jint checkRightsStatus(const QString &arg0);
		jint checkRightsStatus(__jni_impl::android::net::Uri arg0, jint arg1);
		jint checkRightsStatus(jstring arg0, jint arg1);
		jint checkRightsStatus(const QString &arg0, jint arg1);
		void close();
		QAndroidJniObject closeConvertSession(jint arg0);
		QAndroidJniObject convertData(jint arg0, jbyteArray arg1);
		jarray getAvailableDrmEngines();
		QAndroidJniObject getConstraints(__jni_impl::android::net::Uri arg0, jint arg1);
		QAndroidJniObject getConstraints(jstring arg0, jint arg1);
		QAndroidJniObject getConstraints(const QString &arg0, jint arg1);
		jint getDrmObjectType(__jni_impl::android::net::Uri arg0, jstring arg1);
		jint getDrmObjectType(__jni_impl::android::net::Uri arg0, const QString &arg1);
		jint getDrmObjectType(jstring arg0, jstring arg1);
		jint getDrmObjectType(const QString &arg0, const QString &arg1);
		QAndroidJniObject getMetadata(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getMetadata(jstring arg0);
		QAndroidJniObject getMetadata(const QString &arg0);
		jstring getOriginalMimeType(__jni_impl::android::net::Uri arg0);
		jstring getOriginalMimeType(jstring arg0);
		jstring getOriginalMimeType(const QString &arg0);
		jint openConvertSession(jstring arg0);
		jint openConvertSession(const QString &arg0);
		jint processDrmInfo(__jni_impl::android::drm::DrmInfo arg0);
		void release();
		jint removeAllRights();
		jint removeRights(__jni_impl::android::net::Uri arg0);
		jint removeRights(jstring arg0);
		jint removeRights(const QString &arg0);
		jint saveRights(__jni_impl::android::drm::DrmRights arg0, jstring arg1, jstring arg2);
		jint saveRights(__jni_impl::android::drm::DrmRights arg0, const QString &arg1, const QString &arg2);
		void setOnErrorListener(__jni_impl::__JniBaseClass arg0);
		void setOnEventListener(__jni_impl::__JniBaseClass arg0);
		void setOnInfoListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::drm

#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "./DrmConvertedStatus.hpp"
#include "./DrmInfo.hpp"
#include "./DrmInfoRequest.hpp"
#include "./DrmRights.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::drm
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
	
	// Constructors
	void DrmManagerClient::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmManagerClient",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DrmManagerClient::acquireDrmInfo(__jni_impl::android::drm::DrmInfoRequest arg0)
	{
		return __thiz.callObjectMethod(
			"acquireDrmInfo",
			"(Landroid/drm/DrmInfoRequest;)Landroid/drm/DrmInfo;",
			arg0.__jniObject().object()
		);
	}
	jint DrmManagerClient::acquireRights(__jni_impl::android::drm::DrmInfoRequest arg0)
	{
		return __thiz.callMethod<jint>(
			"acquireRights",
			"(Landroid/drm/DrmInfoRequest;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean DrmManagerClient::canHandle(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canHandle",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean DrmManagerClient::canHandle(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canHandle",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	jboolean DrmManagerClient::canHandle(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canHandle",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint DrmManagerClient::checkRightsStatus(__jni_impl::android::net::Uri arg0)
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
	jint DrmManagerClient::checkRightsStatus(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint DrmManagerClient::checkRightsStatus(__jni_impl::android::net::Uri arg0, jint arg1)
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
	jint DrmManagerClient::checkRightsStatus(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	QAndroidJniObject DrmManagerClient::getConstraints(__jni_impl::android::net::Uri arg0, jint arg1)
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
	QAndroidJniObject DrmManagerClient::getConstraints(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getConstraints",
			"(Ljava/lang/String;I)Landroid/content/ContentValues;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getDrmObjectType",
			"(Landroid/net/Uri;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"getDrmObjectType",
			"(Landroid/net/Uri;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	jint DrmManagerClient::getDrmObjectType(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"getDrmObjectType",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DrmManagerClient::getMetadata(__jni_impl::android::net::Uri arg0)
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
	QAndroidJniObject DrmManagerClient::getMetadata(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getMetadata",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring DrmManagerClient::getOriginalMimeType(__jni_impl::android::net::Uri arg0)
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
	jstring DrmManagerClient::getOriginalMimeType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getOriginalMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint DrmManagerClient::openConvertSession(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"openConvertSession",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint DrmManagerClient::processDrmInfo(__jni_impl::android::drm::DrmInfo arg0)
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
	jint DrmManagerClient::removeRights(__jni_impl::android::net::Uri arg0)
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
	jint DrmManagerClient::removeRights(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"removeRights",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint DrmManagerClient::saveRights(__jni_impl::android::drm::DrmRights arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"saveRights",
			"(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint DrmManagerClient::saveRights(__jni_impl::android::drm::DrmRights arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"saveRights",
			"(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DrmManagerClient::setOnErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/drm/DrmManagerClient$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void DrmManagerClient::setOnEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Landroid/drm/DrmManagerClient$OnEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void DrmManagerClient::setOnInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/drm/DrmManagerClient$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmManagerClient : public __jni_impl::android::drm::DrmManagerClient
	{
	public:
		DrmManagerClient(QAndroidJniObject obj) { __thiz = obj; }
		DrmManagerClient(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::drm

