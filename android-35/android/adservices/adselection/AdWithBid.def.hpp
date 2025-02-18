#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdData;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::adservices::adselection
{
	class AdWithBid : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdWithBid(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdWithBid(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdWithBid(android::adservices::common::AdData arg0, jdouble arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::adservices::common::AdData getAdData() const;
		jdouble getBid() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::adselection

