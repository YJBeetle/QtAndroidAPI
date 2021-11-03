#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
class JString;

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
		android::graphics::Rect getBounds() const;
		JString getText() const;
	};
} // namespace android::media

