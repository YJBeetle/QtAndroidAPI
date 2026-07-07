#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::ranging::uwb
{
	class UwbComplexChannel : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint UWB_CHANNEL_10();
		static jint UWB_CHANNEL_12();
		static jint UWB_CHANNEL_13();
		static jint UWB_CHANNEL_14();
		static jint UWB_CHANNEL_5();
		static jint UWB_CHANNEL_6();
		static jint UWB_CHANNEL_8();
		static jint UWB_CHANNEL_9();
		static jint UWB_PREAMBLE_CODE_INDEX_10();
		static jint UWB_PREAMBLE_CODE_INDEX_11();
		static jint UWB_PREAMBLE_CODE_INDEX_12();
		static jint UWB_PREAMBLE_CODE_INDEX_25();
		static jint UWB_PREAMBLE_CODE_INDEX_26();
		static jint UWB_PREAMBLE_CODE_INDEX_27();
		static jint UWB_PREAMBLE_CODE_INDEX_28();
		static jint UWB_PREAMBLE_CODE_INDEX_29();
		static jint UWB_PREAMBLE_CODE_INDEX_30();
		static jint UWB_PREAMBLE_CODE_INDEX_31();
		static jint UWB_PREAMBLE_CODE_INDEX_32();
		static jint UWB_PREAMBLE_CODE_INDEX_9();
		
		// QJniObject forward
		template<typename ...Ts> explicit UwbComplexChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UwbComplexChannel(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getChannel() const;
		jint getPreambleIndex() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::uwb

