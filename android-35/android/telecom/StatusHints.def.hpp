#pragma once

#include "../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;

namespace android::telecom
{
	class StatusHints : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StatusHints(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatusHints(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StatusHints(JString arg0, android::graphics::drawable::Icon arg1, android::os::Bundle arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::Bundle getExtras() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getLabel() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

