#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class SignalingDataRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SIGNALING_DATA_NO_GROUP_ID();
		static JString SIGNALING_METADATA_AEAT();
		static JString SIGNALING_METADATA_AEI();
		static JString SIGNALING_METADATA_APD();
		static JString SIGNALING_METADATA_ASD();
		static JString SIGNALING_METADATA_ASPD();
		static JString SIGNALING_METADATA_CAD();
		static JString SIGNALING_METADATA_CDT();
		static JString SIGNALING_METADATA_CRIT();
		static JString SIGNALING_METADATA_DCIT();
		static JString SIGNALING_METADATA_DWD();
		static JString SIGNALING_METADATA_EMSG();
		static JString SIGNALING_METADATA_EVTI();
		static JString SIGNALING_METADATA_HELD();
		static JString SIGNALING_METADATA_IED();
		static JString SIGNALING_METADATA_MPD();
		static JString SIGNALING_METADATA_MPIT();
		static JString SIGNALING_METADATA_MPT();
		static JString SIGNALING_METADATA_OSN();
		static JString SIGNALING_METADATA_PAT();
		static JString SIGNALING_METADATA_RDT();
		static JString SIGNALING_METADATA_RRT();
		static JString SIGNALING_METADATA_RSAT();
		static JString SIGNALING_METADATA_SLT();
		static JString SIGNALING_METADATA_SMT();
		static JString SIGNALING_METADATA_SSD();
		static JString SIGNALING_METADATA_STSID();
		static JString SIGNALING_METADATA_STT();
		static JString SIGNALING_METADATA_USBD();
		static JString SIGNALING_METADATA_USD();
		static JString SIGNALING_METADATA_VSPD();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalingDataRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		SignalingDataRequest(QJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		SignalingDataRequest(jint arg0, jint arg1, jint arg2, JObject arg3);
		
		// Methods
		jint describeContents() const;
		jint getGroup() const;
		JObject getSignalingDataTypes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

