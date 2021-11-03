#pragma once

#include "../../JObject.hpp"
#include "./ViewOverlay.hpp"

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
		ViewGroupOverlay(QJniObject obj);
		
		// Constructors
		
		// Methods
		void add(android::view::View arg0);
		void remove(android::view::View arg0);
	};
} // namespace android::view

