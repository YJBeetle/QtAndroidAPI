#pragma once

#include "./ViewOverlay.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewGroupOverlay : public android::view::ViewOverlay
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewGroupOverlay(const char *className, const char *sig, Ts...agv) : android::view::ViewOverlay(className, sig, std::forward<Ts>(agv)...) {}
		ViewGroupOverlay(QJniObject obj) : android::view::ViewOverlay(obj) {}
		
		// Constructors
		
		// Methods
		void add(android::view::View arg0) const;
		void remove(android::view::View arg0) const;
	};
} // namespace android::view

