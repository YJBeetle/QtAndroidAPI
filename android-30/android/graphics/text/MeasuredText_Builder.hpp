#pragma once

#include "../../../JObject.hpp"

class JCharArray;
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
	class MeasuredText_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MeasuredText_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeasuredText_Builder(QAndroidJniObject obj);
		
		// Constructors
		MeasuredText_Builder(JCharArray arg0);
		MeasuredText_Builder(android::graphics::text::MeasuredText arg0);
		
		// Methods
		android::graphics::text::MeasuredText_Builder appendReplacementRun(android::graphics::Paint arg0, jint arg1, jfloat arg2);
		android::graphics::text::MeasuredText_Builder appendStyleRun(android::graphics::Paint arg0, jint arg1, jboolean arg2);
		android::graphics::text::MeasuredText build();
		android::graphics::text::MeasuredText_Builder setComputeHyphenation(jboolean arg0);
		android::graphics::text::MeasuredText_Builder setComputeLayout(jboolean arg0);
	};
} // namespace android::graphics::text

