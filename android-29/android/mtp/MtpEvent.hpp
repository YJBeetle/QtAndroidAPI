#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::mtp
{
	class MtpEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jint EVENT_CANCEL_TRANSACTION();
		static jint EVENT_CAPTURE_COMPLETE();
		static jint EVENT_DEVICE_INFO_CHANGED();
		static jint EVENT_DEVICE_PROP_CHANGED();
		static jint EVENT_DEVICE_RESET();
		static jint EVENT_OBJECT_ADDED();
		static jint EVENT_OBJECT_INFO_CHANGED();
		static jint EVENT_OBJECT_PROP_CHANGED();
		static jint EVENT_OBJECT_PROP_DESC_CHANGED();
		static jint EVENT_OBJECT_REFERENCES_CHANGED();
		static jint EVENT_OBJECT_REMOVED();
		static jint EVENT_REQUEST_OBJECT_TRANSFER();
		static jint EVENT_STORAGE_INFO_CHANGED();
		static jint EVENT_STORE_ADDED();
		static jint EVENT_STORE_FULL();
		static jint EVENT_STORE_REMOVED();
		static jint EVENT_UNDEFINED();
		static jint EVENT_UNREPORTED_STATUS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getDevicePropCode();
		jint getEventCode();
		jint getObjectFormatCode();
		jint getObjectHandle();
		jint getObjectPropCode();
		jint getParameter1();
		jint getParameter2();
		jint getParameter3();
		jint getStorageId();
		jint getTransactionId();
	};
} // namespace __jni_impl::android::mtp


namespace __jni_impl::android::mtp
{
	// Fields
	jint MtpEvent::EVENT_CANCEL_TRANSACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_CANCEL_TRANSACTION"
		);
	}
	jint MtpEvent::EVENT_CAPTURE_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_CAPTURE_COMPLETE"
		);
	}
	jint MtpEvent::EVENT_DEVICE_INFO_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_INFO_CHANGED"
		);
	}
	jint MtpEvent::EVENT_DEVICE_PROP_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_PROP_CHANGED"
		);
	}
	jint MtpEvent::EVENT_DEVICE_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_RESET"
		);
	}
	jint MtpEvent::EVENT_OBJECT_ADDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_ADDED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_INFO_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_INFO_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_PROP_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_PROP_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_PROP_DESC_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_PROP_DESC_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_REFERENCES_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_REFERENCES_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_REMOVED"
		);
	}
	jint MtpEvent::EVENT_REQUEST_OBJECT_TRANSFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_REQUEST_OBJECT_TRANSFER"
		);
	}
	jint MtpEvent::EVENT_STORAGE_INFO_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORAGE_INFO_CHANGED"
		);
	}
	jint MtpEvent::EVENT_STORE_ADDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_ADDED"
		);
	}
	jint MtpEvent::EVENT_STORE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_FULL"
		);
	}
	jint MtpEvent::EVENT_STORE_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_REMOVED"
		);
	}
	jint MtpEvent::EVENT_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_UNDEFINED"
		);
	}
	jint MtpEvent::EVENT_UNREPORTED_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_UNREPORTED_STATUS"
		);
	}
	
	// Constructors
	void MtpEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpEvent",
			"(V)V");
	}
	
	// Methods
	jint MtpEvent::getDevicePropCode()
	{
		return __thiz.callMethod<jint>(
			"getDevicePropCode",
			"()I"
		);
	}
	jint MtpEvent::getEventCode()
	{
		return __thiz.callMethod<jint>(
			"getEventCode",
			"()I"
		);
	}
	jint MtpEvent::getObjectFormatCode()
	{
		return __thiz.callMethod<jint>(
			"getObjectFormatCode",
			"()I"
		);
	}
	jint MtpEvent::getObjectHandle()
	{
		return __thiz.callMethod<jint>(
			"getObjectHandle",
			"()I"
		);
	}
	jint MtpEvent::getObjectPropCode()
	{
		return __thiz.callMethod<jint>(
			"getObjectPropCode",
			"()I"
		);
	}
	jint MtpEvent::getParameter1()
	{
		return __thiz.callMethod<jint>(
			"getParameter1",
			"()I"
		);
	}
	jint MtpEvent::getParameter2()
	{
		return __thiz.callMethod<jint>(
			"getParameter2",
			"()I"
		);
	}
	jint MtpEvent::getParameter3()
	{
		return __thiz.callMethod<jint>(
			"getParameter3",
			"()I"
		);
	}
	jint MtpEvent::getStorageId()
	{
		return __thiz.callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	jint MtpEvent::getTransactionId()
	{
		return __thiz.callMethod<jint>(
			"getTransactionId",
			"()I"
		);
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpEvent : public __jni_impl::android::mtp::MtpEvent
	{
	public:
		MtpEvent(QAndroidJniObject obj) { __thiz = obj; }
		MtpEvent()
		{
			__constructor();
		}
	};
} // namespace android::mtp

