#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AppInstallFilters;
}
namespace android::adservices::common
{
	class FrequencyCapFilters;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::adservices::common
{
	class AdFilters : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdFilters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdFilters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::adservices::common::AppInstallFilters getAppInstallFilters() const;
		android::adservices::common::FrequencyCapFilters getFrequencyCapFilters() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::common

