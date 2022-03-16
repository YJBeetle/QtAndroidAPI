#pragma once

#include "./AdapterView.hpp"

namespace android::animation
{
	class ObjectAnimator;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::widget
{
	class AdapterViewAnimator : public android::widget::AdapterView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdapterViewAnimator(const char *className, const char *sig, Ts...agv) : android::widget::AdapterView(className, sig, std::forward<Ts>(agv)...) {}
		AdapterViewAnimator(QAndroidJniObject obj) : android::widget::AdapterView(obj) {}
		
		// Constructors
		AdapterViewAnimator(android::content::Context arg0);
		AdapterViewAnimator(android::content::Context arg0, JObject arg1);
		AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2);
		AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void advance() const;
		void deferNotifyDataSetChanged() const;
		void fyiWillBeAdvancedByHostKThx() const;
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		jint getBaseline() const;
		android::view::View getCurrentView() const;
		jint getDisplayedChild() const;
		android::animation::ObjectAnimator getInAnimation() const;
		android::animation::ObjectAnimator getOutAnimation() const;
		android::view::View getSelectedView() const;
		jboolean onRemoteAdapterConnected() const;
		void onRemoteAdapterDisconnected() const;
		void onRestoreInstanceState(JObject arg0) const;
		JObject onSaveInstanceState() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setAdapter(JObject arg0) const;
		void setAnimateFirstView(jboolean arg0) const;
		void setDisplayedChild(jint arg0) const;
		void setInAnimation(android::animation::ObjectAnimator arg0) const;
		void setInAnimation(android::content::Context arg0, jint arg1) const;
		void setOutAnimation(android::animation::ObjectAnimator arg0) const;
		void setOutAnimation(android::content::Context arg0, jint arg1) const;
		void setRemoteViewsAdapter(android::content::Intent arg0) const;
		void setSelection(jint arg0) const;
		void showNext() const;
		void showPrevious() const;
	};
} // namespace android::widget

