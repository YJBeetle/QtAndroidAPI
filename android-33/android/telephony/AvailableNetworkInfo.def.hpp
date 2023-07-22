#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class AvailableNetworkInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AvailableNetworkInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AvailableNetworkInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AvailableNetworkInfo(jint arg0, jint arg1, JObject arg2, JObject arg3);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getBands() const;
		JObject getMccMncs() const;
		jint getPriority() const;
		JObject getRadioAccessSpecifiers() const;
		jint getSubId() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

