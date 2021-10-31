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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineBreaker_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_Builder(QAndroidJniObject obj);
		
		// Constructors
		LineBreaker_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setIndents(jintArray arg0);
		QAndroidJniObject setJustificationMode(jint arg0);
	};
} // namespace android::graphics::text

