#pragma once

#include "../../../JObject.hpp"

namespace android::app::people
{
	class ConversationStatus;
}
namespace android::graphics::drawable
{
	class Icon;
}
class JString;
class JString;

namespace android::app::people
{
	class ConversationStatus_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationStatus_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationStatus_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConversationStatus_Builder(JString arg0, jint arg1);
		
		// Methods
		android::app::people::ConversationStatus build() const;
		android::app::people::ConversationStatus_Builder setAvailability(jint arg0) const;
		android::app::people::ConversationStatus_Builder setDescription(JString arg0) const;
		android::app::people::ConversationStatus_Builder setEndTimeMillis(jlong arg0) const;
		android::app::people::ConversationStatus_Builder setIcon(android::graphics::drawable::Icon arg0) const;
		android::app::people::ConversationStatus_Builder setStartTimeMillis(jlong arg0) const;
	};
} // namespace android::app::people

