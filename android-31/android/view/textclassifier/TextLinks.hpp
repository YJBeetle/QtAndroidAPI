#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view::textclassifier
{
	class TextLinks : public JObject
	{
	public:
		// Fields
		static jint APPLY_STRATEGY_IGNORE();
		static jint APPLY_STRATEGY_REPLACE();
		static JObject CREATOR();
		static jint STATUS_DIFFERENT_TEXT();
		static jint STATUS_LINKS_APPLIED();
		static jint STATUS_NO_LINKS_APPLIED();
		static jint STATUS_NO_LINKS_FOUND();
		static jint STATUS_UNSUPPORTED_CHARACTER();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint apply(JObject arg0, jint arg1, JObject arg2);
		jint describeContents();
		android::os::Bundle getExtras();
		JObject getLinks();
		JString getText();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

