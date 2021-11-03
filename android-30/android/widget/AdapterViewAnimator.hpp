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
		
		// QJniObject forward
		template<typename ...Ts> explicit AdapterViewAnimator(const char *className, const char *sig, Ts...agv) : android::widget::AdapterView(className, sig, std::forward<Ts>(agv)...) {}
		AdapterViewAnimator(QJniObject obj);
		
		// Constructors
		AdapterViewAnimator(android::content::Context arg0);
		AdapterViewAnimator(android::content::Context arg0, JObject arg1);
		AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2);
		AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void advance();
		void deferNotifyDataSetChanged();
		void fyiWillBeAdvancedByHostKThx();
		JString getAccessibilityClassName();
		JObject getAdapter();
		jint getBaseline();
		android::view::View getCurrentView();
		jint getDisplayedChild();
		android::animation::ObjectAnimator getInAnimation();
		android::animation::ObjectAnimator getOutAnimation();
		android::view::View getSelectedView();
		jboolean onRemoteAdapterConnected();
		void onRemoteAdapterDisconnected();
		void onRestoreInstanceState(JObject arg0);
		JObject onSaveInstanceState();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setAdapter(JObject arg0);
		void setAnimateFirstView(jboolean arg0);
		void setDisplayedChild(jint arg0);
		void setInAnimation(android::animation::ObjectAnimator arg0);
		void setInAnimation(android::content::Context arg0, jint arg1);
		void setOutAnimation(android::animation::ObjectAnimator arg0);
		void setOutAnimation(android::content::Context arg0, jint arg1);
		void setRemoteViewsAdapter(android::content::Intent arg0);
		void setSelection(jint arg0);
		void showNext();
		void showPrevious();
	};
} // namespace android::widget

