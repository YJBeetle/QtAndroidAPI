#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::text
{
	class LineBreaker;
}

namespace android::graphics::text
{
	class LineBreaker_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreaker_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_Builder(QJniObject obj);
		
		// Constructors
		LineBreaker_Builder();
		
		// Methods
		android::graphics::text::LineBreaker build();
		android::graphics::text::LineBreaker_Builder setBreakStrategy(jint arg0);
		android::graphics::text::LineBreaker_Builder setHyphenationFrequency(jint arg0);
		android::graphics::text::LineBreaker_Builder setIndents(jintArray arg0);
		android::graphics::text::LineBreaker_Builder setJustificationMode(jint arg0);
	};
} // namespace android::graphics::text

