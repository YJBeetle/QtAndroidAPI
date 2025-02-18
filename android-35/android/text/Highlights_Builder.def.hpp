#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Paint;
}
namespace android::text
{
	class Highlights;
}

namespace android::text
{
	class Highlights_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Highlights_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Highlights_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Highlights_Builder();
		
		// Methods
		android::text::Highlights_Builder addRange(android::graphics::Paint arg0, jint arg1, jint arg2) const;
		android::text::Highlights_Builder addRanges(android::graphics::Paint arg0, JIntArray arg1) const;
		android::text::Highlights build() const;
	};
} // namespace android::text

