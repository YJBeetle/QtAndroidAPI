#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class Toast_Callback;
}
class JString;

namespace android::widget
{
	class Toast : public JObject
	{
	public:
		// Fields
		static jint LENGTH_LONG();
		static jint LENGTH_SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Toast(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Toast(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Toast(android::content::Context arg0);
		
		// Methods
		static android::widget::Toast makeText(android::content::Context arg0, jint arg1, jint arg2);
		static android::widget::Toast makeText(android::content::Context arg0, JString arg1, jint arg2);
		void addCallback(android::widget::Toast_Callback arg0) const;
		void cancel() const;
		jint getDuration() const;
		jint getGravity() const;
		jfloat getHorizontalMargin() const;
		jfloat getVerticalMargin() const;
		android::view::View getView() const;
		jint getXOffset() const;
		jint getYOffset() const;
		void removeCallback(android::widget::Toast_Callback arg0) const;
		void setDuration(jint arg0) const;
		void setGravity(jint arg0, jint arg1, jint arg2) const;
		void setMargin(jfloat arg0, jfloat arg1) const;
		void setText(jint arg0) const;
		void setText(JString arg0) const;
		void setView(android::view::View arg0) const;
		void show() const;
	};
} // namespace android::widget

