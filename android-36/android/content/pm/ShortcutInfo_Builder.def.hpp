#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace android::app
{
	class Person;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class LocusId;
}
namespace android::content::pm
{
	class Capability;
}
namespace android::content::pm
{
	class CapabilityParams;
}
namespace android::content::pm
{
	class ShortcutInfo;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;
class JString;

namespace android::content::pm
{
	class ShortcutInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ShortcutInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ShortcutInfo_Builder(android::content::Context arg0, JString arg1);
		
		// Methods
		android::content::pm::ShortcutInfo_Builder addCapabilityBinding(android::content::pm::Capability arg0, android::content::pm::CapabilityParams arg1) const;
		android::content::pm::ShortcutInfo build() const;
		android::content::pm::ShortcutInfo_Builder setActivity(android::content::ComponentName arg0) const;
		android::content::pm::ShortcutInfo_Builder setCategories(JObject arg0) const;
		android::content::pm::ShortcutInfo_Builder setDisabledMessage(JString arg0) const;
		android::content::pm::ShortcutInfo_Builder setExcludedFromSurfaces(jint arg0) const;
		android::content::pm::ShortcutInfo_Builder setExtras(android::os::PersistableBundle arg0) const;
		android::content::pm::ShortcutInfo_Builder setIcon(android::graphics::drawable::Icon arg0) const;
		android::content::pm::ShortcutInfo_Builder setIntent(android::content::Intent arg0) const;
		android::content::pm::ShortcutInfo_Builder setIntents(JArray arg0) const;
		android::content::pm::ShortcutInfo_Builder setLocusId(android::content::LocusId arg0) const;
		android::content::pm::ShortcutInfo_Builder setLongLabel(JString arg0) const;
		android::content::pm::ShortcutInfo_Builder setLongLived(jboolean arg0) const;
		android::content::pm::ShortcutInfo_Builder setPerson(android::app::Person arg0) const;
		android::content::pm::ShortcutInfo_Builder setPersons(JArray arg0) const;
		android::content::pm::ShortcutInfo_Builder setRank(jint arg0) const;
		android::content::pm::ShortcutInfo_Builder setShortLabel(JString arg0) const;
		android::content::pm::ShortcutInfo_Builder setStartingTheme(jint arg0) const;
	};
} // namespace android::content::pm

