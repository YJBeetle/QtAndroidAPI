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
	class AdSelectionSignals : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::adservices::common::AdSelectionSignals EMPTY();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionSignals(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionSignals(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::common::AdSelectionSignals fromString(JString arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::common

