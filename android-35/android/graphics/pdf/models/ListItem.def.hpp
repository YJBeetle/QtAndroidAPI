#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics::pdf::models
{
	class ListItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ListItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ListItem(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ListItem(JString arg0, jboolean arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getLabel() const;
		jint hashCode() const;
		jboolean isSelected() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::models

