#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class LauncherActivity;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::app
{
	class LauncherActivity_IconResizer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherActivity_IconResizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivity_IconResizer(QAndroidJniObject obj);
		
		// Constructors
		LauncherActivity_IconResizer(android::app::LauncherActivity arg0);
		
		// Methods
		android::graphics::drawable::Drawable createIconThumbnail(android::graphics::drawable::Drawable arg0) const;
	};
} // namespace android::app

