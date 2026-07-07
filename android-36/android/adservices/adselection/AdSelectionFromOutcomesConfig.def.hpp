#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::adservices::adselection
{
	class AdSelectionFromOutcomesConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionFromOutcomesConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionFromOutcomesConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getAdSelectionIds() const;
		android::net::Uri getSelectionLogicUri() const;
		android::adservices::common::AdSelectionSignals getSelectionSignals() const;
		android::adservices::common::AdTechIdentifier getSeller() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::adselection

