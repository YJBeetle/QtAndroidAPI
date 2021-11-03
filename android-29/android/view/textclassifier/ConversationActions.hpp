#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class ConversationActions : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationActions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions(QJniObject obj);
		
		// Constructors
		ConversationActions(JObject arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		JObject getConversationActions();
		jstring getId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

