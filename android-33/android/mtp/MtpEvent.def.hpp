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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpEvent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getDevicePropCode() const;
		jint getEventCode() const;
		jint getObjectFormatCode() const;
		jint getObjectHandle() const;
		jint getObjectPropCode() const;
		jint getParameter1() const;
		jint getParameter2() const;
		jint getParameter3() const;
		jint getStorageId() const;
		jint getTransactionId() const;
	};
} // namespace android::mtp

