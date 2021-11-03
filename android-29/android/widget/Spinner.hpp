#pragma once

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
class JString;

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
		Spinner(android::content::Context arg0, JObject arg1);
		Spinner(android::content::Context arg0, jint arg1);
		Spinner(android::content::Context arg0, JObject arg1, jint arg2);
		Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4);
		Spinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4, android::content::res::Resources_Theme arg5);
		
		// Methods
		JString getAccessibilityClassName();
		jint getBaseline();
		jint getDropDownHorizontalOffset();
		jint getDropDownVerticalOffset();
		jint getDropDownWidth();
		jint getGravity();
		android::graphics::drawable::Drawable getPopupBackground();
		android::content::Context getPopupContext();
		JString getPrompt();
		void onClick(JObject arg0, jint arg1);
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(JObject arg0);
		JObject onSaveInstanceState();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean performClick();
		void setAdapter(JObject arg0);
		void setDropDownHorizontalOffset(jint arg0);
		void setDropDownVerticalOffset(jint arg0);
		void setDropDownWidth(jint arg0);
		void setEnabled(jboolean arg0);
		void setGravity(jint arg0);
		void setOnItemClickListener(JObject arg0);
		void setPopupBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setPopupBackgroundResource(jint arg0);
		void setPrompt(JString arg0);
		void setPromptId(jint arg0);
	};
} // namespace android::widget

