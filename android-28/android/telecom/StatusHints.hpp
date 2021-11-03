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

namespace android::telecom
{
	class StatusHints : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StatusHints(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatusHints(QJniObject obj);
		
		// Constructors
		StatusHints(jstring arg0, android::graphics::drawable::Icon arg1, android::os::Bundle arg2);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::Bundle getExtras();
		android::graphics::drawable::Icon getIcon();
		jstring getLabel();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

