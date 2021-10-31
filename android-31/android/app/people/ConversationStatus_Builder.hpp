#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::people
{
	class ConversationStatus;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app::people
{
	class ConversationStatus_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationStatus_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationStatus_Builder(QJniObject obj);
		
		// Constructors
		ConversationStatus_Builder(jstring arg0, jint arg1);
		
		// Methods
		android::app::people::ConversationStatus build();
		android::app::people::ConversationStatus_Builder setAvailability(jint arg0);
		android::app::people::ConversationStatus_Builder setDescription(jstring arg0);
		android::app::people::ConversationStatus_Builder setEndTimeMillis(jlong arg0);
		android::app::people::ConversationStatus_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::app::people::ConversationStatus_Builder setStartTimeMillis(jlong arg0);
	};
} // namespace android::app::people

