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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TtsSpan_Builder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan build() const;
		android::text::style::TtsSpan_Builder setIntArgument(JString arg0, jint arg1) const;
		android::text::style::TtsSpan_Builder setLongArgument(JString arg0, jlong arg1) const;
		android::text::style::TtsSpan_Builder setStringArgument(JString arg0, JString arg1) const;
	};
} // namespace android::text::style

