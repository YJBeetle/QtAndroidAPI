#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::nfc::cardemulation
{
	class PollingFrame : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint POLLING_LOOP_TYPE_A();
		static jint POLLING_LOOP_TYPE_B();
		static jint POLLING_LOOP_TYPE_F();
		static jint POLLING_LOOP_TYPE_OFF();
		static jint POLLING_LOOP_TYPE_ON();
		static jint POLLING_LOOP_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit PollingFrame(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PollingFrame(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JByteArray getData() const;
		jlong getTimestamp() const;
		jboolean getTriggeredAutoTransact() const;
		jint getType() const;
		jint getVendorSpecificGain() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::nfc::cardemulation

