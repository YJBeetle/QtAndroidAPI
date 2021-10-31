#include "../view/View.hpp"
#include "../../java/time/Duration.hpp"
#include "../../java/time/Instant.hpp"
#include "./SplashScreenView.hpp"

namespace android::window
{
	// Fields
	
	// QJniObject forward
	SplashScreenView::SplashScreenView(QJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Duration SplashScreenView::getIconAnimationDuration()
	{
		return callObjectMethod(
			"getIconAnimationDuration",
			"()Ljava/time/Duration;"
		);
	}
	java::time::Instant SplashScreenView::getIconAnimationStart()
	{
		return callObjectMethod(
			"getIconAnimationStart",
			"()Ljava/time/Instant;"
		);
	}
	android::view::View SplashScreenView::getIconView()
	{
		return callObjectMethod(
			"getIconView",
			"()Landroid/view/View;"
		);
	}
	void SplashScreenView::remove()
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	void SplashScreenView::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
} // namespace android::window

