#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media
{
	class TimedText : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimedText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimedText(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::Rect getBounds() const;
		JString getText() const;
	};
} // namespace android::media

