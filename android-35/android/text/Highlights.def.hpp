#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Paint;
}

namespace android::text
{
	class Highlights : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Highlights(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Highlights(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::Paint getPaint(jint arg0) const;
		JIntArray getRanges(jint arg0) const;
		jint getSize() const;
	};
} // namespace android::text

