#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "./SliceMetrics.hpp"

namespace android::app::slice
{
	// Fields
	
	// Constructors
	SliceMetrics::SliceMetrics(android::content::Context arg0, android::net::Uri arg1)
		: JObject(
			"android.app.slice.SliceMetrics",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void SliceMetrics::logHidden() const
	{
		callMethod<void>(
			"logHidden",
			"()V"
		);
	}
	void SliceMetrics::logTouch(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"logTouch",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void SliceMetrics::logVisible() const
	{
		callMethod<void>(
			"logVisible",
			"()V"
		);
	}
} // namespace android::app::slice

