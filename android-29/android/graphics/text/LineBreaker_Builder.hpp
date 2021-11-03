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
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreaker_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_Builder(QJniObject obj);
		
		// Constructors
		LineBreaker_Builder();
		
		// Methods
		android::graphics::text::LineBreaker build();
		android::graphics::text::LineBreaker_Builder setBreakStrategy(jint arg0);
		android::graphics::text::LineBreaker_Builder setHyphenationFrequency(jint arg0);
		android::graphics::text::LineBreaker_Builder setIndents(JIntArray arg0);
		android::graphics::text::LineBreaker_Builder setJustificationMode(jint arg0);
	};
} // namespace android::graphics::text

