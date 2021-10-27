#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"
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

namespace android::widget
{
	class ImageSwitcher : public android::widget::ViewSwitcher
	{
	public:
		// Fields
		
		ImageSwitcher(QAndroidJniObject obj);
		// Constructors
		ImageSwitcher(android::content::Context &arg0);
		ImageSwitcher(android::content::Context &arg0, __JniBaseClass &arg1);
		ImageSwitcher() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		void setImageDrawable(android::graphics::drawable::Drawable arg0);
		void setImageResource(jint arg0);
		void setImageURI(android::net::Uri arg0);
	};
} // namespace android::widget

