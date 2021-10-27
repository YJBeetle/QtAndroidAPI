#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Paint;
}
namespace android::graphics::text
{
	class MeasuredText;
}

namespace android::graphics::text
{
	class MeasuredText_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		MeasuredText_Builder(QAndroidJniObject obj);
		// Constructors
		MeasuredText_Builder(jcharArray &arg0);
		MeasuredText_Builder(android::graphics::text::MeasuredText &arg0);
		MeasuredText_Builder() = default;
		
		// Methods
		QAndroidJniObject appendReplacementRun(android::graphics::Paint arg0, jint arg1, jfloat arg2);
		QAndroidJniObject appendStyleRun(android::graphics::Paint arg0, jint arg1, jboolean arg2);
		QAndroidJniObject build();
		QAndroidJniObject setComputeHyphenation(jboolean arg0);
		QAndroidJniObject setComputeLayout(jboolean arg0);
	};
} // namespace android::graphics::text

