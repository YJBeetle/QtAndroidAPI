#pragma once

#include "../view/View.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}

namespace android::widget
{
	class AnalogClock : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnalogClock(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		AnalogClock(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		AnalogClock(android::content::Context arg0);
		AnalogClock(android::content::Context arg0, JObject arg1);
		AnalogClock(android::content::Context arg0, JObject arg1, jint arg2);
		AnalogClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
	};
} // namespace android::widget

