#pragma once

#include "./ViewSwitcher.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::widget
{
	class ImageSwitcher : public android::widget::ViewSwitcher
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ImageSwitcher(const char *className, const char *sig, Ts...agv) : android::widget::ViewSwitcher(className, sig, std::forward<Ts>(agv)...) {}
		ImageSwitcher(QJniObject obj);
		
		// Constructors
		ImageSwitcher(android::content::Context arg0);
		ImageSwitcher(android::content::Context arg0, JObject arg1);
		
		// Methods
		JString getAccessibilityClassName();
		void setImageDrawable(android::graphics::drawable::Drawable arg0);
		void setImageResource(jint arg0);
		void setImageURI(android::net::Uri arg0);
	};
} // namespace android::widget

