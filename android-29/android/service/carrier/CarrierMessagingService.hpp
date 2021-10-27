#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::service::carrier
{
	class MessagePdu;
}

namespace __jni_impl::android::service::carrier
{
	class CarrierMessagingService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jint DOWNLOAD_STATUS_ERROR();
		static jint DOWNLOAD_STATUS_OK();
		static jint DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK();
		static jint RECEIVE_OPTIONS_DEFAULT();
		static jint RECEIVE_OPTIONS_DROP();
		static jint RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE();
		static jint SEND_FLAG_REQUEST_DELIVERY_STATUS();
		static jint SEND_STATUS_ERROR();
		static jint SEND_STATUS_OK();
		static jint SEND_STATUS_RETRY_ON_CARRIER_NETWORK();
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onDownloadMms(__jni_impl::android::net::Uri arg0, jint arg1, __jni_impl::android::net::Uri arg2, __jni_impl::__JniBaseClass arg3);
		void onFilterSms(__jni_impl::android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onFilterSms(__jni_impl::android::service::carrier::MessagePdu arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onReceiveTextSms(__jni_impl::android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onReceiveTextSms(__jni_impl::android::service::carrier::MessagePdu arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onSendDataSms(jbyteArray arg0, jint arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5);
		void onSendDataSms(jbyteArray arg0, jint arg1, const QString &arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5);
		void onSendMms(__jni_impl::android::net::Uri arg0, jint arg1, __jni_impl::android::net::Uri arg2, __jni_impl::__JniBaseClass arg3);
		void onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		void onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3);
		void onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onSendTextSms(jstring arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		void onSendTextSms(const QString &arg0, jint arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3);
		void onSendTextSms(jstring arg0, jint arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void onSendTextSms(const QString &arg0, jint arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
	};
} // namespace __jni_impl::android::service::carrier

#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./MessagePdu.hpp"

namespace __jni_impl::android::service::carrier
{
	// Fields
	jint CarrierMessagingService::DOWNLOAD_STATUS_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_ERROR"
		);
	}
	jint CarrierMessagingService::DOWNLOAD_STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_OK"
		);
	}
	jint CarrierMessagingService::DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DEFAULT"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_DROP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DROP"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE"
		);
	}
	jint CarrierMessagingService::SEND_FLAG_REQUEST_DELIVERY_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_FLAG_REQUEST_DELIVERY_STATUS"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_ERROR"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_OK"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	jstring CarrierMessagingService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.carrier.CarrierMessagingService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void CarrierMessagingService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CarrierMessagingService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void CarrierMessagingService::onDownloadMms(__jni_impl::android::net::Uri arg0, jint arg1, __jni_impl::android::net::Uri arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onDownloadMms",
			"(Landroid/net/Uri;ILandroid/net/Uri;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void CarrierMessagingService::onFilterSms(__jni_impl::android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onFilterSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onFilterSms(__jni_impl::android::service::carrier::MessagePdu arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onFilterSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onReceiveTextSms(__jni_impl::android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onReceiveTextSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onReceiveTextSms(__jni_impl::android::service::carrier::MessagePdu arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onReceiveTextSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendDataSms(jbyteArray arg0, jint arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendDataSms(jbyteArray arg0, jint arg1, const QString &arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendMms(__jni_impl::android::net::Uri arg0, jint arg1, __jni_impl::android::net::Uri arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onSendMms",
			"(Landroid/net/Uri;ILandroid/net/Uri;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(__jni_impl::__JniBaseClass arg0, jint arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendTextSms(jstring arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendTextSms(const QString &arg0, jint arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendTextSms(jstring arg0, jint arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void CarrierMessagingService::onSendTextSms(const QString &arg0, jint arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierMessagingService : public __jni_impl::android::service::carrier::CarrierMessagingService
	{
	public:
		CarrierMessagingService(QAndroidJniObject obj) { __thiz = obj; }
		CarrierMessagingService()
		{
			__constructor();
		}
	};
} // namespace android::service::carrier

