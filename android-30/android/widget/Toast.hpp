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
		
		// QJniObject forward
		template<typename ...Ts> explicit Toast(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Toast(QJniObject obj);
		
		// Constructors
		Toast(android::content::Context arg0);
		
		// Methods
		static android::widget::Toast makeText(android::content::Context arg0, jint arg1, jint arg2);
		static android::widget::Toast makeText(android::content::Context arg0, JString arg1, jint arg2);
		void addCallback(android::widget::Toast_Callback arg0);
		void cancel();
		jint getDuration();
		jint getGravity();
		jfloat getHorizontalMargin();
		jfloat getVerticalMargin();
		android::view::View getView();
		jint getXOffset();
		jint getYOffset();
		void removeCallback(android::widget::Toast_Callback arg0);
		void setDuration(jint arg0);
		void setGravity(jint arg0, jint arg1, jint arg2);
		void setMargin(jfloat arg0, jfloat arg1);
		void setText(jint arg0);
		void setText(JString arg0);
		void setView(android::view::View arg0);
		void show();
	};
} // namespace android::widget

