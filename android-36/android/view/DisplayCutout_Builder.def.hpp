#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Insets;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class DisplayCutout;
}

namespace android::view
{
	class DisplayCutout_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayCutout_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayCutout_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DisplayCutout_Builder();
		
		// Methods
		android::view::DisplayCutout build() const;
		android::view::DisplayCutout_Builder setBoundingRectBottom(android::graphics::Rect arg0) const;
		android::view::DisplayCutout_Builder setBoundingRectLeft(android::graphics::Rect arg0) const;
		android::view::DisplayCutout_Builder setBoundingRectRight(android::graphics::Rect arg0) const;
		android::view::DisplayCutout_Builder setBoundingRectTop(android::graphics::Rect arg0) const;
		android::view::DisplayCutout_Builder setCutoutPath(android::graphics::Path arg0) const;
		android::view::DisplayCutout_Builder setSafeInsets(android::graphics::Insets arg0) const;
		android::view::DisplayCutout_Builder setWaterfallInsets(android::graphics::Insets arg0) const;
	};
} // namespace android::view

