#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::widget
{
	class AnalogClock : public android::view::View
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnalogClock(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		AnalogClock(QAndroidJniObject obj);
		
		// Constructors
		AnalogClock(android::content::Context arg0);
		AnalogClock(android::content::Context arg0, JObject arg1);
		AnalogClock(android::content::Context arg0, JObject arg1, jint arg2);
		AnalogClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::graphics::BlendMode getDialTintBlendMode();
		android::content::res::ColorStateList getDialTintList();
		android::graphics::BlendMode getHourHandTintBlendMode();
		android::content::res::ColorStateList getHourHandTintList();
		android::graphics::BlendMode getMinuteHandTintBlendMode();
		android::content::res::ColorStateList getMinuteHandTintList();
		android::graphics::BlendMode getSecondHandTintBlendMode();
		android::content::res::ColorStateList getSecondHandTintList();
		jstring getTimeZone();
		void onVisibilityAggregated(jboolean arg0);
		void setDial(android::graphics::drawable::Icon arg0);
		void setDialTintBlendMode(android::graphics::BlendMode arg0);
		void setDialTintList(android::content::res::ColorStateList arg0);
		void setHourHand(android::graphics::drawable::Icon arg0);
		void setHourHandTintBlendMode(android::graphics::BlendMode arg0);
		void setHourHandTintList(android::content::res::ColorStateList arg0);
		void setMinuteHand(android::graphics::drawable::Icon arg0);
		void setMinuteHandTintBlendMode(android::graphics::BlendMode arg0);
		void setMinuteHandTintList(android::content::res::ColorStateList arg0);
		void setSecondHand(android::graphics::drawable::Icon arg0);
		void setSecondHandTintBlendMode(android::graphics::BlendMode arg0);
		void setSecondHandTintList(android::content::res::ColorStateList arg0);
		void setTimeZone(jstring arg0);
	};
} // namespace android::widget

