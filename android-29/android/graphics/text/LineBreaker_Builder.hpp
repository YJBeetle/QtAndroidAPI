#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::graphics::text
{
	class LineBreaker;
}

namespace android::graphics::text
{
	class LineBreaker_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineBreaker_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_Builder(QAndroidJniObject obj);
		
		// Constructors
		LineBreaker_Builder();
		
		// Methods
		android::graphics::text::LineBreaker build() const;
		android::graphics::text::LineBreaker_Builder setBreakStrategy(jint arg0) const;
		android::graphics::text::LineBreaker_Builder setHyphenationFrequency(jint arg0) const;
		android::graphics::text::LineBreaker_Builder setIndents(JIntArray arg0) const;
		android::graphics::text::LineBreaker_Builder setJustificationMode(jint arg0) const;
	};
} // namespace android::graphics::text

