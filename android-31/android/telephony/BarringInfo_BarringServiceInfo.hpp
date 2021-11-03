#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::telephony
{
	class BarringInfo_BarringServiceInfo : public JObject
	{
	public:
		// Fields
		static jint BARRING_TYPE_CONDITIONAL();
		static jint BARRING_TYPE_NONE();
		static jint BARRING_TYPE_UNCONDITIONAL();
		static jint BARRING_TYPE_UNKNOWN();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BarringInfo_BarringServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BarringInfo_BarringServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBarringType() const;
		jint getConditionalBarringFactor() const;
		jint getConditionalBarringTimeSeconds() const;
		jint hashCode() const;
		jboolean isBarred() const;
		jboolean isConditionallyBarred() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

