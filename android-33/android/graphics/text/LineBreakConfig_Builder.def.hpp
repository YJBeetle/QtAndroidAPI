#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::text
{
	class LineBreakConfig;
}

namespace android::graphics::text
{
	class LineBreakConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreakConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreakConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LineBreakConfig_Builder();
		
		// Methods
		android::graphics::text::LineBreakConfig build() const;
		android::graphics::text::LineBreakConfig_Builder setLineBreakStyle(jint arg0) const;
		android::graphics::text::LineBreakConfig_Builder setLineBreakWordStyle(jint arg0) const;
	};
} // namespace android::graphics::text

