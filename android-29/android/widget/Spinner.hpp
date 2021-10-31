#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsSpinner.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class PointerIcon;
}

namespace android::widget
{
	class Spinner : public android::widget::AbsSpinner
	{
	public:
		// Fields
		static jint MODE_DIALOG();
		static jint MODE_DROPDOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spinner(const char *className, const char *sig, Ts...agv) : android::widget::AbsSpinner(className, sig, std::forward<Ts>(agv)...) {}
		Spinner(QAndroidJniObject obj);
		
		// Constructors
		Spinner(android::content::Context arg0);
		Spinner(android::content::Context arg0, __JniBaseClass arg1);
		Spinner(android::content::Context arg0, jint arg1);
		Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4);
		Spinner(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4, android::content::res::Resources_Theme arg5);
		
		// Methods
		jstring getAccessibilityClassName();
		jint getBaseline();
		jint getDropDownHorizontalOffset();
		jint getDropDownVerticalOffset();
		jint getDropDownWidth();
		jint getGravity();
		QAndroidJniObject getPopupBackground();
		QAndroidJniObject getPopupContext();
		jstring getPrompt();
		void onClick(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean performClick();
		void setAdapter(__JniBaseClass arg0);
		void setDropDownHorizontalOffset(jint arg0);
		void setDropDownVerticalOffset(jint arg0);
		void setDropDownWidth(jint arg0);
		void setEnabled(jboolean arg0);
		void setGravity(jint arg0);
		void setOnItemClickListener(__JniBaseClass arg0);
		void setPopupBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setPopupBackgroundResource(jint arg0);
		void setPrompt(jstring arg0);
		void setPromptId(jint arg0);
	};
} // namespace android::widget

