#include "../view/View.hpp"
#include "../../java/time/Duration.hpp"
#include "../../java/time/Instant.hpp"
#include "./SplashScreenView.hpp"

namespace android::window
{
	// Fields
	
	// QAndroidJniObject forward
	SplashScreenView::SplashScreenView(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Duration SplashScreenView::getIconAnimationDuration() const
	{
		return callObjectMethod(
			"getIconAnimationDuration",
			"()Ljava/time/Duration;"
		);
	}
	java::time::Instant SplashScreenView::getIconAnimationStart() const
	{
		return callObjectMethod(
			"getIconAnimationStart",
			"()Ljava/time/Instant;"
		);
	}
	android::view::View SplashScreenView::getIconView() const
	{
		return callObjectMethod(
			"getIconView",
			"()Landroid/view/View;"
		);
	}
	void SplashScreenView::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	void SplashScreenView::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
} // namespace android::window

