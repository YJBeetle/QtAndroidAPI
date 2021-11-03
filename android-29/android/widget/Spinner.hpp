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
		JString getAccessibilityClassName() const;
		jint getBaseline() const;
		jint getDropDownHorizontalOffset() const;
		jint getDropDownVerticalOffset() const;
		jint getDropDownWidth() const;
		jint getGravity() const;
		android::graphics::drawable::Drawable getPopupBackground() const;
		android::content::Context getPopupContext() const;
		JString getPrompt() const;
		void onClick(JObject arg0, jint arg1) const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
		void onRestoreInstanceState(JObject arg0) const;
		JObject onSaveInstanceState() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean performClick() const;
		void setAdapter(JObject arg0) const;
		void setDropDownHorizontalOffset(jint arg0) const;
		void setDropDownVerticalOffset(jint arg0) const;
		void setDropDownWidth(jint arg0) const;
		void setEnabled(jboolean arg0) const;
		void setGravity(jint arg0) const;
		void setOnItemClickListener(JObject arg0) const;
		void setPopupBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setPopupBackgroundResource(jint arg0) const;
		void setPrompt(JString arg0) const;
		void setPromptId(jint arg0) const;
	};
} // namespace android::widget

