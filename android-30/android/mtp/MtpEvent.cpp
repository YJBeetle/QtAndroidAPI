#include "./MtpEvent.hpp"

namespace android::mtp
{
	// Fields
	jint MtpEvent::EVENT_CANCEL_TRANSACTION()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_CANCEL_TRANSACTION"
		);
	}
	jint MtpEvent::EVENT_CAPTURE_COMPLETE()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_CAPTURE_COMPLETE"
		);
	}
	jint MtpEvent::EVENT_DEVICE_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_INFO_CHANGED"
		);
	}
	jint MtpEvent::EVENT_DEVICE_PROP_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_PROP_CHANGED"
		);
	}
	jint MtpEvent::EVENT_DEVICE_RESET()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_RESET"
		);
	}
	jint MtpEvent::EVENT_OBJECT_ADDED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_ADDED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_INFO_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_PROP_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_PROP_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_PROP_DESC_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_PROP_DESC_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_REFERENCES_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_REFERENCES_CHANGED"
		);
	}
	jint MtpEvent::EVENT_OBJECT_REMOVED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_REMOVED"
		);
	}
	jint MtpEvent::EVENT_REQUEST_OBJECT_TRANSFER()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_REQUEST_OBJECT_TRANSFER"
		);
	}
	jint MtpEvent::EVENT_STORAGE_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORAGE_INFO_CHANGED"
		);
	}
	jint MtpEvent::EVENT_STORE_ADDED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_ADDED"
		);
	}
	jint MtpEvent::EVENT_STORE_FULL()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_FULL"
		);
	}
	jint MtpEvent::EVENT_STORE_REMOVED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_REMOVED"
		);
	}
	jint MtpEvent::EVENT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_UNDEFINED"
		);
	}
	jint MtpEvent::EVENT_UNREPORTED_STATUS()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_UNREPORTED_STATUS"
		);
	}
	
	// QAndroidJniObject forward
	MtpEvent::MtpEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MtpEvent::getDevicePropCode() const
	{
		return callMethod<jint>(
			"getDevicePropCode",
			"()I"
		);
	}
	jint MtpEvent::getEventCode() const
	{
		return callMethod<jint>(
			"getEventCode",
			"()I"
		);
	}
	jint MtpEvent::getObjectFormatCode() const
	{
		return callMethod<jint>(
			"getObjectFormatCode",
			"()I"
		);
	}
	jint MtpEvent::getObjectHandle() const
	{
		return callMethod<jint>(
			"getObjectHandle",
			"()I"
		);
	}
	jint MtpEvent::getObjectPropCode() const
	{
		return callMethod<jint>(
			"getObjectPropCode",
			"()I"
		);
	}
	jint MtpEvent::getParameter1() const
	{
		return callMethod<jint>(
			"getParameter1",
			"()I"
		);
	}
	jint MtpEvent::getParameter2() const
	{
		return callMethod<jint>(
			"getParameter2",
			"()I"
		);
	}
	jint MtpEvent::getParameter3() const
	{
		return callMethod<jint>(
			"getParameter3",
			"()I"
		);
	}
	jint MtpEvent::getStorageId() const
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	jint MtpEvent::getTransactionId() const
	{
		return callMethod<jint>(
			"getTransactionId",
			"()I"
		);
	}
} // namespace android::mtp

