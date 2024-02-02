#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::service::chooser
{
	class ChooserAction;
}
class JString;

namespace android::service::chooser
{
	class ChooserAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChooserAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChooserAction_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChooserAction_Builder(android::graphics::drawable::Icon arg0, JString arg1, android::app::PendingIntent arg2);
		
		// Methods
		android::service::chooser::ChooserAction build() const;
	};
} // namespace android::service::chooser

