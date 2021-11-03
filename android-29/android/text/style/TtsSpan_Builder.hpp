#pragma once

#include "../../../JObject.hpp"

namespace android::text::style
{
	class TtsSpan;
}
class JString;

namespace android::text::style
{
	class TtsSpan_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_Builder(QJniObject obj);
		
		// Constructors
		TtsSpan_Builder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan build();
		android::text::style::TtsSpan_Builder setIntArgument(JString arg0, jint arg1);
		android::text::style::TtsSpan_Builder setLongArgument(JString arg0, jlong arg1);
		android::text::style::TtsSpan_Builder setStringArgument(JString arg0, JString arg1);
	};
} // namespace android::text::style

