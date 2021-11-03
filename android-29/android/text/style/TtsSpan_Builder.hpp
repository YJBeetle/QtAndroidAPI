#pragma once

#include "../../../JObject.hpp"

namespace android::text::style
{
	class TtsSpan;
}

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
		TtsSpan_Builder(jstring arg0);
		
		// Methods
		android::text::style::TtsSpan build();
		android::text::style::TtsSpan_Builder setIntArgument(jstring arg0, jint arg1);
		android::text::style::TtsSpan_Builder setLongArgument(jstring arg0, jlong arg1);
		android::text::style::TtsSpan_Builder setStringArgument(jstring arg0, jstring arg1);
	};
} // namespace android::text::style

