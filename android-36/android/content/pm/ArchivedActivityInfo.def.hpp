#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::graphics::drawable
{
	class Drawable;
}
class JString;

namespace android::content::pm
{
	class ArchivedActivityInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArchivedActivityInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ArchivedActivityInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ArchivedActivityInfo(JString arg0, android::content::ComponentName arg1);
		
		// Methods
		android::content::ComponentName getComponentName() const;
		android::graphics::drawable::Drawable getIcon() const;
		JString getLabel() const;
		android::graphics::drawable::Drawable getMonochromeIcon() const;
		android::content::pm::ArchivedActivityInfo setComponentName(android::content::ComponentName arg0) const;
		android::content::pm::ArchivedActivityInfo setIcon(android::graphics::drawable::Drawable arg0) const;
		android::content::pm::ArchivedActivityInfo setLabel(JString arg0) const;
		android::content::pm::ArchivedActivityInfo setMonochromeIcon(android::graphics::drawable::Drawable arg0) const;
	};
} // namespace android::content::pm

