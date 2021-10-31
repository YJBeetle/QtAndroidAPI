#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class DisconnectCause : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANSWERED_ELSEWHERE();
		static jint BUSY();
		static jint CALL_PULLED();
		static jint CANCELED();
		static jint CONNECTION_MANAGER_NOT_SUPPORTED();
		static __JniBaseClass CREATOR();
		static jint ERROR();
		static jint LOCAL();
		static jint MISSED();
		static jint OTHER();
		static jstring REASON_EMERGENCY_CALL_PLACED();
		static jstring REASON_EMULATING_SINGLE_CALL();
		static jstring REASON_IMS_ACCESS_BLOCKED();
		static jstring REASON_WIFI_ON_BUT_WFC_OFF();
		static jint REJECTED();
		static jint REMOTE();
		static jint RESTRICTED();
		static jint UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisconnectCause(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DisconnectCause(QJniObject obj);
		
		// Constructors
		DisconnectCause(jint arg0);
		DisconnectCause(jint arg0, jstring arg1);
		DisconnectCause(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		DisconnectCause(jint arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCode();
		jstring getDescription();
		jstring getLabel();
		jstring getReason();
		jint getTone();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

