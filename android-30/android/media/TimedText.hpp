#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::media
{
	class TimedText : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimedText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimedText(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Rect getBounds();
		jstring getText();
	};
} // namespace android::media

