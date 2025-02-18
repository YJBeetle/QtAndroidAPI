#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::adservices::adselection
{
	class DecisionLogic : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DecisionLogic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DecisionLogic(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DecisionLogic(JString arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getLogic() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::adselection

