#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}

namespace android::text::method
{
	class ReplacementTransformationMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		ReplacementTransformationMethod(QAndroidJniObject obj);
		// Constructors
		ReplacementTransformationMethod();
		
		// Methods
		jstring getTransformation(jstring arg0, android::view::View arg1);
		jstring getTransformation(const QString &arg0, android::view::View arg1);
		void onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4);
		void onFocusChanged(android::view::View arg0, const QString &arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4);
	};
} // namespace android::text::method

