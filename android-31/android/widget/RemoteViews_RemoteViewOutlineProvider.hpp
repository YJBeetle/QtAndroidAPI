#pragma once

#include "../view/ViewOutlineProvider.hpp"

namespace android::graphics
{
	class Outline;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class RemoteViews_RemoteViewOutlineProvider : public android::view::ViewOutlineProvider
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViews_RemoteViewOutlineProvider(const char *className, const char *sig, Ts...agv) : android::view::ViewOutlineProvider(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_RemoteViewOutlineProvider(QJniObject obj);
		
		// Constructors
		RemoteViews_RemoteViewOutlineProvider(jfloat arg0);
		
		// Methods
		void getOutline(android::view::View arg0, android::graphics::Outline arg1) const;
		jfloat getRadius() const;
	};
} // namespace android::widget

