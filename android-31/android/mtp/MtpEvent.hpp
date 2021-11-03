#pragma once

#include "../../JObject.hpp"

namespace android::mtp
{
	class MtpEvent : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpEvent(QJniObject obj);
		
		// Constructors
		
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
} // namespace android::mtp

