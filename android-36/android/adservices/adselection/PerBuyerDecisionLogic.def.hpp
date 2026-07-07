#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::adservices::adselection
{
	class PerBuyerDecisionLogic : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::adservices::adselection::PerBuyerDecisionLogic EMPTY();
		
		// QJniObject forward
		template<typename ...Ts> explicit PerBuyerDecisionLogic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PerBuyerDecisionLogic(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PerBuyerDecisionLogic(JObject arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getPerBuyerLogicMap() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::adselection

