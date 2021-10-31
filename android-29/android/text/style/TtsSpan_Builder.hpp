#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::text::style
{
	class TtsSpan;
}

namespace android::text::style
{
	class TtsSpan_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TtsSpan_Builder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_Builder(jstring arg0);
		TtsSpan_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setIntArgument(jstring arg0, jint arg1);
		QAndroidJniObject setLongArgument(jstring arg0, jlong arg1);
		QAndroidJniObject setStringArgument(jstring arg0, jstring arg1);
	};
} // namespace android::text::style

