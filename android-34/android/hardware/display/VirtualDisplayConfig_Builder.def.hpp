#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::display
{
	class VirtualDisplayConfig;
}
namespace android::view
{
	class Surface;
}
class JString;

namespace android::hardware::display
{
	class VirtualDisplayConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDisplayConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDisplayConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VirtualDisplayConfig_Builder(JString arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		android::hardware::display::VirtualDisplayConfig_Builder addDisplayCategory(JString arg0) const;
		android::hardware::display::VirtualDisplayConfig build() const;
		android::hardware::display::VirtualDisplayConfig_Builder setDisplayCategories(JObject arg0) const;
		android::hardware::display::VirtualDisplayConfig_Builder setFlags(jint arg0) const;
		android::hardware::display::VirtualDisplayConfig_Builder setRequestedRefreshRate(jfloat arg0) const;
		android::hardware::display::VirtualDisplayConfig_Builder setSurface(android::view::Surface arg0) const;
	};
} // namespace android::hardware::display

