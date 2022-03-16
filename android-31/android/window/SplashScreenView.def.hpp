#pragma once

#include "../widget/FrameLayout.def.hpp"

namespace android::view
{
	class View;
}
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}

namespace android::window
{
	class SplashScreenView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SplashScreenView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		SplashScreenView(QJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		
		// Methods
		java::time::Duration getIconAnimationDuration() const;
		java::time::Instant getIconAnimationStart() const;
		android::view::View getIconView() const;
		void remove() const;
		void setAlpha(jfloat arg0) const;
	};
} // namespace android::window

