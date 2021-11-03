#pragma once

#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}

namespace android::widget
{
	class AbsoluteLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsoluteLayout(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		AbsoluteLayout(QJniObject obj);
		
		// Constructors
		AbsoluteLayout(android::content::Context arg0);
		AbsoluteLayout(android::content::Context arg0, JObject arg1);
		AbsoluteLayout(android::content::Context arg0, JObject arg1, jint arg2);
		AbsoluteLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::view::ViewGroup_LayoutParams generateLayoutParams(JObject arg0) const;
		jboolean shouldDelayChildPressedState() const;
	};
} // namespace android::widget

