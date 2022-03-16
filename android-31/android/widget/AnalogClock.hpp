#pragma once

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
class JString;

namespace android::widget
{
	class AnalogClock : public android::view::View
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnalogClock(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		AnalogClock(QAndroidJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		AnalogClock(android::content::Context arg0);
		AnalogClock(android::content::Context arg0, JObject arg1);
		AnalogClock(android::content::Context arg0, JObject arg1, jint arg2);
		AnalogClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::graphics::BlendMode getDialTintBlendMode() const;
		android::content::res::ColorStateList getDialTintList() const;
		android::graphics::BlendMode getHourHandTintBlendMode() const;
		android::content::res::ColorStateList getHourHandTintList() const;
		android::graphics::BlendMode getMinuteHandTintBlendMode() const;
		android::content::res::ColorStateList getMinuteHandTintList() const;
		android::graphics::BlendMode getSecondHandTintBlendMode() const;
		android::content::res::ColorStateList getSecondHandTintList() const;
		JString getTimeZone() const;
		void onVisibilityAggregated(jboolean arg0) const;
		void setDial(android::graphics::drawable::Icon arg0) const;
		void setDialTintBlendMode(android::graphics::BlendMode arg0) const;
		void setDialTintList(android::content::res::ColorStateList arg0) const;
		void setHourHand(android::graphics::drawable::Icon arg0) const;
		void setHourHandTintBlendMode(android::graphics::BlendMode arg0) const;
		void setHourHandTintList(android::content::res::ColorStateList arg0) const;
		void setMinuteHand(android::graphics::drawable::Icon arg0) const;
		void setMinuteHandTintBlendMode(android::graphics::BlendMode arg0) const;
		void setMinuteHandTintList(android::content::res::ColorStateList arg0) const;
		void setSecondHand(android::graphics::drawable::Icon arg0) const;
		void setSecondHandTintBlendMode(android::graphics::BlendMode arg0) const;
		void setSecondHandTintList(android::content::res::ColorStateList arg0) const;
		void setTimeZone(JString arg0) const;
	};
} // namespace android::widget

