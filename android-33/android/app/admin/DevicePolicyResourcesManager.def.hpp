#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class Icon;
}
class JString;

namespace android::app::admin
{
	class DevicePolicyResourcesManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyResourcesManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyResourcesManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::drawable::Drawable getDrawable(JString arg0, JString arg1, JObject arg2) const;
		android::graphics::drawable::Drawable getDrawable(JString arg0, JString arg1, JString arg2, JObject arg3) const;
		android::graphics::drawable::Icon getDrawableAsIcon(JString arg0, JString arg1, android::graphics::drawable::Icon arg2) const;
		android::graphics::drawable::Icon getDrawableAsIcon(JString arg0, JString arg1, JString arg2, android::graphics::drawable::Icon arg3) const;
		android::graphics::drawable::Drawable getDrawableForDensity(JString arg0, JString arg1, jint arg2, JObject arg3) const;
		android::graphics::drawable::Drawable getDrawableForDensity(JString arg0, JString arg1, JString arg2, jint arg3, JObject arg4) const;
		JString getString(JString arg0, JObject arg1) const;
		JString getString(JString arg0, JObject arg1, JObjectArray arg2) const;
	};
} // namespace android::app::admin

