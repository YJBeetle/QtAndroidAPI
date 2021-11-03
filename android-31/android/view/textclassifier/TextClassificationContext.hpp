#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::textclassifier
{
	class TextClassificationContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassificationContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getPackageName();
		JString getWidgetType();
		JString getWidgetVersion();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

