#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class RemoteAction;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class ConversationAction;
}
class JString;
class JString;

namespace android::view::textclassifier
{
	class ConversationAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationAction_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConversationAction_Builder(JString arg0);
		
		// Methods
		android::view::textclassifier::ConversationAction build() const;
		android::view::textclassifier::ConversationAction_Builder setAction(android::app::RemoteAction arg0) const;
		android::view::textclassifier::ConversationAction_Builder setConfidenceScore(jfloat arg0) const;
		android::view::textclassifier::ConversationAction_Builder setExtras(android::os::Bundle arg0) const;
		android::view::textclassifier::ConversationAction_Builder setTextReply(JString arg0) const;
	};
} // namespace android::view::textclassifier

