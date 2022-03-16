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
	class Space : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Space(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		Space(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		Space(android::content::Context arg0);
		Space(android::content::Context arg0, JObject arg1);
		Space(android::content::Context arg0, JObject arg1, jint arg2);
		Space(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0) const;
	};
} // namespace android::widget

