#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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

namespace android::widget
{
	class AdapterViewAnimator : public android::widget::AdapterView
	{
	public:
		// Fields
		
		AdapterViewAnimator(QAndroidJniObject obj);
		// Constructors
		AdapterViewAnimator(android::content::Context &arg0);
		AdapterViewAnimator(android::content::Context &arg0, __JniBaseClass &arg1);
		AdapterViewAnimator(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		AdapterViewAnimator(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		AdapterViewAnimator() = default;
		
		// Methods
		void advance();
		void deferNotifyDataSetChanged();
		void fyiWillBeAdvancedByHostKThx();
		jstring getAccessibilityClassName();
		QAndroidJniObject getAdapter();
		jint getBaseline();
		QAndroidJniObject getCurrentView();
		jint getDisplayedChild();
		QAndroidJniObject getInAnimation();
		QAndroidJniObject getOutAnimation();
		QAndroidJniObject getSelectedView();
		jboolean onRemoteAdapterConnected();
		void onRemoteAdapterDisconnected();
		void onRestoreInstanceState(__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setAdapter(__JniBaseClass arg0);
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

