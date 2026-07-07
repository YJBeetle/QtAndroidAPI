#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::view
{
	class FocusFinder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FocusFinder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FocusFinder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::FocusFinder getInstance();
		android::view::View findNearestTouchable(android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const;
		android::view::View findNextFocus(android::view::ViewGroup arg0, android::view::View arg1, jint arg2) const;
		android::view::View findNextFocusFromRect(android::view::ViewGroup arg0, android::graphics::Rect arg1, jint arg2) const;
		android::view::View findNextKeyboardNavigationCluster(android::view::View arg0, android::view::View arg1, jint arg2) const;
	};
} // namespace android::view

