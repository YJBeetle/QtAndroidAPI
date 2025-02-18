#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::adservices::common
{
	class FrequencyCapFilters : public JObject
	{
	public:
		// Fields
		static jint AD_EVENT_TYPE_CLICK();
		static jint AD_EVENT_TYPE_IMPRESSION();
		static jint AD_EVENT_TYPE_VIEW();
		static jint AD_EVENT_TYPE_WIN();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FrequencyCapFilters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FrequencyCapFilters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getKeyedFrequencyCapsForClickEvents() const;
		JObject getKeyedFrequencyCapsForImpressionEvents() const;
		JObject getKeyedFrequencyCapsForViewEvents() const;
		JObject getKeyedFrequencyCapsForWinEvents() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::common

