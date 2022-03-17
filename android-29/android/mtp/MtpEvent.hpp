#pragma once

#include "./MtpEvent.def.hpp"

namespace android::mtp
{
	// Fields
	inline jint MtpEvent::EVENT_CANCEL_TRANSACTION()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_CANCEL_TRANSACTION"
		);
	}
	inline jint MtpEvent::EVENT_CAPTURE_COMPLETE()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_CAPTURE_COMPLETE"
		);
	}
	inline jint MtpEvent::EVENT_DEVICE_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_INFO_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_DEVICE_PROP_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_PROP_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_DEVICE_RESET()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_DEVICE_RESET"
		);
	}
	inline jint MtpEvent::EVENT_OBJECT_ADDED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_ADDED"
		);
	}
	inline jint MtpEvent::EVENT_OBJECT_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_INFO_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_OBJECT_PROP_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_PROP_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_OBJECT_PROP_DESC_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_PROP_DESC_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_OBJECT_REFERENCES_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_REFERENCES_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_OBJECT_REMOVED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_OBJECT_REMOVED"
		);
	}
	inline jint MtpEvent::EVENT_REQUEST_OBJECT_TRANSFER()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_REQUEST_OBJECT_TRANSFER"
		);
	}
	inline jint MtpEvent::EVENT_STORAGE_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORAGE_INFO_CHANGED"
		);
	}
	inline jint MtpEvent::EVENT_STORE_ADDED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_ADDED"
		);
	}
	inline jint MtpEvent::EVENT_STORE_FULL()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_FULL"
		);
	}
	inline jint MtpEvent::EVENT_STORE_REMOVED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_STORE_REMOVED"
		);
	}
	inline jint MtpEvent::EVENT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_UNDEFINED"
		);
	}
	inline jint MtpEvent::EVENT_UNREPORTED_STATUS()
	{
		return getStaticField<jint>(
			"android.mtp.MtpEvent",
			"EVENT_UNREPORTED_STATUS"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MtpEvent::getDevicePropCode() const
	{
		return callMethod<jint>(
			"getDevicePropCode",
			"()I"
		);
	}
	inline jint MtpEvent::getEventCode() const
	{
		return callMethod<jint>(
			"getEventCode",
			"()I"
		);
	}
	inline jint MtpEvent::getObjectFormatCode() const
	{
		return callMethod<jint>(
			"getObjectFormatCode",
			"()I"
		);
	}
	inline jint MtpEvent::getObjectHandle() const
	{
		return callMethod<jint>(
			"getObjectHandle",
			"()I"
		);
	}
	inline jint MtpEvent::getObjectPropCode() const
	{
		return callMethod<jint>(
			"getObjectPropCode",
			"()I"
		);
	}
	inline jint MtpEvent::getParameter1() const
	{
		return callMethod<jint>(
			"getParameter1",
			"()I"
		);
	}
	inline jint MtpEvent::getParameter2() const
	{
		return callMethod<jint>(
			"getParameter2",
			"()I"
		);
	}
	inline jint MtpEvent::getParameter3() const
	{
		return callMethod<jint>(
			"getParameter3",
			"()I"
		);
	}
	inline jint MtpEvent::getStorageId() const
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	inline jint MtpEvent::getTransactionId() const
	{
		return callMethod<jint>(
			"getTransactionId",
			"()I"
		);
	}
} // namespace android::mtp

// Base class headers

